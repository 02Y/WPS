#include "childwnd.h"
#include <QFileInfo>
#include <QDebug>
#include <QFileDialog>
#include <QTextDocumentWriter>
#include <QMessageBox>
#include <QCloseEvent>
#include <QTextBlockFormat>
#include <QTextListFormat>
#include <QtWidgets>

ChildWnd::ChildWnd()
{
    //子窗口关闭时，销毁该类的实例对象
    setAttribute(Qt::WA_DeleteOnClose);

    m_bSaved = false;
}

void ChildWnd::newDoc()
{
    static int wndSeqNum = 1;
    m_CurDocPath = QString("WPS 文档 %1").arg(wndSeqNum++);

    //设置窗体标题，文档改动后名称后加“*”号标识
    setWindowTitle(m_CurDocPath + "[*]" + "- MyWPS");
    connect(document(), &QTextDocument::contentsChanged,
            this, &ChildWnd::docBeModified);
}

QString ChildWnd::getCurDocName()
{
    return QFileInfo(m_CurDocPath).fileName();
}

bool ChildWnd::loadDoc(const QString &docName)
{

    if(!docName.isEmpty())
    {
        QFile file(docName);

        if(!file.exists()) return false;   //文件不存在

        if(!file.open(QFile::ReadOnly)) return false;  //文件打开失败

        QByteArray text = file.readAll();   //读取所有数据并以字节数组返回

        if(Qt::mightBeRichText(text))     //如果是富文本
        {
            setHtml(text);      //富文本显示
        }
        else
        {

            setPlainText(text);  //纯文本显示
        }
        setCurDoc(docName);
        connect(document(), &QTextDocument::contentsChanged,
                this, &ChildWnd::docBeModified);

        return true;
    }
}

void ChildWnd::setCurDoc(const QString &docName)
{
    //canonicalFilePath() 返回校准名称路径，可以过滤"."".."
    m_CurDocPath = QFileInfo(docName).canonicalFilePath();
    m_bSaved = true;      //文档已被保存
    document()->setModified(false);  //文档未改动
    setWindowModified(false);      //窗口不显示改动标识
    setWindowTitle(getCurDocName() + "[*]");   //设置子窗口标题
}

bool ChildWnd::saveDoc()
{
    if(m_bSaved) return saveDocOpt(m_CurDocPath);
    else saveAsDoc();
}

bool ChildWnd::saveAsDoc()
{
    QString docName = QFileDialog::getSaveFileName(this, "另存为", m_CurDocPath,
                                                   "HTML文档(*.htm *.html);;"
                                                            "所有文件(*.*)");
    if(docName.isEmpty()) return false;
    else return saveDocOpt(docName);
}

bool ChildWnd::saveDocOpt(QString docName)
{
    if(!(docName.endsWith(".htm", Qt::CaseInsensitive) ||
            docName.endsWith(".html", Qt::CaseInsensitive)))
    {
        docName += ".html";
    }

    QTextDocumentWriter writer(docName);
    bool isSuccess = writer.write(this->document());
    if(isSuccess) setCurDoc(docName);
    return isSuccess;
}

void ChildWnd::setFormatOnselectedWord(const QTextCharFormat &fmt)
{
    QTextCursor tcursor = textCursor();  //获取当前光标
    if(!tcursor.hasSelection())      //光标是否有选中文本
    {
        tcursor.select(QTextCursor::WordUnderCursor);
    }

    tcursor.mergeCharFormat(fmt);
    mergeCurrentCharFormat(fmt);
}

void ChildWnd::setAlignOfDocumentText(int aligntype)
{
    if(aligntype == 1)
        setAlignment(Qt::AlignLeft | Qt::AlignAbsolute);
    else if(aligntype == 2)
        setAlignment(Qt::AlignRight | Qt::AlignAbsolute);
    else if(aligntype == 3)
        setAlignment(Qt::AlignCenter);
    else if(aligntype == 4)
        setAlignment(Qt::AlignJustify);
}

void ChildWnd::setParaStyle(int pStyle)
{
    QTextCursor tcursor = textCursor();

    QTextListFormat::Style sname;
    if(pStyle != 0)
    {
        switch (pStyle) {
        case 1:
            sname = QTextListFormat::ListDisc;  //黑心实心圆
            break;
        case 2:
            sname = QTextListFormat::ListCircle;  //空心圆
            break;
        case 3:
            sname = QTextListFormat::ListSquare;  //方形
            break;
        case 4:
            sname = QTextListFormat::ListDecimal; //十进制整数
            break;
        case 5:
            sname = QTextListFormat::ListLowerAlpha;  //小写字母
            break;
        case 6:
            sname = QTextListFormat::ListUpperAlpha;  //大写字母
            break;
        case 7:
            sname = QTextListFormat::ListLowerRoman;  //小写罗马字母
            break;
        case 8:
            sname = QTextListFormat::ListUpperRoman;  //大写罗马字母
            break;
        default:
            sname = QTextListFormat::ListDisc;
            break;
        }
        tcursor.beginEditBlock();  //编辑开始
        QTextBlockFormat tBlockFmt = tcursor.blockFormat();  //获取文本块格式
        QTextListFormat tListFmt;
        if(tcursor.currentList())
        {
            tListFmt = tcursor.currentList()->format();
        }
        else
        {
            tListFmt.setIndent(tBlockFmt.indent() + 1);
            tBlockFmt.setIndent(0);
            tcursor.setBlockFormat(tBlockFmt);
        }
        tListFmt.setStyle(sname);   //设置标号风格
        tcursor.createList(tListFmt);

        tcursor.endEditBlock();    //编辑结束
    }
    else
    {
        QTextBlockFormat tbfmt;
        tbfmt.setObjectIndex(-1);  //设置格式无效
        tcursor.mergeBlockFormat(tbfmt);
    }
}

void ChildWnd::closeEvent(QCloseEvent *event)
{
    if(promptSave())
        event->accept();
    else
        event->ignore();
}

bool ChildWnd::promptSave()
{
    if(!document()->isModified()) return true;

    QMessageBox::StandardButton result;
    result = QMessageBox::warning(this, QString("提示"),
                                  QString("文档%1已修改，是否保存？")
                                  .arg(getCurDocName()),
                                  QMessageBox::Yes |
                                  QMessageBox::Discard |
                                  QMessageBox::No);
    if(result == QMessageBox::Yes)
        return saveDoc();
    else if(result == QMessageBox::No)
        return false;
}

void ChildWnd::docBeModified()
{
    setWindowModified(document()->isModified());
}
