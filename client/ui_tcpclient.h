/********************************************************************************
** Form generated from reading UI file 'tcpclient.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPCLIENT_H
#define UI_TCPCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TcpClient
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *address;
    QLabel *label_2;
    QSpinBox *port;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *connect;
    QPushButton *disconnect;

    void setupUi(QWidget *TcpClient)
    {
        if (TcpClient->objectName().isEmpty())
            TcpClient->setObjectName(QString::fromUtf8("TcpClient"));
        TcpClient->resize(434, 152);
        verticalLayout_2 = new QVBoxLayout(TcpClient);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(TcpClient);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        address = new QLineEdit(groupBox);
        address->setObjectName(QString::fromUtf8("address"));

        formLayout->setWidget(0, QFormLayout::FieldRole, address);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        port = new QSpinBox(groupBox);
        port->setObjectName(QString::fromUtf8("port"));
        port->setMaximum(99999);

        formLayout->setWidget(1, QFormLayout::FieldRole, port);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        connect = new QPushButton(groupBox);
        connect->setObjectName(QString::fromUtf8("connect"));

        horizontalLayout_2->addWidget(connect);

        disconnect = new QPushButton(groupBox);
        disconnect->setObjectName(QString::fromUtf8("disconnect"));
        disconnect->setEnabled(false);

        horizontalLayout_2->addWidget(disconnect);


        formLayout->setLayout(2, QFormLayout::SpanningRole, horizontalLayout_2);


        verticalLayout_2->addWidget(groupBox);


        retranslateUi(TcpClient);

        QMetaObject::connectSlotsByName(TcpClient);
    } // setupUi

    void retranslateUi(QWidget *TcpClient)
    {
        TcpClient->setWindowTitle(QApplication::translate("TcpClient", "TcpClient", nullptr));
        groupBox->setTitle(QApplication::translate("TcpClient", "Server configuration", nullptr));
        label->setText(QApplication::translate("TcpClient", "Address:", nullptr));
        label_2->setText(QApplication::translate("TcpClient", "Port:", nullptr));
        connect->setText(QApplication::translate("TcpClient", "connect", nullptr));
        disconnect->setText(QApplication::translate("TcpClient", "disconnect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TcpClient: public Ui_TcpClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPCLIENT_H
