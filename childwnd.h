#ifndef CHILDWND_H
#define CHILDWND_H

#include <QTextEdit>

class ChildWnd : public QTextEdit
{
    Q_OBJECT
public:
    ChildWnd();
    void newDoc();     //新建文档
    QString getCurDocName();   //文件路径中提取文档名
    QString m_CurDocPath;  //当前选中的文档路径
    bool loadDoc(const QString& docName);
    void setCurDoc(const QString& docName);   //设置当前文档
    bool saveDoc();      //保存文档到文件夹
    bool saveAsDoc();    //另存为
    bool saveDocOpt(QString docName);   //保存文档
    void setFormatOnselectedWord(const QTextCharFormat& fmt);  //设置选中文档格式
    void setAlignOfDocumentText(int aligntype);   //选择对齐方式
    void setParaStyle(int pStyle);   //设置项目符号
protected:
    void closeEvent(QCloseEvent *event);  //关闭事件处理
private:
    bool promptSave();      //关闭时提醒保存
private slots:
    void docBeModified();    //文档修改时，窗口的标题栏加“*”
private:
    bool m_bSaved;      //文档是否保存
};

#endif // CHILDWND_H
