/********************************************************************************
** Form generated from reading UI file 'tabla.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLA_H
#define UI_TABLA_H

#include <QAction>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "clabel.h"

QT_BEGIN_NAMESPACE

class Ui_Tabla
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
  QRadioButton* radioButton_3;
  QRadioButton* radioButton_2;
  QLabel* labelOnlineText;
  CLabel* labelKartaURuci7;
  QLineEdit* lineEdit;
  CLabel* labelKartaNaTalonuLevo;
  QLabel* labelIgracDesno;
  CLabel* labelKartaURuci2;
  CLabel* labelKartaURuci1;
  QLabel* labelIgracDole;
  QLCDNumber* lcdBrojDole;
  QLCDNumber* lcdBrojGore;
  QRadioButton* radioButton;
  CLabel* labelKartaURuci6;
  QPushButton* pushButton_6;
  QProgressBar* progressBar;
  QLabel* labelIgracGore;
  CLabel* labelKartaURuci5;
  CLabel* labelKartaNaTalonuDole;
  QRadioButton* radioButton_4;
  QLabel* labelIgracLevo;
  QLCDNumber* lcdBrojDesno;
  QLCDNumber* lcdBrojLevo;
  CLabel* labelKartaNaTalonuGore;
  QLabel* labelOnline;
  QMenuBar* menubar;
  QMenu* menuFile;
  QMenu* menuSettings;
  QMenu* menuGame_speed;
  QMenu* menuLanguage;
  QMenu* menuStats;
  QMenu* menuHelp;
  QStatusBar* statusbar;

  void setupUi(QMainWindow* Tabla)
  {
    if ( Tabla->objectName().isEmpty() )
      Tabla->setObjectName(QStringLiteral("Tabla"));
    Tabla->resize(700, 1000);
    Tabla->setMinimumSize(QSize(700, 1000));
    Tabla->setMaximumSize(QSize(700, 1000));
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
    palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
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
    palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
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
    palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
    Tabla->setPalette(palette);
    actionNew = new QAction(Tabla);
    actionNew->setObjectName(QStringLiteral("actionNew"));
    actionConnect = new QAction(Tabla);
    actionConnect->setObjectName(QStringLiteral("actionConnect"));
    actionQuit = new QAction(Tabla);
    actionQuit->setObjectName(QStringLiteral("actionQuit"));
    actionSlow = new QAction(Tabla);
    actionSlow->setObjectName(QStringLiteral("actionSlow"));
    actionNormal = new QAction(Tabla);
    actionNormal->setObjectName(QStringLiteral("actionNormal"));
    actionFast = new QAction(Tabla);
    actionFast->setObjectName(QStringLiteral("actionFast"));
    actionShow = new QAction(Tabla);
    actionShow->setObjectName(QStringLiteral("actionShow"));
    actionReset = new QAction(Tabla);
    actionReset->setObjectName(QStringLiteral("actionReset"));
    actionRules = new QAction(Tabla);
    actionRules->setObjectName(QStringLiteral("actionRules"));
    actionOnline = new QAction(Tabla);
    actionOnline->setObjectName(QStringLiteral("actionOnline"));
    actionSave_game = new QAction(Tabla);
    actionSave_game->setObjectName(QStringLiteral("actionSave_game"));
    actionEnglish = new QAction(Tabla);
    actionEnglish->setObjectName(QStringLiteral("actionEnglish"));
    actionSrpski = new QAction(Tabla);
    actionSrpski->setObjectName(QStringLiteral("actionSrpski"));
    centralwidget = new QWidget(Tabla);
    centralwidget->setObjectName(QStringLiteral("centralwidget"));
    labelKartaURuci3 = new CLabel(centralwidget);
    labelKartaURuci3->setObjectName(QStringLiteral("labelKartaURuci3"));
    labelKartaURuci3->setGeometry(QRect(230, 530, 90, 130));
    labelKartaURuci3->setText(QStringLiteral("Card 3"));
    labelKartaURuci8 = new CLabel(centralwidget);
    labelKartaURuci8->setObjectName(QStringLiteral("labelKartaURuci8"));
    labelKartaURuci8->setGeometry(QRect(405, 530, 90, 130));
    labelKartaURuci8->setText(QStringLiteral("Card 8"));
    textEdit = new QTextEdit(centralwidget);
    textEdit->setObjectName(QStringLiteral("textEdit"));
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
        QStringLiteral("labelKartaNaTalonuDesno"));
    labelKartaNaTalonuDesno->setGeometry(QRect(410, 215, 90, 130));
    labelKartaNaTalonuDesno->setText(QStringLiteral("Card D"));
    labelKartaURuci4 = new CLabel(centralwidget);
    labelKartaURuci4->setObjectName(QStringLiteral("labelKartaURuci4"));
    labelKartaURuci4->setGeometry(QRect(265, 530, 90, 130));
    labelKartaURuci4->setText(QStringLiteral("Card 4"));
    radioButton_3 = new QRadioButton(centralwidget);
    radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
    radioButton_3->setEnabled(true);
    radioButton_3->setGeometry(QRect(250, 90, 20, 20));
    radioButton_3->setText(QStringLiteral(""));
    radioButton_2 = new QRadioButton(centralwidget);
    radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
    radioButton_2->setEnabled(true);
    radioButton_2->setGeometry(QRect(40, 270, 20, 20));
    radioButton_2->setText(QStringLiteral(""));
    radioButton_2->setChecked(false);
    labelOnlineText = new QLabel(centralwidget);
    labelOnlineText->setObjectName(QStringLiteral("labelOnlineText"));
    labelOnlineText->setGeometry(QRect(655, 705, 30, 30));
    labelOnlineText->setText(QStringLiteral("TextLabel"));
    labelKartaURuci7 = new CLabel(centralwidget);
    labelKartaURuci7->setObjectName(QStringLiteral("labelKartaURuci7"));
    labelKartaURuci7->setGeometry(QRect(370, 530, 90, 130));
    labelKartaURuci7->setText(QStringLiteral("Card 7"));
    lineEdit = new QLineEdit(centralwidget);
    lineEdit->setObjectName(QStringLiteral("lineEdit"));
    lineEdit->setGeometry(QRect(50, 860, 621, 25));
    labelKartaNaTalonuLevo = new CLabel(centralwidget);
    labelKartaNaTalonuLevo->setObjectName(
        QStringLiteral("labelKartaNaTalonuLevo"));
    labelKartaNaTalonuLevo->setGeometry(QRect(170, 215, 90, 130));
    labelKartaNaTalonuLevo->setText(QStringLiteral("Card B"));
    labelIgracDesno = new QLabel(centralwidget);
    labelIgracDesno->setObjectName(QStringLiteral("labelIgracDesno"));
    labelIgracDesno->setGeometry(QRect(500, 250, 64, 16));
    labelIgracDesno->setText(QStringLiteral("D"));
    labelKartaURuci2 = new CLabel(centralwidget);
    labelKartaURuci2->setObjectName(QStringLiteral("labelKartaURuci2"));
    labelKartaURuci2->setGeometry(QRect(195, 530, 90, 130));
    labelKartaURuci2->setText(QStringLiteral("Card 2"));
    labelKartaURuci1 = new CLabel(centralwidget);
    labelKartaURuci1->setObjectName(QStringLiteral("labelKartaURuci1"));
    labelKartaURuci1->setGeometry(QRect(160, 530, 90, 130));
    labelKartaURuci1->setText(QStringLiteral("Card 1"));
    labelIgracDole = new QLabel(centralwidget);
    labelIgracDole->setObjectName(QStringLiteral("labelIgracDole"));
    labelIgracDole->setGeometry(QRect(370, 390, 64, 16));
    labelIgracDole->setText(QStringLiteral("A"));
    lcdBrojDole = new QLCDNumber(centralwidget);
    lcdBrojDole->setObjectName(QStringLiteral("lcdBrojDole"));
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
    palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush16);
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
    palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush17);
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
    palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush18);
    lcdBrojDole->setPalette(palette2);
    lcdBrojGore = new QLCDNumber(centralwidget);
    lcdBrojGore->setObjectName(QStringLiteral("lcdBrojGore"));
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
    palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush19);
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
    palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush20);
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
    palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush21);
    lcdBrojGore->setPalette(palette3);
    radioButton = new QRadioButton(centralwidget);
    radioButton->setObjectName(QStringLiteral("radioButton"));
    radioButton->setEnabled(true);
    radioButton->setGeometry(QRect(440, 410, 16, 21));
    radioButton->setText(QStringLiteral(""));
    radioButton->setChecked(false);
    labelKartaURuci6 = new CLabel(centralwidget);
    labelKartaURuci6->setObjectName(QStringLiteral("labelKartaURuci6"));
    labelKartaURuci6->setGeometry(QRect(335, 530, 90, 130));
    labelKartaURuci6->setText(QStringLiteral("Card 6"));
    pushButton_6 = new QPushButton(centralwidget);
    pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
    pushButton_6->setGeometry(QRect(10, 860, 41, 25));
    pushButton_6->setText(QStringLiteral(">"));
    progressBar = new QProgressBar(centralwidget);
    progressBar->setObjectName(QStringLiteral("progressBar"));
    progressBar->setGeometry(QRect(280, 700, 118, 23));
    progressBar->setValue(100);
    labelIgracGore = new QLabel(centralwidget);
    labelIgracGore->setObjectName(QStringLiteral("labelIgracGore"));
    labelIgracGore->setGeometry(QRect(280, 70, 64, 16));
    labelIgracGore->setText(QStringLiteral("C"));
    labelKartaURuci5 = new CLabel(centralwidget);
    labelKartaURuci5->setObjectName(QStringLiteral("labelKartaURuci5"));
    labelKartaURuci5->setGeometry(QRect(300, 530, 90, 130));
    labelKartaURuci5->setText(QStringLiteral("Card 5"));
    labelKartaNaTalonuDole = new CLabel(centralwidget);
    labelKartaNaTalonuDole->setObjectName(
        QStringLiteral("labelKartaNaTalonuDole"));
    labelKartaNaTalonuDole->setGeometry(QRect(290, 355, 90, 130));
    labelKartaNaTalonuDole->setText(QStringLiteral("Card A"));
    radioButton_4 = new QRadioButton(centralwidget);
    radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
    radioButton_4->setEnabled(true);
    radioButton_4->setGeometry(QRect(570, 270, 16, 21));
    radioButton_4->setText(QStringLiteral(""));
    labelIgracLevo = new QLabel(centralwidget);
    labelIgracLevo->setObjectName(QStringLiteral("labelIgracLevo"));
    labelIgracLevo->setGeometry(QRect(70, 250, 64, 16));
    labelIgracLevo->setText(QStringLiteral("B"));
    lcdBrojDesno = new QLCDNumber(centralwidget);
    lcdBrojDesno->setObjectName(QStringLiteral("lcdBrojDesno"));
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
    palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush22);
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
    palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush23);
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
    palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush24);
    lcdBrojDesno->setPalette(palette4);
    lcdBrojLevo = new QLCDNumber(centralwidget);
    lcdBrojLevo->setObjectName(QStringLiteral("lcdBrojLevo"));
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
    palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush25);
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
    palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush26);
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
    palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush27);
    lcdBrojLevo->setPalette(palette5);
    labelKartaNaTalonuGore = new CLabel(centralwidget);
    labelKartaNaTalonuGore->setObjectName(
        QStringLiteral("labelKartaNaTalonuGore"));
    labelKartaNaTalonuGore->setGeometry(QRect(290, 75, 90, 130));
    labelKartaNaTalonuGore->setText(QStringLiteral("Card C"));
    labelOnline = new QLabel(centralwidget);
    labelOnline->setObjectName(QStringLiteral("labelOnline"));
    labelOnline->setGeometry(QRect(570, 710, 81, 20));
    labelOnline->setAlignment(Qt::AlignRight | Qt::AlignTrailing |
                              Qt::AlignVCenter);
    Tabla->setCentralWidget(centralwidget);
    menubar = new QMenuBar(Tabla);
    menubar->setObjectName(QStringLiteral("menubar"));
    menubar->setGeometry(QRect(0, 0, 700, 22));
    menuFile = new QMenu(menubar);
    menuFile->setObjectName(QStringLiteral("menuFile"));
    menuSettings = new QMenu(menubar);
    menuSettings->setObjectName(QStringLiteral("menuSettings"));
    menuGame_speed = new QMenu(menuSettings);
    menuGame_speed->setObjectName(QStringLiteral("menuGame_speed"));
    menuLanguage = new QMenu(menuSettings);
    menuLanguage->setObjectName(QStringLiteral("menuLanguage"));
    menuStats = new QMenu(menubar);
    menuStats->setObjectName(QStringLiteral("menuStats"));
    menuHelp = new QMenu(menubar);
    menuHelp->setObjectName(QStringLiteral("menuHelp"));
    Tabla->setMenuBar(menubar);
    statusbar = new QStatusBar(Tabla);
    statusbar->setObjectName(QStringLiteral("statusbar"));
    Tabla->setStatusBar(statusbar);

    menubar->addAction(menuFile->menuAction());
    menubar->addAction(menuSettings->menuAction());
    menubar->addAction(menuStats->menuAction());
    menubar->addAction(menuHelp->menuAction());
    menuFile->addAction(actionNew);
    menuFile->addAction(actionConnect);
    menuFile->addAction(actionQuit);
    menuSettings->addAction(menuGame_speed->menuAction());
    menuSettings->addAction(menuLanguage->menuAction());
    menuGame_speed->addAction(actionSlow);
    menuGame_speed->addAction(actionNormal);
    menuGame_speed->addAction(actionFast);
    menuLanguage->addAction(actionEnglish);
    menuLanguage->addAction(actionSrpski);
    menuStats->addAction(actionShow);
    menuStats->addSeparator();
    menuStats->addAction(actionReset);
    menuHelp->addAction(actionRules);
    menuHelp->addAction(actionOnline);

    retranslateUi(Tabla);

    QMetaObject::connectSlotsByName(Tabla);
  }  // setupUi

  void retranslateUi(QMainWindow* Tabla)
  {
    Tabla->setWindowTitle(QApplication::translate("Tabla", "Tabla", Q_NULLPTR));
    actionNew->setText(QApplication::translate("Tabla", "New", Q_NULLPTR));
    actionConnect->setText(
        QApplication::translate("Tabla", "Connect", Q_NULLPTR));
    actionQuit->setText(QApplication::translate("Tabla", "Quit", Q_NULLPTR));
    actionSlow->setText(QApplication::translate("Tabla", "Slow", Q_NULLPTR));
    actionNormal->setText(
        QApplication::translate("Tabla", "Normal", Q_NULLPTR));
    actionFast->setText(QApplication::translate("Tabla", "Fast", Q_NULLPTR));
    actionShow->setText(QApplication::translate("Tabla", "Show", Q_NULLPTR));
    actionReset->setText(QApplication::translate("Tabla", "Reset", Q_NULLPTR));
    actionRules->setText(QApplication::translate("Tabla", "Rules", Q_NULLPTR));
    actionOnline->setText(
        QApplication::translate("Tabla", "Online", Q_NULLPTR));
    actionSave_game->setText(
        QApplication::translate("Tabla", "Save game", Q_NULLPTR));
    actionEnglish->setText(
        QApplication::translate("Tabla", "English", Q_NULLPTR));
    actionSrpski->setText(
        QApplication::translate("Tabla", "Srpski", Q_NULLPTR));
    progressBar->setFormat(QString());
    labelOnline->setText(
        QApplication::translate("Tabla", "Online:", Q_NULLPTR));
    menuFile->setTitle(QApplication::translate("Tabla", "File", Q_NULLPTR));
    menuSettings->setTitle(
        QApplication::translate("Tabla", "Settings", Q_NULLPTR));
    menuGame_speed->setTitle(
        QApplication::translate("Tabla", "Game speed", Q_NULLPTR));
    menuLanguage->setTitle(
        QApplication::translate("Tabla", "Language", Q_NULLPTR));
    menuStats->setTitle(QApplication::translate("Tabla", "Stats", Q_NULLPTR));
    menuHelp->setTitle(QApplication::translate("Tabla", "Help", Q_NULLPTR));
  }  // retranslateUi
};

namespace Ui
{
class Tabla : public Ui_Tabla
{
};
}  // namespace Ui

QT_END_NAMESPACE

#endif  // UI_TABLA_H
