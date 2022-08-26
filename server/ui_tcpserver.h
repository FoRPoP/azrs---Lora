/********************************************************************************
** Form generated from reading UI file 'tcpserver.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPSERVER_H
#define UI_TCPSERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TcpServer
{
 public:
  QVBoxLayout* verticalLayout;
  QHBoxLayout* horizontalLayout;
  QLabel* label;
  QLabel* address;
  QLabel* label_2;
  QLabel* port;
  QSpacerItem* horizontalSpacer;
  QPushButton* disconnectClients;
  QGroupBox* groupBox;
  QVBoxLayout* verticalLayout_2;
  QPlainTextEdit* log;

  void setupUi(QWidget* TcpServer)
  {
    if ( TcpServer->objectName().isEmpty() )
      TcpServer->setObjectName(QString::fromUtf8("TcpServer"));
    TcpServer->resize(400, 300);
    verticalLayout = new QVBoxLayout(TcpServer);
    verticalLayout->setSpacing(6);
    verticalLayout->setContentsMargins(11, 11, 11, 11);
    verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
    horizontalLayout = new QHBoxLayout();
    horizontalLayout->setSpacing(6);
    horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
    label = new QLabel(TcpServer);
    label->setObjectName(QString::fromUtf8("label"));

    horizontalLayout->addWidget(label);

    address = new QLabel(TcpServer);
    address->setObjectName(QString::fromUtf8("address"));

    horizontalLayout->addWidget(address);

    label_2 = new QLabel(TcpServer);
    label_2->setObjectName(QString::fromUtf8("label_2"));

    horizontalLayout->addWidget(label_2);

    port = new QLabel(TcpServer);
    port->setObjectName(QString::fromUtf8("port"));

    horizontalLayout->addWidget(port);

    horizontalSpacer =
        new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    horizontalLayout->addItem(horizontalSpacer);

    disconnectClients = new QPushButton(TcpServer);
    disconnectClients->setObjectName(QString::fromUtf8("disconnectClients"));
    disconnectClients->setEnabled(false);

    horizontalLayout->addWidget(disconnectClients);


    verticalLayout->addLayout(horizontalLayout);

    groupBox = new QGroupBox(TcpServer);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    verticalLayout_2 = new QVBoxLayout(groupBox);
    verticalLayout_2->setSpacing(6);
    verticalLayout_2->setContentsMargins(11, 11, 11, 11);
    verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
    log = new QPlainTextEdit(groupBox);
    log->setObjectName(QString::fromUtf8("log"));
    log->setReadOnly(true);

    verticalLayout_2->addWidget(log);


    verticalLayout->addWidget(groupBox);


    retranslateUi(TcpServer);

    QMetaObject::connectSlotsByName(TcpServer);
  }  // setupUi

  void retranslateUi(QWidget* TcpServer)
  {
    TcpServer->setWindowTitle(
        QApplication::translate("TcpServer", "TcpServer", nullptr));
    label->setText(QApplication::translate("TcpServer", "Address:", nullptr));
    address->setText(
        QApplication::translate("TcpServer", "TextLabel", nullptr));
    label_2->setText(QApplication::translate("TcpServer", "Port:", nullptr));
    port->setText(QApplication::translate("TcpServer", "TextLabel", nullptr));
    disconnectClients->setText(
        QApplication::translate("TcpServer", "Disconnect", nullptr));
    groupBox->setTitle(QApplication::translate("TcpServer", "Log", nullptr));
  }  // retranslateUi
};

namespace Ui
{
class TcpServer : public Ui_TcpServer
{
};
}  // namespace Ui

QT_END_NAMESPACE

#endif  // UI_TCPSERVER_H
