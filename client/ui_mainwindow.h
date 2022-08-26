/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "clabel.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
 public:
  QAction* actionNew;
  QAction* actionConnect;
  QAction* actionQuit;
  QAction* actionSlow;
  QAction* actionNormal;
  QAction* actionFast;
  QAction* actionShow;
  QAction* actionReset;
  QAction* actionRules;
  QAction* actionOnline;
  QAction* actionSave_game;
  QAction* actionEnglish;
  QAction* actionSrpski;
  QWidget* centralwidget;
  CLabel* labelKartaURuci3;
  CLabel* labelKartaURuci8;
  QTextEdit* textEdit;
  CLabel* labelKartaNaTalonuDesno;
  CLabel* labelKartaURuci4;
  CLabel* labelKartaURuci7;
  QLineEdit* lineEdit;
  CLabel* labelKartaNaTalonuLevo;
  QLabel* labelIgracDesno;
  CLabel* labelKartaURuci2;
  CLabel* labelKartaURuci1;
  QLabel* labelIgracDole;
  QLCDNumber* lcdBrojDole;
  QLCDNumber* lcdBrojGore;
  CLabel* labelKartaURuci6;
  QPushButton* pushButton_6;
  QProgressBar* progressBar;
  QLabel* labelIgracGore;
  CLabel* labelKartaURuci5;
  CLabel* labelKartaNaTalonuDole;
  QLabel* labelIgracLevo;
  QLCDNumber* lcdBrojDesno;
  QLCDNumber* lcdBrojLevo;
  CLabel* labelKartaNaTalonuGore;
  QLabel* labelOnline;
  QMenuBar* menubar;
  QMenu* menuFile;
  QMenu* menuSettings;
  QMenu* menuStats;
  QMenu* menuHelp;
  QStatusBar* statusbar;

  void setupUi(QMainWindow* MainWindow)
  {
    if ( MainWindow->objectName().isEmpty() )
      MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
    MainWindow->resize(700, 1000);
    MainWindow->setMinimumSize(QSize(700, 1000));
    MainWindow->setMaximumSize(QSize(700, 1000));
    QPalette palette;
    QBrush brush(QColor(255, 255, 255, 255));
    brush.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
    QBrush brush1(QColor(0, 85, 0, 255));
    brush1.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Button, brush1);
    QBrush brush2(QColor(0, 127, 0, 255));
    brush2.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Light, brush2);
    QBrush brush3(QColor(0, 106, 0, 255));
    brush3.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
    QBrush brush4(QColor(0, 42, 0, 255));
    brush4.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
    QBrush brush5(QColor(0, 56, 0, 255));
    brush5.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
    palette.setBrush(QPalette::Active, QPalette::Text, brush);
    palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
    palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
    QBrush brush6(QColor(0, 0, 0, 255));
    brush6.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Base, brush6);
    palette.setBrush(QPalette::Active, QPalette::Window, brush1);
    palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
    palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
    QBrush brush7(QColor(255, 255, 220, 255));
    brush7.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
    palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
    QBrush brush8(QColor(255, 255, 255, 128));
    brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
    palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
    palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
    palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
    palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
    palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
    palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
    palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
    palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
    palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
    palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
    palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
    palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
    palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
    palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
    palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
    palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
    palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
    palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
    palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
    palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
    palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
    palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
    palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
    palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
    palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
    palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
    palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
    palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
    palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
    palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
    palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
    palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
    palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
    MainWindow->setPalette(palette);
    actionNew = new QAction(MainWindow);
    actionNew->setObjectName(QString::fromUtf8("actionNew"));
    actionConnect = new QAction(MainWindow);
    actionConnect->setObjectName(QString::fromUtf8("actionConnect"));
    actionQuit = new QAction(MainWindow);
    actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
    actionSlow = new QAction(MainWindow);
    actionSlow->setObjectName(QString::fromUtf8("actionSlow"));
    actionNormal = new QAction(MainWindow);
    actionNormal->setObjectName(QString::fromUtf8("actionNormal"));
    actionFast = new QAction(MainWindow);
    actionFast->setObjectName(QString::fromUtf8("actionFast"));
    actionShow = new QAction(MainWindow);
    actionShow->setObjectName(QString::fromUtf8("actionShow"));
    actionReset = new QAction(MainWindow);
    actionReset->setObjectName(QString::fromUtf8("actionReset"));
    actionRules = new QAction(MainWindow);
    actionRules->setObjectName(QString::fromUtf8("actionRules"));
    actionOnline = new QAction(MainWindow);
    actionOnline->setObjectName(QString::fromUtf8("actionOnline"));
    actionSave_game = new QAction(MainWindow);
    actionSave_game->setObjectName(QString::fromUtf8("actionSave_game"));
    actionEnglish = new QAction(MainWindow);
    actionEnglish->setObjectName(QString::fromUtf8("actionEnglish"));
    actionSrpski = new QAction(MainWindow);
    actionSrpski->setObjectName(QString::fromUtf8("actionSrpski"));
    centralwidget = new QWidget(MainWindow);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    labelKartaURuci3 = new CLabel(centralwidget);
    labelKartaURuci3->setObjectName(QString::fromUtf8("labelKartaURuci3"));
    labelKartaURuci3->setGeometry(QRect(230, 530, 90, 130));
    labelKartaURuci3->setText(QString::fromUtf8("Card 3"));
    labelKartaURuci8 = new CLabel(centralwidget);
    labelKartaURuci8->setObjectName(QString::fromUtf8("labelKartaURuci8"));
    labelKartaURuci8->setGeometry(QRect(405, 530, 90, 130));
    labelKartaURuci8->setText(QString::fromUtf8("Card 8"));
    textEdit = new QTextEdit(centralwidget);
    textEdit->setObjectName(QString::fromUtf8("textEdit"));
    textEdit->setGeometry(QRect(10, 735, 661, 126));
    QPalette palette1;
    palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
    palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
    QBrush brush9(QColor(63, 159, 82, 255));
    brush9.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Disabled, QPalette::Base, brush9);
    textEdit->setPalette(palette1);
    textEdit->setReadOnly(true);
    labelKartaNaTalonuDesno = new CLabel(centralwidget);
    labelKartaNaTalonuDesno->setObjectName(
        QString::fromUtf8("labelKartaNaTalonuDesno"));
    labelKartaNaTalonuDesno->setGeometry(QRect(410, 215, 90, 130));
    labelKartaNaTalonuDesno->setText(QString::fromUtf8("Card D"));
    labelKartaURuci4 = new CLabel(centralwidget);
    labelKartaURuci4->setObjectName(QString::fromUtf8("labelKartaURuci4"));
    labelKartaURuci4->setGeometry(QRect(265, 530, 90, 130));
    labelKartaURuci4->setText(QString::fromUtf8("Card 4"));
    labelKartaURuci7 = new CLabel(centralwidget);
    labelKartaURuci7->setObjectName(QString::fromUtf8("labelKartaURuci7"));
    labelKartaURuci7->setGeometry(QRect(370, 530, 90, 130));
    labelKartaURuci7->setText(QString::fromUtf8("Card 7"));
    lineEdit = new QLineEdit(centralwidget);
    lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
    lineEdit->setGeometry(QRect(50, 860, 621, 25));
    labelKartaNaTalonuLevo = new CLabel(centralwidget);
    labelKartaNaTalonuLevo->setObjectName(
        QString::fromUtf8("labelKartaNaTalonuLevo"));
    labelKartaNaTalonuLevo->setGeometry(QRect(170, 215, 90, 130));
    labelKartaNaTalonuLevo->setText(QString::fromUtf8("Card B"));
    labelIgracDesno = new QLabel(centralwidget);
    labelIgracDesno->setObjectName(QString::fromUtf8("labelIgracDesno"));
    labelIgracDesno->setGeometry(QRect(500, 250, 64, 16));
    labelIgracDesno->setText(QString::fromUtf8("D"));
    labelKartaURuci2 = new CLabel(centralwidget);
    labelKartaURuci2->setObjectName(QString::fromUtf8("labelKartaURuci2"));
    labelKartaURuci2->setGeometry(QRect(195, 530, 90, 130));
    labelKartaURuci2->setText(QString::fromUtf8("Card 2"));
    labelKartaURuci1 = new CLabel(centralwidget);
    labelKartaURuci1->setObjectName(QString::fromUtf8("labelKartaURuci1"));
    labelKartaURuci1->setGeometry(QRect(160, 530, 90, 130));
    labelKartaURuci1->setText(QString::fromUtf8("Card 1"));
    labelIgracDole = new QLabel(centralwidget);
    labelIgracDole->setObjectName(QString::fromUtf8("labelIgracDole"));
    labelIgracDole->setGeometry(QRect(370, 390, 64, 16));
    labelIgracDole->setText(QString::fromUtf8("A"));
    lcdBrojDole = new QLCDNumber(centralwidget);
    lcdBrojDole->setObjectName(QString::fromUtf8("lcdBrojDole"));
    lcdBrojDole->setGeometry(QRect(370, 410, 64, 25));
    QPalette palette2;
    palette2.setBrush(QPalette::Active, QPalette::WindowText, brush6);
    QBrush brush10(QColor(0, 170, 255, 255));
    brush10.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Active, QPalette::Button, brush10);
    QBrush brush11(QColor(127, 213, 255, 255));
    brush11.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Active, QPalette::Light, brush11);
    QBrush brush12(QColor(63, 191, 255, 255));
    brush12.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Active, QPalette::Midlight, brush12);
    QBrush brush13(QColor(0, 85, 127, 255));
    brush13.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Active, QPalette::Dark, brush13);
    QBrush brush14(QColor(0, 113, 170, 255));
    brush14.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Active, QPalette::Mid, brush14);
    palette2.setBrush(QPalette::Active, QPalette::Text, brush6);
    palette2.setBrush(QPalette::Active, QPalette::BrightText, brush);
    palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
    palette2.setBrush(QPalette::Active, QPalette::Base, brush);
    palette2.setBrush(QPalette::Active, QPalette::Window, brush10);
    palette2.setBrush(QPalette::Active, QPalette::Shadow, brush6);
    QBrush brush15(QColor(127, 212, 255, 255));
    brush15.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush15);
    palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
    palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
    QBrush brush16(QColor(0, 0, 0, 128));
    brush16.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
    palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush16);
#endif
    palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
    palette2.setBrush(QPalette::Inactive, QPalette::Button, brush10);
    palette2.setBrush(QPalette::Inactive, QPalette::Light, brush11);
    palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
    palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
    palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
    palette2.setBrush(QPalette::Inactive, QPalette::Text, brush6);
    palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
    palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
    palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
    palette2.setBrush(QPalette::Inactive, QPalette::Window, brush10);
    palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
    palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
    palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
    palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
    QBrush brush17(QColor(0, 0, 0, 128));
    brush17.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
    palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush17);
#endif
    palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush13);
    palette2.setBrush(QPalette::Disabled, QPalette::Button, brush10);
    palette2.setBrush(QPalette::Disabled, QPalette::Light, brush11);
    palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
    palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
    palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
    palette2.setBrush(QPalette::Disabled, QPalette::Text, brush13);
    palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
    palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush13);
    palette2.setBrush(QPalette::Disabled, QPalette::Base, brush10);
    palette2.setBrush(QPalette::Disabled, QPalette::Window, brush10);
    palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
    palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
    palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
    palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
    QBrush brush18(QColor(0, 0, 0, 128));
    brush18.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
    palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush18);
#endif
    lcdBrojDole->setPalette(palette2);
    lcdBrojGore = new QLCDNumber(centralwidget);
    lcdBrojGore->setObjectName(QString::fromUtf8("lcdBrojGore"));
    lcdBrojGore->setGeometry(QRect(280, 90, 64, 25));
    QPalette palette3;
    palette3.setBrush(QPalette::Active, QPalette::WindowText, brush6);
    palette3.setBrush(QPalette::Active, QPalette::Button, brush10);
    palette3.setBrush(QPalette::Active, QPalette::Light, brush11);
    palette3.setBrush(QPalette::Active, QPalette::Midlight, brush12);
    palette3.setBrush(QPalette::Active, QPalette::Dark, brush13);
    palette3.setBrush(QPalette::Active, QPalette::Mid, brush14);
    palette3.setBrush(QPalette::Active, QPalette::Text, brush6);
    palette3.setBrush(QPalette::Active, QPalette::BrightText, brush);
    palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
    palette3.setBrush(QPalette::Active, QPalette::Base, brush);
    palette3.setBrush(QPalette::Active, QPalette::Window, brush10);
    palette3.setBrush(QPalette::Active, QPalette::Shadow, brush6);
    palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush15);
    palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
    palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
    QBrush brush19(QColor(0, 0, 0, 128));
    brush19.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
    palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush19);
#endif
    palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
    palette3.setBrush(QPalette::Inactive, QPalette::Button, brush10);
    palette3.setBrush(QPalette::Inactive, QPalette::Light, brush11);
    palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
    palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
    palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
    palette3.setBrush(QPalette::Inactive, QPalette::Text, brush6);
    palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
    palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
    palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
    palette3.setBrush(QPalette::Inactive, QPalette::Window, brush10);
    palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
    palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
    palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
    palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
    QBrush brush20(QColor(0, 0, 0, 128));
    brush20.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
    palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush20);
#endif
    palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush13);
    palette3.setBrush(QPalette::Disabled, QPalette::Button, brush10);
    palette3.setBrush(QPalette::Disabled, QPalette::Light, brush11);
    palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
    palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
    palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
    palette3.setBrush(QPalette::Disabled, QPalette::Text, brush13);
    palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
    palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush13);
    palette3.setBrush(QPalette::Disabled, QPalette::Base, brush10);
    palette3.setBrush(QPalette::Disabled, QPalette::Window, brush10);
    palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
    palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
    palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
    palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
    QBrush brush21(QColor(0, 0, 0, 128));
    brush21.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
    palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush21);
#endif
    lcdBrojGore->setPalette(palette3);
    labelKartaURuci6 = new CLabel(centralwidget);
    labelKartaURuci6->setObjectName(QString::fromUtf8("labelKartaURuci6"));
    labelKartaURuci6->setGeometry(QRect(335, 530, 90, 130));
    labelKartaURuci6->setText(QString::fromUtf8("Card 6"));
    pushButton_6 = new QPushButton(centralwidget);
    pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
    pushButton_6->setGeometry(QRect(10, 860, 41, 25));
    pushButton_6->setText(QString::fromUtf8(">"));
    progressBar = new QProgressBar(centralwidget);
    progressBar->setObjectName(QString::fromUtf8("progressBar"));
    progressBar->setGeometry(QRect(280, 700, 118, 23));
    progressBar->setValue(100);
    labelIgracGore = new QLabel(centralwidget);
    labelIgracGore->setObjectName(QString::fromUtf8("labelIgracGore"));
    labelIgracGore->setGeometry(QRect(280, 70, 64, 16));
    labelIgracGore->setText(QString::fromUtf8("C"));
    labelKartaURuci5 = new CLabel(centralwidget);
    labelKartaURuci5->setObjectName(QString::fromUtf8("labelKartaURuci5"));
    labelKartaURuci5->setGeometry(QRect(300, 530, 90, 130));
    labelKartaURuci5->setText(QString::fromUtf8("Card 5"));
    labelKartaNaTalonuDole = new CLabel(centralwidget);
    labelKartaNaTalonuDole->setObjectName(
        QString::fromUtf8("labelKartaNaTalonuDole"));
    labelKartaNaTalonuDole->setGeometry(QRect(290, 355, 90, 130));
    labelKartaNaTalonuDole->setText(QString::fromUtf8("Card A"));
    labelIgracLevo = new QLabel(centralwidget);
    labelIgracLevo->setObjectName(QString::fromUtf8("labelIgracLevo"));
    labelIgracLevo->setGeometry(QRect(70, 250, 64, 16));
    labelIgracLevo->setText(QString::fromUtf8("B"));
    lcdBrojDesno = new QLCDNumber(centralwidget);
    lcdBrojDesno->setObjectName(QString::fromUtf8("lcdBrojDesno"));
    lcdBrojDesno->setGeometry(QRect(500, 270, 64, 25));
    QPalette palette4;
    palette4.setBrush(QPalette::Active, QPalette::WindowText, brush6);
    palette4.setBrush(QPalette::Active, QPalette::Button, brush10);
    palette4.setBrush(QPalette::Active, QPalette::Light, brush11);
    palette4.setBrush(QPalette::Active, QPalette::Midlight, brush12);
    palette4.setBrush(QPalette::Active, QPalette::Dark, brush13);
    palette4.setBrush(QPalette::Active, QPalette::Mid, brush14);
    palette4.setBrush(QPalette::Active, QPalette::Text, brush6);
    palette4.setBrush(QPalette::Active, QPalette::BrightText, brush);
    palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
    palette4.setBrush(QPalette::Active, QPalette::Base, brush);
    palette4.setBrush(QPalette::Active, QPalette::Window, brush10);
    palette4.setBrush(QPalette::Active, QPalette::Shadow, brush6);
    palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush15);
    palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
    palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
    QBrush brush22(QColor(0, 0, 0, 128));
    brush22.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
    palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush22);
#endif
    palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
    palette4.setBrush(QPalette::Inactive, QPalette::Button, brush10);
    palette4.setBrush(QPalette::Inactive, QPalette::Light, brush11);
    palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
    palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
    palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
    palette4.setBrush(QPalette::Inactive, QPalette::Text, brush6);
    palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
    palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
    palette4.setBrush(QPalette::Inactive, QPalette::Base, brush);
    palette4.setBrush(QPalette::Inactive, QPalette::Window, brush10);
    palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
    palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
    palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
    palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
    QBrush brush23(QColor(0, 0, 0, 128));
    brush23.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
    palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush23);
#endif
    palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush13);
    palette4.setBrush(QPalette::Disabled, QPalette::Button, brush10);
    palette4.setBrush(QPalette::Disabled, QPalette::Light, brush11);
    palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
    palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
    palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
    palette4.setBrush(QPalette::Disabled, QPalette::Text, brush13);
    palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
    palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush13);
    palette4.setBrush(QPalette::Disabled, QPalette::Base, brush10);
    palette4.setBrush(QPalette::Disabled, QPalette::Window, brush10);
    palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
    palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
    palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
    palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
    QBrush brush24(QColor(0, 0, 0, 128));
    brush24.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
    palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush24);
#endif
    lcdBrojDesno->setPalette(palette4);
    lcdBrojLevo = new QLCDNumber(centralwidget);
    lcdBrojLevo->setObjectName(QString::fromUtf8("lcdBrojLevo"));
    lcdBrojLevo->setGeometry(QRect(70, 270, 64, 25));
    QPalette palette5;
    palette5.setBrush(QPalette::Active, QPalette::WindowText, brush6);
    palette5.setBrush(QPalette::Active, QPalette::Button, brush10);
    palette5.setBrush(QPalette::Active, QPalette::Light, brush11);
    palette5.setBrush(QPalette::Active, QPalette::Midlight, brush12);
    palette5.setBrush(QPalette::Active, QPalette::Dark, brush13);
    palette5.setBrush(QPalette::Active, QPalette::Mid, brush14);
    palette5.setBrush(QPalette::Active, QPalette::Text, brush6);
    palette5.setBrush(QPalette::Active, QPalette::BrightText, brush);
    palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
    palette5.setBrush(QPalette::Active, QPalette::Base, brush);
    palette5.setBrush(QPalette::Active, QPalette::Window, brush10);
    palette5.setBrush(QPalette::Active, QPalette::Shadow, brush6);
    palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush15);
    palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
    palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
    QBrush brush25(QColor(0, 0, 0, 128));
    brush25.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
    palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush25);
#endif
    palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
    palette5.setBrush(QPalette::Inactive, QPalette::Button, brush10);
    palette5.setBrush(QPalette::Inactive, QPalette::Light, brush11);
    palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
    palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
    palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
    palette5.setBrush(QPalette::Inactive, QPalette::Text, brush6);
    palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
    palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
    palette5.setBrush(QPalette::Inactive, QPalette::Base, brush);
    palette5.setBrush(QPalette::Inactive, QPalette::Window, brush10);
    palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
    palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
    palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
    palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
    QBrush brush26(QColor(0, 0, 0, 128));
    brush26.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
    palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush26);
#endif
    palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush13);
    palette5.setBrush(QPalette::Disabled, QPalette::Button, brush10);
    palette5.setBrush(QPalette::Disabled, QPalette::Light, brush11);
    palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
    palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
    palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
    palette5.setBrush(QPalette::Disabled, QPalette::Text, brush13);
    palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
    palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush13);
    palette5.setBrush(QPalette::Disabled, QPalette::Base, brush10);
    palette5.setBrush(QPalette::Disabled, QPalette::Window, brush10);
    palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
    palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
    palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
    palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
    QBrush brush27(QColor(0, 0, 0, 128));
    brush27.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
    palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush27);
#endif
    lcdBrojLevo->setPalette(palette5);
    labelKartaNaTalonuGore = new CLabel(centralwidget);
    labelKartaNaTalonuGore->setObjectName(
        QString::fromUtf8("labelKartaNaTalonuGore"));
    labelKartaNaTalonuGore->setGeometry(QRect(290, 75, 90, 130));
    labelKartaNaTalonuGore->setText(QString::fromUtf8("Card C"));
    labelOnline = new QLabel(centralwidget);
    labelOnline->setObjectName(QString::fromUtf8("labelOnline"));
    labelOnline->setGeometry(QRect(570, 710, 81, 20));
    labelOnline->setAlignment(Qt::AlignRight | Qt::AlignTrailing |
                              Qt::AlignVCenter);
    MainWindow->setCentralWidget(centralwidget);
    menubar = new QMenuBar(MainWindow);
    menubar->setObjectName(QString::fromUtf8("menubar"));
    menubar->setGeometry(QRect(0, 0, 700, 22));
    menuFile = new QMenu(menubar);
    menuFile->setObjectName(QString::fromUtf8("menuFile"));
    menuSettings = new QMenu(menubar);
    menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
    menuStats = new QMenu(menubar);
    menuStats->setObjectName(QString::fromUtf8("menuStats"));
    menuHelp = new QMenu(menubar);
    menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
    MainWindow->setMenuBar(menubar);
    statusbar = new QStatusBar(MainWindow);
    statusbar->setObjectName(QString::fromUtf8("statusbar"));
    MainWindow->setStatusBar(statusbar);

    menubar->addAction(menuFile->menuAction());
    menubar->addAction(menuSettings->menuAction());
    menubar->addAction(menuStats->menuAction());
    menubar->addAction(menuHelp->menuAction());
    menuFile->addAction(actionNew);
    menuFile->addAction(actionConnect);
    menuFile->addAction(actionQuit);
    menuSettings->addAction(actionEnglish);
    menuSettings->addAction(actionSrpski);
    menuStats->addAction(actionShow);
    menuStats->addSeparator();
    menuStats->addAction(actionReset);
    menuHelp->addAction(actionRules);
    menuHelp->addAction(actionOnline);

    retranslateUi(MainWindow);

    QMetaObject::connectSlotsByName(MainWindow);
  }  // setupUi

  void retranslateUi(QMainWindow* MainWindow)
  {
    MainWindow->setWindowTitle(
        QApplication::translate("MainWindow", "MainWindow", nullptr));
    actionNew->setText(QApplication::translate("MainWindow", "New", nullptr));
    actionConnect->setText(
        QApplication::translate("MainWindow", "Connect", nullptr));
    actionQuit->setText(QApplication::translate("MainWindow", "Quit", nullptr));
    actionSlow->setText(QApplication::translate("MainWindow", "Slow", nullptr));
    actionNormal->setText(
        QApplication::translate("MainWindow", "Normal", nullptr));
    actionFast->setText(QApplication::translate("MainWindow", "Fast", nullptr));
    actionShow->setText(QApplication::translate("MainWindow", "Show", nullptr));
    actionReset->setText(
        QApplication::translate("MainWindow", "Reset", nullptr));
    actionRules->setText(
        QApplication::translate("MainWindow", "Rules", nullptr));
    actionOnline->setText(
        QApplication::translate("MainWindow", "Online", nullptr));
    actionSave_game->setText(
        QApplication::translate("MainWindow", "Save game", nullptr));
    actionEnglish->setText(
        QApplication::translate("MainWindow", "English", nullptr));
    actionSrpski->setText(
        QApplication::translate("MainWindow", "Srpski", nullptr));
    progressBar->setFormat(QString());
    labelOnline->setText(
        QApplication::translate("MainWindow", "Online:", nullptr));
    menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
    menuSettings->setTitle(
        QApplication::translate("MainWindow", "Settings", nullptr));
    menuStats->setTitle(
        QApplication::translate("MainWindow", "Stats", nullptr));
    menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
  }  // retranslateUi
};

namespace Ui
{
class MainWindow : public Ui_MainWindow
{
};
}  // namespace Ui

QT_END_NAMESPACE

#endif  // UI_MAINWINDOW_H
