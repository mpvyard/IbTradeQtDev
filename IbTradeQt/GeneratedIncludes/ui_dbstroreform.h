/********************************************************************************
** Form generated from reading UI file 'dbstroreform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DBSTROREFORM_H
#define UI_DBSTROREFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DBStoreForm
{
public:
    QPushButton *pushButtonStart;
    QTableView *tableViewTickers;
    QPushButton *pushButtonAdd;
    QPushButton *pushButtonRemove;
    QLineEdit *lineEditSymbol;

    void setupUi(QWidget *DBStoreForm)
    {
        if (DBStoreForm->objectName().isEmpty())
            DBStoreForm->setObjectName(QString::fromUtf8("DBStoreForm"));
        DBStoreForm->resize(475, 382);
        pushButtonStart = new QPushButton(DBStoreForm);
        pushButtonStart->setObjectName(QString::fromUtf8("pushButtonStart"));
        pushButtonStart->setGeometry(QRect(380, 350, 80, 21));
        tableViewTickers = new QTableView(DBStoreForm);
        tableViewTickers->setObjectName(QString::fromUtf8("tableViewTickers"));
        tableViewTickers->setGeometry(QRect(40, 90, 411, 241));
        pushButtonAdd = new QPushButton(DBStoreForm);
        pushButtonAdd->setObjectName(QString::fromUtf8("pushButtonAdd"));
        pushButtonAdd->setGeometry(QRect(370, 20, 80, 21));
        pushButtonRemove = new QPushButton(DBStoreForm);
        pushButtonRemove->setObjectName(QString::fromUtf8("pushButtonRemove"));
        pushButtonRemove->setGeometry(QRect(370, 50, 80, 21));
        lineEditSymbol = new QLineEdit(DBStoreForm);
        lineEditSymbol->setObjectName(QString::fromUtf8("lineEditSymbol"));
        lineEditSymbol->setGeometry(QRect(40, 20, 113, 21));

        retranslateUi(DBStoreForm);

        QMetaObject::connectSlotsByName(DBStoreForm);
    } // setupUi

    void retranslateUi(QWidget *DBStoreForm)
    {
        DBStoreForm->setWindowTitle(QApplication::translate("DBStoreForm", "Form", nullptr));
        pushButtonStart->setText(QApplication::translate("DBStoreForm", "Start", nullptr));
        pushButtonAdd->setText(QApplication::translate("DBStoreForm", "Add", nullptr));
        pushButtonRemove->setText(QApplication::translate("DBStoreForm", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DBStoreForm: public Ui_DBStoreForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DBSTROREFORM_H
