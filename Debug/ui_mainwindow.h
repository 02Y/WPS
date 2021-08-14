/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *newAction;
    QAction *openAction;
    QAction *saveAction;
    QAction *saveAsAction;
    QAction *printAction;
    QAction *printViewAction;
    QAction *exitAction;
    QAction *undoAction;
    QAction *redoAction;
    QAction *cutAction;
    QAction *copyAction;
    QAction *pasteAction;
    QAction *colorAction;
    QAction *boldAction;
    QAction *italicAction;
    QAction *underLineAction;
    QAction *leftAlignAction;
    QAction *centerAction;
    QAction *rightAlignaction;
    QAction *justifyAction;
    QAction *closeAction;
    QAction *closeAllAction;
    QAction *tittleAtion;
    QAction *cascadeAction;
    QAction *nextAction;
    QAction *previousAction;
    QAction *aboutAction;
    QWidget *centralWidget;
    QComboBox *comboBox;
    QComboBox *sizeComboBox;
    QFontComboBox *fontComboBox;
    QMdiArea *mdiArea;
    QMenuBar *menuBar;
    QMenu *menu_F;
    QMenu *menu_E;
    QMenu *menu_O;
    QMenu *menu_D;
    QMenu *menu;
    QMenu *menu_W;
    QMenu *menu_H;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(723, 516);
        newAction = new QAction(MainWindow);
        newAction->setObjectName(QStringLiteral("newAction"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        newAction->setIcon(icon);
        openAction = new QAction(MainWindow);
        openAction->setObjectName(QStringLiteral("openAction"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        openAction->setIcon(icon1);
        saveAction = new QAction(MainWindow);
        saveAction->setObjectName(QStringLiteral("saveAction"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveAction->setIcon(icon2);
        saveAsAction = new QAction(MainWindow);
        saveAsAction->setObjectName(QStringLiteral("saveAsAction"));
        printAction = new QAction(MainWindow);
        printAction->setObjectName(QStringLiteral("printAction"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        printAction->setIcon(icon3);
        printViewAction = new QAction(MainWindow);
        printViewAction->setObjectName(QStringLiteral("printViewAction"));
        exitAction = new QAction(MainWindow);
        exitAction->setObjectName(QStringLiteral("exitAction"));
        undoAction = new QAction(MainWindow);
        undoAction->setObjectName(QStringLiteral("undoAction"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        undoAction->setIcon(icon4);
        redoAction = new QAction(MainWindow);
        redoAction->setObjectName(QStringLiteral("redoAction"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        redoAction->setIcon(icon5);
        cutAction = new QAction(MainWindow);
        cutAction->setObjectName(QStringLiteral("cutAction"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        cutAction->setIcon(icon6);
        copyAction = new QAction(MainWindow);
        copyAction->setObjectName(QStringLiteral("copyAction"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        copyAction->setIcon(icon7);
        pasteAction = new QAction(MainWindow);
        pasteAction->setObjectName(QStringLiteral("pasteAction"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        pasteAction->setIcon(icon8);
        colorAction = new QAction(MainWindow);
        colorAction->setObjectName(QStringLiteral("colorAction"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/color.ico"), QSize(), QIcon::Normal, QIcon::Off);
        colorAction->setIcon(icon9);
        boldAction = new QAction(MainWindow);
        boldAction->setObjectName(QStringLiteral("boldAction"));
        boldAction->setCheckable(true);
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        boldAction->setIcon(icon10);
        italicAction = new QAction(MainWindow);
        italicAction->setObjectName(QStringLiteral("italicAction"));
        italicAction->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/images/italic.png"), QSize(), QIcon::Normal, QIcon::Off);
        italicAction->setIcon(icon11);
        underLineAction = new QAction(MainWindow);
        underLineAction->setObjectName(QStringLiteral("underLineAction"));
        underLineAction->setCheckable(true);
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/images/under.png"), QSize(), QIcon::Normal, QIcon::Off);
        underLineAction->setIcon(icon12);
        leftAlignAction = new QAction(MainWindow);
        leftAlignAction->setObjectName(QStringLiteral("leftAlignAction"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/images/left.png"), QSize(), QIcon::Normal, QIcon::Off);
        leftAlignAction->setIcon(icon13);
        centerAction = new QAction(MainWindow);
        centerAction->setObjectName(QStringLiteral("centerAction"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/images/center.png"), QSize(), QIcon::Normal, QIcon::Off);
        centerAction->setIcon(icon14);
        rightAlignaction = new QAction(MainWindow);
        rightAlignaction->setObjectName(QStringLiteral("rightAlignaction"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/images/right.png"), QSize(), QIcon::Normal, QIcon::Off);
        rightAlignaction->setIcon(icon15);
        justifyAction = new QAction(MainWindow);
        justifyAction->setObjectName(QStringLiteral("justifyAction"));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/images/justify.png"), QSize(), QIcon::Normal, QIcon::Off);
        justifyAction->setIcon(icon16);
        closeAction = new QAction(MainWindow);
        closeAction->setObjectName(QStringLiteral("closeAction"));
        closeAllAction = new QAction(MainWindow);
        closeAllAction->setObjectName(QStringLiteral("closeAllAction"));
        tittleAtion = new QAction(MainWindow);
        tittleAtion->setObjectName(QStringLiteral("tittleAtion"));
        cascadeAction = new QAction(MainWindow);
        cascadeAction->setObjectName(QStringLiteral("cascadeAction"));
        nextAction = new QAction(MainWindow);
        nextAction->setObjectName(QStringLiteral("nextAction"));
        previousAction = new QAction(MainWindow);
        previousAction->setObjectName(QStringLiteral("previousAction"));
        aboutAction = new QAction(MainWindow);
        aboutAction->setObjectName(QStringLiteral("aboutAction"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(0, 0, 151, 22));
        sizeComboBox = new QComboBox(centralWidget);
        sizeComboBox->setObjectName(QStringLiteral("sizeComboBox"));
        sizeComboBox->setGeometry(QRect(420, 0, 121, 22));
        fontComboBox = new QFontComboBox(centralWidget);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));
        fontComboBox->setGeometry(QRect(150, 0, 271, 22));
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));
        mdiArea->setGeometry(QRect(0, 20, 721, 401));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 723, 26));
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName(QStringLiteral("menu_F"));
        menu_E = new QMenu(menuBar);
        menu_E->setObjectName(QStringLiteral("menu_E"));
        menu_O = new QMenu(menuBar);
        menu_O->setObjectName(QStringLiteral("menu_O"));
        menu_D = new QMenu(menu_O);
        menu_D->setObjectName(QStringLiteral("menu_D"));
        menu = new QMenu(menu_O);
        menu->setObjectName(QStringLiteral("menu"));
        menu_W = new QMenu(menuBar);
        menu_W->setObjectName(QStringLiteral("menu_W"));
        menu_H = new QMenu(menuBar);
        menu_H->setObjectName(QStringLiteral("menu_H"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName(QStringLiteral("toolBar_2"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_2);

        menuBar->addAction(menu_F->menuAction());
        menuBar->addAction(menu_E->menuAction());
        menuBar->addAction(menu_O->menuAction());
        menuBar->addAction(menu_W->menuAction());
        menuBar->addAction(menu_H->menuAction());
        menu_F->addAction(newAction);
        menu_F->addAction(openAction);
        menu_F->addAction(saveAction);
        menu_F->addAction(saveAsAction);
        menu_F->addSeparator();
        menu_F->addAction(printAction);
        menu_F->addAction(printViewAction);
        menu_F->addAction(exitAction);
        menu_E->addAction(undoAction);
        menu_E->addAction(redoAction);
        menu_E->addAction(cutAction);
        menu_E->addAction(copyAction);
        menu_E->addAction(pasteAction);
        menu_O->addAction(menu_D->menuAction());
        menu_O->addAction(menu->menuAction());
        menu_O->addAction(colorAction);
        menu_D->addAction(boldAction);
        menu_D->addAction(italicAction);
        menu_D->addAction(underLineAction);
        menu->addAction(leftAlignAction);
        menu->addAction(centerAction);
        menu->addAction(rightAlignaction);
        menu->addAction(justifyAction);
        menu_W->addAction(closeAction);
        menu_W->addAction(closeAllAction);
        menu_W->addAction(tittleAtion);
        menu_W->addAction(cascadeAction);
        menu_W->addAction(nextAction);
        menu_W->addAction(previousAction);
        menu_H->addAction(aboutAction);
        mainToolBar->addAction(newAction);
        mainToolBar->addAction(openAction);
        mainToolBar->addAction(saveAction);
        mainToolBar->addAction(printAction);
        toolBar->addAction(undoAction);
        toolBar->addAction(redoAction);
        toolBar->addAction(cutAction);
        toolBar->addAction(copyAction);
        toolBar->addAction(pasteAction);
        toolBar_2->addAction(colorAction);
        toolBar_2->addAction(boldAction);
        toolBar_2->addAction(italicAction);
        toolBar_2->addAction(underLineAction);
        toolBar_2->addSeparator();
        toolBar_2->addAction(leftAlignAction);
        toolBar_2->addAction(centerAction);
        toolBar_2->addAction(rightAlignaction);
        toolBar_2->addAction(justifyAction);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\346\210\221\347\232\204WPS", Q_NULLPTR));
        newAction->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272(N)", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        newAction->setStatusTip(QApplication::translate("MainWindow", "\345\210\233\345\273\272\344\270\200\344\270\252\346\226\260\346\226\207\346\241\243", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        newAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        openAction->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200(O)", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        openAction->setStatusTip(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\200\344\270\252\345\267\262\345\255\230\345\234\250\346\226\207\346\241\243", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        openAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        saveAction->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230(S)", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        saveAction->setStatusTip(QApplication::translate("MainWindow", "\345\260\206\345\275\223\345\211\215\346\226\207\346\241\243\345\255\230\347\233\230", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        saveAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        saveAsAction->setText(QApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272(A)...", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        saveAsAction->setStatusTip(QApplication::translate("MainWindow", "\344\273\245\344\270\200\344\270\252\346\226\260\345\220\215\345\255\227\344\277\235\345\255\230\346\226\207\346\241\243", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        saveAsAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        printAction->setText(QApplication::translate("MainWindow", "\346\211\223\345\215\260(P)...", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        printAction->setStatusTip(QApplication::translate("MainWindow", "\346\211\223\345\215\260\350\276\223\345\207\272\346\226\207\346\241\243", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        printAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        printViewAction->setText(QApplication::translate("MainWindow", "\346\211\223\345\215\260\351\242\204\350\247\210...", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        printViewAction->setStatusTip(QApplication::translate("MainWindow", "\351\242\204\350\247\210\346\211\223\345\215\260\346\225\210\346\236\234", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        exitAction->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        exitAction->setStatusTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272\345\272\224\347\224\250\347\250\213\345\272\217", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        undoAction->setText(QApplication::translate("MainWindow", "\346\222\244\351\224\200(U)", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        undoAction->setStatusTip(QApplication::translate("MainWindow", "\346\222\244\351\224\200\345\275\223\345\211\215\346\223\215\344\275\234", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        undoAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+U", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        redoAction->setText(QApplication::translate("MainWindow", "\351\207\215\345\201\232(R)", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        redoAction->setStatusTip(QApplication::translate("MainWindow", "\346\201\242\345\244\215\344\271\213\345\211\215\346\223\215\344\275\234", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        redoAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        cutAction->setText(QApplication::translate("MainWindow", "\345\211\252\345\210\207(X)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cutAction->setToolTip(QApplication::translate("MainWindow", "\345\211\252\345\210\207(X)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cutAction->setStatusTip(QApplication::translate("MainWindow", "\344\273\216\346\226\207\346\241\243\344\270\255\350\243\201\345\211\252\346\211\200\351\200\211\345\206\205\345\256\271\357\274\214\345\271\266\346\224\276\345\205\245\345\211\252\345\210\207\346\235\277", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        cutAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        copyAction->setText(QApplication::translate("MainWindow", "\345\244\215\345\210\266(C)", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        copyAction->setStatusTip(QApplication::translate("MainWindow", "\345\244\215\345\210\266\346\211\200\351\200\211\345\206\205\345\256\271\357\274\214\345\271\266\346\224\276\345\205\245\345\211\252\345\210\207\346\235\277", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        copyAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        pasteAction->setText(QApplication::translate("MainWindow", "\347\262\230\350\264\264(V)", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        pasteAction->setStatusTip(QApplication::translate("MainWindow", "\345\260\206\345\211\252\345\210\207\346\235\277\345\206\205\345\256\271\347\262\230\350\264\264\345\210\260\346\226\207\346\241\243", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        pasteAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        colorAction->setText(QApplication::translate("MainWindow", "\351\242\234\350\211\262(P)...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        colorAction->setToolTip(QApplication::translate("MainWindow", "\351\242\234\350\211\262(P)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        colorAction->setStatusTip(QApplication::translate("MainWindow", "\350\256\276\347\275\256\346\226\207\345\255\227\351\242\234\350\211\262", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        colorAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+P", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        boldAction->setText(QApplication::translate("MainWindow", "\345\212\240\347\262\227(B)", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        boldAction->setStatusTip(QApplication::translate("MainWindow", "\345\260\206\346\211\200\351\200\211\346\226\207\345\255\227\345\212\240\347\262\227", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        boldAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+B", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        italicAction->setText(QApplication::translate("MainWindow", "\345\200\276\346\226\234(I)", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        italicAction->setStatusTip(QApplication::translate("MainWindow", "\345\260\206\346\211\200\351\200\211\346\226\207\345\255\227\347\224\250\346\226\234\344\275\223\346\230\276\347\244\272", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        italicAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+I", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        underLineAction->setText(QApplication::translate("MainWindow", "\344\270\213\345\210\222\347\272\277(U)", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        underLineAction->setStatusTip(QApplication::translate("MainWindow", "\345\260\206\346\211\200\351\200\211\346\226\207\345\255\227\345\212\240\344\270\213\345\210\222\347\272\277", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        underLineAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+U", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        leftAlignAction->setText(QApplication::translate("MainWindow", "\345\267\246\345\257\271\351\275\220(L)", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        leftAlignAction->setStatusTip(QApplication::translate("MainWindow", "\345\260\206\346\226\207\345\255\227\345\267\246\345\257\271\351\275\220", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        leftAlignAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        centerAction->setText(QApplication::translate("MainWindow", "\345\261\205\344\270\255(E)", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        centerAction->setStatusTip(QApplication::translate("MainWindow", "\345\260\206\346\211\200\351\200\211\346\226\207\345\255\227\345\261\205\344\270\255\346\230\276\347\244\272", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        centerAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        rightAlignaction->setText(QApplication::translate("MainWindow", "\345\217\263\345\257\271\351\275\220(K)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        rightAlignaction->setToolTip(QApplication::translate("MainWindow", "\345\217\263\345\257\271\351\275\220(K)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        rightAlignaction->setStatusTip(QApplication::translate("MainWindow", "\345\260\206\346\211\200\351\200\211\346\226\207\345\255\227\345\217\263\345\257\271\351\275\220", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        rightAlignaction->setShortcut(QApplication::translate("MainWindow", "Ctrl+K", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        justifyAction->setText(QApplication::translate("MainWindow", "\344\270\244\347\253\257\345\257\271\351\275\220(J)", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        justifyAction->setStatusTip(QApplication::translate("MainWindow", "\345\260\206\346\211\200\351\200\211\346\226\207\345\255\227\344\270\244\347\253\257\345\257\271\351\275\220", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        justifyAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+J", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        closeAction->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255(O)", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        closeAction->setStatusTip(QApplication::translate("MainWindow", "\345\205\263\351\227\255\346\264\273\345\212\250\347\252\227\345\217\243", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        closeAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        closeAllAction->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\346\211\200\346\234\211(L)", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        closeAllAction->setStatusTip(QApplication::translate("MainWindow", "\345\205\263\351\227\255\346\211\200\346\234\211\347\252\227\345\217\243", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        closeAllAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+L", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        tittleAtion->setText(QApplication::translate("MainWindow", "\345\271\263\351\223\272(T)", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        tittleAtion->setStatusTip(QApplication::translate("MainWindow", "\345\271\263\351\223\272\345\255\220\347\252\227\345\217\243", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        tittleAtion->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+T", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        cascadeAction->setText(QApplication::translate("MainWindow", "\345\261\202\345\217\240(D)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cascadeAction->setToolTip(QApplication::translate("MainWindow", "\345\261\202\345\217\240(D)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cascadeAction->setStatusTip(QApplication::translate("MainWindow", "\345\261\202\345\217\240\345\255\220\347\252\227\345\217\243", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        cascadeAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+D", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        nextAction->setText(QApplication::translate("MainWindow", "\344\270\213\344\270\200\344\270\252(X)", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        nextAction->setStatusTip(QApplication::translate("MainWindow", "\347\247\273\345\212\250\347\204\246\347\202\271\345\210\260\344\270\213\344\270\200\344\270\252\345\255\220\347\252\227\345\217\243", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        nextAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+Tab", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        previousAction->setText(QApplication::translate("MainWindow", "\345\211\215\344\270\200\344\270\252(U)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        previousAction->setToolTip(QApplication::translate("MainWindow", "\345\211\215\344\270\200\344\270\252(U)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        previousAction->setStatusTip(QApplication::translate("MainWindow", "\347\247\273\345\212\250\347\204\246\347\202\271\345\210\260\345\211\215\344\270\200\344\270\252\345\255\220\347\252\227\345\217\243", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        previousAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+Tab", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        aboutAction->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216(B)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        aboutAction->setToolTip(QApplication::translate("MainWindow", "\345\205\263\344\272\216(B)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        aboutAction->setStatusTip(QApplication::translate("MainWindow", "\345\205\263\344\272\216\346\210\221\347\232\204WPS 1.0", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        aboutAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+B", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\346\240\207\345\207\206", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\351\241\271\347\233\256\347\254\246\345\217\267(\342\227\217)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\351\241\271\347\233\256\347\254\246\345\217\267(\342\227\213)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\351\241\271\347\233\256\347\254\246\345\217\267(\342\226\240)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\351\241\271\347\233\256\347\254\246\345\217\267(1.2.3.)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\351\241\271\347\233\256\347\254\246\345\217\267(a.b.c.)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\351\241\271\347\233\256\347\254\246\345\217\267(A.B.C.)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\351\241\271\347\233\256\347\254\246\345\217\267(\342\205\260.\342\205\261.\342\205\262.)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\351\241\271\347\233\256\347\254\246\345\217\267(\342\205\240.\342\205\241.\342\205\242.)", Q_NULLPTR)
        );
        sizeComboBox->clear();
        sizeComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\345\255\227\345\217\267", Q_NULLPTR)
        );
        menu_F->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", Q_NULLPTR));
        menu_E->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221(&E)", Q_NULLPTR));
        menu_O->setTitle(QApplication::translate("MainWindow", "\346\240\274\345\274\217(&O)", Q_NULLPTR));
        menu_D->setTitle(QApplication::translate("MainWindow", "\345\255\227\344\275\223(D)", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "\346\256\265\350\220\275", Q_NULLPTR));
        menu_W->setTitle(QApplication::translate("MainWindow", "\347\252\227\344\275\223(&W)", Q_NULLPTR));
        menu_H->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251(&H)", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", Q_NULLPTR));
        toolBar_2->setWindowTitle(QApplication::translate("MainWindow", "toolBar_2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
