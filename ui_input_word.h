/********************************************************************************
** Form generated from reading UI file 'input_word.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUT_WORD_H
#define UI_INPUT_WORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_input_word
{
public:
    QLineEdit *lineEdit_word;
    QLabel *label_add_word;
    QPushButton *buttonValidate;

    void setupUi(QWidget *input_word)
    {
        if (input_word->objectName().isEmpty())
            input_word->setObjectName(QStringLiteral("input_word"));
        input_word->resize(473, 70);
        lineEdit_word = new QLineEdit(input_word);
        lineEdit_word->setObjectName(QStringLiteral("lineEdit_word"));
        lineEdit_word->setGeometry(QRect(20, 30, 331, 21));
        label_add_word = new QLabel(input_word);
        label_add_word->setObjectName(QStringLiteral("label_add_word"));
        label_add_word->setGeometry(QRect(20, 10, 241, 16));
        buttonValidate = new QPushButton(input_word);
        buttonValidate->setObjectName(QStringLiteral("buttonValidate"));
        buttonValidate->setGeometry(QRect(360, 20, 113, 41));

        retranslateUi(input_word);

        QMetaObject::connectSlotsByName(input_word);
    } // setupUi

    void retranslateUi(QWidget *input_word)
    {
        input_word->setWindowTitle(QApplication::translate("input_word", "Form", Q_NULLPTR));
        label_add_word->setText(QApplication::translate("input_word", "Ingrese la palabra a validar:", Q_NULLPTR));
        buttonValidate->setText(QApplication::translate("input_word", "Validar", Q_NULLPTR));
    } // retranslateUi

};

QT_END_NAMESPACE

#endif // UI_INPUT_WORD_H
