/********************************************************************************
** Form generated from reading UI file 'help.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_H
#define UI_HELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Help
{
 public:
  QTextEdit* textEdit;

  void setupUi(QDialog* Help)
  {
    if ( Help->objectName().isEmpty() )
      Help->setObjectName(QString::fromUtf8("Help"));
    Help->resize(686, 561);
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
    Help->setPalette(palette);
    textEdit = new QTextEdit(Help);
    textEdit->setObjectName(QString::fromUtf8("textEdit"));
    textEdit->setGeometry(QRect(0, 0, 691, 701));
    QPalette palette1;
    palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
    palette1.setBrush(QPalette::Active, QPalette::Button, brush6);
    palette1.setBrush(QPalette::Active, QPalette::Light, brush6);
    palette1.setBrush(QPalette::Active, QPalette::Midlight, brush6);
    palette1.setBrush(QPalette::Active, QPalette::Dark, brush6);
    palette1.setBrush(QPalette::Active, QPalette::Mid, brush6);
    palette1.setBrush(QPalette::Active, QPalette::Text, brush);
    palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
    palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
    palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
    palette1.setBrush(QPalette::Active, QPalette::Window, brush6);
    palette1.setBrush(QPalette::Active, QPalette::Shadow, brush6);
    palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
    palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
    palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
    QBrush brush9(QColor(255, 255, 255, 128));
    brush9.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
    palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
    palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
    palette1.setBrush(QPalette::Inactive, QPalette::Button, brush6);
    palette1.setBrush(QPalette::Inactive, QPalette::Light, brush6);
    palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
    palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush6);
    palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush6);
    palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
    palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
    palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
    palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
    palette1.setBrush(QPalette::Inactive, QPalette::Window, brush6);
    palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
    palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
    palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
    palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
    QBrush brush10(QColor(255, 255, 255, 128));
    brush10.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
    palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
    palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
    palette1.setBrush(QPalette::Disabled, QPalette::Button, brush6);
    palette1.setBrush(QPalette::Disabled, QPalette::Light, brush6);
    palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
    palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush6);
    palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush6);
    palette1.setBrush(QPalette::Disabled, QPalette::Text, brush6);
    palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
    palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
    palette1.setBrush(QPalette::Disabled, QPalette::Base, brush6);
    palette1.setBrush(QPalette::Disabled, QPalette::Window, brush6);
    palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
    palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
    palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
    palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
    QBrush brush11(QColor(255, 255, 255, 128));
    brush11.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
    palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
    textEdit->setPalette(palette1);
    textEdit->setAcceptDrops(false);
    textEdit->setReadOnly(true);

    retranslateUi(Help);

    QMetaObject::connectSlotsByName(Help);
  }  // setupUi

  void retranslateUi(QDialog* Help)
  {
    Help->setWindowTitle(QApplication::translate("Help", "Dialog", nullptr));
    textEdit->setHtml(QApplication::translate(
        "Help",
        "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" "
        "\"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
        "<html><head><meta name=\"qrichtext\" content=\"1\" /><style "
        "type=\"text/css\">\n"
        "p, li { white-space: pre-wrap; }\n"
        "</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; "
        "font-weight:400; font-style:normal;\">\n"
        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; "
        "margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span "
        "style=\" font-size:14pt;\">Lora je karta\305\241ka igra za "
        "\304\215etiri osobe. </span></p>\n"
        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; "
        "margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span "
        "style=\" font-size:14pt;\">Sastoji se iz osam podigara. </span></p>\n"
        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; "
        "margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span "
        "style=\" font-size:14pt;\">Cilj je skupiti \305\241to manje poena u "
        "svim igrama. </span></p>\n"
        "<p style=\" margin-top:0px; margin-bottom:0px"
        "; margin-left:0px; margin-right:0px; -qt-block-indent:0; "
        "text-indent:0px;\"><span style=\" font-size:14pt;\">Igre su "
        "slede\304\207e: Herc (Treba izbegavati odno\305\241enje karata koje "
        "su u hercu. Svaka odneta karta donosi +1 poen.) </span></p>\n"
        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; "
        "margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span "
        "style=\" font-size:14pt;\">Dame (Treba izbegavati odno\305\241enje "
        "dama. Svaka odneta Dama donosi +1 poen.) </span></p>\n"
        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; "
        "margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span "
        "style=\" font-size:14pt;\">\305\240to vi\305\241e (Treba odneti "
        "\305\241to vi\305\241e ruku. Svaka odneta ruka donosi -1 poen.) "
        "</span></p>\n"
        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; "
        "margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span "
        "style=\" font-size:14pt;\">\305\240to manje (Cilj je odneti "
        "\305\241to manje ruku. Svaka odneta ruka donosi+1 poen.) </span></p"
        ">\n"
        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; "
        "margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span "
        "style=\" font-size:14pt;\">\305\275andar tref, poslednja ruka (Ne "
        "treba uzeti \305\276andara (J) u trefu, niti poslednju ruku. I "
        "\305\276andar tref i poslednja ruka donose po +4 poena.) </span></p>\n"
        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; "
        "margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span "
        "style=\" font-size:14pt;\">Kralj herc, poslednja ruka (Ne treba uzeti "
        "kralja u hercu, niti poslednju ruku. I kralj herc i poslednja ruka "
        "donose po +4 poena.) </span></p>\n"
        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; "
        "margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span "
        "style=\" font-size:14pt;\">Lora (Ovu igru po\304\215inje desni od "
        "delioca (u uobi\304\215ajenom krugu). On stavlja neku kartu na sto. "
        "Slede\304\207i trba da stavi ili prvu ja\304\215u kartu u istoj boji "
        "preko nje, ili istu kartu u drugoj boji pored nje. Kada se "
        "dodje do A, preko se stavlja 7. Ako igra\304\215 nema kartu koju "
        "\304\207e staviti, dobija ta\304\215ku (+1 poen). </span></p>\n"
        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; "
        "margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span "
        "style=\" font-size:14pt;\">Igra se zavr\305\241ava kada neko od "
        "igra\304\215a uspe da spusti sve karte koje ima u rukama. Onaj ko je "
        "prvi zavr\305\241io, dobija -8+broj_ta\304\215aka poena, a ostali "
        "dobijaju samo +broj_ta\304\215aka poena.) </span></p>\n"
        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; "
        "margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span "
        "style=\" font-size:14pt;\">Igra po izboru (U njoj, igra\304\215 koji "
        "sedi desno od delioca, bira koja \304\207e se od prethodnih 7 igara "
        "igrati ponovo.) Kada se zavr\305\241i ceo krug (svih 8 igara), "
        "deljenje se prenosi na slede\304\207eg igra\304\215a, i tako u krug, "
        "dok svi igra\304\215i ne zavr\305\241e sa deljenjem. </span></p>\n"
        "<p style=\" margin-top:0px; margin-bottom:0px"
        "; margin-left:0px; margin-right:0px; -qt-block-indent:0; "
        "text-indent:0px;\"><span style=\" font-size:14pt;\">Lora se igra sa "
        "\305\241pilom od 32 karte (7, 8, 9, 10, J, Q, K, A). Karte "
        "pore\304\221ane po ja\304\215ini od najslabije do najja\304\215e: 7, "
        "8, 9, 10, J, Q, K, A.</span></p></body></html>",
        nullptr));
  }  // retranslateUi
};

namespace Ui
{
class Help : public Ui_Help
{
};
}  // namespace Ui

QT_END_NAMESPACE

#endif  // UI_HELP_H
