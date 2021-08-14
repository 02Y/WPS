#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "childwnd.h"
#include <QSignalMapper>
#include <QMdiSubWindow>
#include <QtPrintSupport/QPrinter>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void initMainWindow();
    void docNew();
    void docOpen();
    void docSave();
    void docSaveAs();
    void docPrint();     //打印
    void docPrintView();   //打印预览
    void docUndo();   //撤销
    void docRedo();   //重做
    void docCopy();   //复制
    void docPaste();  //粘贴
    void docCut();    //剪切
    void textBold();  //加粗
    void textItalic();      //倾斜
    void textUnderline();   //下划线
    void textFamily(const QString& fmly);  //设置字体
    void textSize(const QString &ps);   //设置字体大小
    void textcolor();    //设置字体颜色
    void paraStyle(int nStyle);   //设置项目符号
private slots:
    void on_newAction_triggered();
    void refreshMenus();    //刷新菜单
    void addSubWndListMenu();   //启用子窗口菜单项
    void on_closeAction_triggered();

    void on_closeAllAction_triggered();

    void on_tittleAtion_triggered();

    void on_cascadeAction_triggered();

    void on_nextAction_triggered();

    void on_previousAction_triggered();

    void setActiveSubWindow(QWidget* wnd);
    void on_openAction_triggered();
    
    void on_saveAction_triggered();

    void on_saveAsAction_triggered();

    void on_undoAction_triggered();

    void on_redoAction_triggered();

    void on_cutAction_triggered();

    void on_copyAction_triggered();

    void on_pasteAction_triggered();

    void on_boldAction_triggered();

    void on_italicAction_triggered();

    void on_underLineAction_triggered();

    void on_fontComboBox_activated(const QString &arg1);

    void on_sizeComboBox_activated(const QString &arg1);

    void on_leftAlignAction_triggered();

    void on_rightAlignaction_triggered();

    void on_centerAction_triggered();

    void on_justifyAction_triggered();

    void on_colorAction_triggered();

    void on_comboBox_activated(int index);

    void on_printAction_triggered();

    void printPreview(QPrinter* printer);

    void on_printViewAction_triggered();

protected:
    void closeEvent(QCloseEvent* event);

private:
    void formatEnabled();
    ChildWnd* activateChildWnd();
    QMdiSubWindow* findChildWnd(const QString& docName);
private:
    Ui::MainWindow *ui;
    QSignalMapper* m_WndMapper;  //信号映射器
};

#endif // MAINWINDOW_H
