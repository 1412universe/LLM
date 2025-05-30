/********************************************************************************
** Form generated from reading UI file 'websocketclient.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEBSOCKETCLIENT_H
#define UI_WEBSOCKETCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WebSocketClient
{
public:

    void setupUi(QWidget *WebSocketClient)
    {
        if (WebSocketClient->objectName().isEmpty())
            WebSocketClient->setObjectName(QStringLiteral("WebSocketClient"));
        WebSocketClient->resize(400, 300);

        retranslateUi(WebSocketClient);

        QMetaObject::connectSlotsByName(WebSocketClient);
    } // setupUi

    void retranslateUi(QWidget *WebSocketClient)
    {
        WebSocketClient->setWindowTitle(QApplication::translate("WebSocketClient", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WebSocketClient: public Ui_WebSocketClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEBSOCKETCLIENT_H
