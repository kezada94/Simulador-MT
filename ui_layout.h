/********************************************************************************
** Form generated from reading UI file 'layout.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYOUT_H
#define UI_LAYOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QtWidgets/QInputDialog>
#include <QtWidgets/QMessageBox>

#include "turingmachine.hpp"
#include "dialog_transicion.hpp"

class Ui_MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QAction *actionSalir;
    QAction *actionInstrucciones;
    QAction *actionAcerca_de;
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayoutMain;
    QVBoxLayout *verticalLayoutTrans;
    QLabel *label_Transicion;
    QListWidget *listView_Transicion;
    QVBoxLayout *verticalLayoutButtons;
    QSpacerItem *verticalSpacerTop;
    QPushButton *buttonAgregar;
    QPushButton *buttonModificar;
    QPushButton *buttonEliminar;
    QSpacerItem *verticalSpacerBottom;
    QGridLayout *gridLayoutEstados;
    QLabel *labelFinal;
    QPushButton *buttonCambiarFinal;
    QLabel *labelInicial;
    QPushButton *buttonCambiarInicial;
    QLabel *labelEstadoFinal;
    QLabel *labelEstadoInicial;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonValidar;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QMenu *menuAyuda;
    QStatusBar *statusbar;
    TuringMachine *turing;
    
    Ui_MainWindow()
    {
        turing = new TuringMachine();
        
        
        
        
        if (this->objectName().isEmpty())
            this->setObjectName(QStringLiteral("MainWindow"));
        this->resize(511, 334);
        actionSalir = new QAction(this);
        actionSalir->setObjectName(QStringLiteral("actionSalir"));
        actionInstrucciones = new QAction(this);
        actionInstrucciones->setObjectName(QStringLiteral("actionInstrucciones"));
        actionAcerca_de = new QAction(this);
        actionAcerca_de->setObjectName(QStringLiteral("actionAcerca_de"));
        centralwidget = new QWidget(this);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 0, 491, 281));
        gridLayoutMain = new QGridLayout(gridLayoutWidget);
        gridLayoutMain->setObjectName(QStringLiteral("gridLayoutMain"));
        gridLayoutMain->setContentsMargins(0, 0, 0, 0);
        verticalLayoutTrans = new QVBoxLayout();
        verticalLayoutTrans->setObjectName(QStringLiteral("verticalLayoutTrans"));
        label_Transicion = new QLabel(gridLayoutWidget);
        label_Transicion->setObjectName(QStringLiteral("label_Transicion"));

        verticalLayoutTrans->addWidget(label_Transicion);

        listView_Transicion = new QListWidget(gridLayoutWidget);
        listView_Transicion->setObjectName(QStringLiteral("listView_Transicion"));

        verticalLayoutTrans->addWidget(listView_Transicion);


        gridLayoutMain->addLayout(verticalLayoutTrans, 0, 0, 1, 1);

        verticalLayoutButtons = new QVBoxLayout();
        verticalLayoutButtons->setObjectName(QStringLiteral("verticalLayoutButtons"));
        verticalSpacerTop = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutButtons->addItem(verticalSpacerTop);

        buttonAgregar = new QPushButton(gridLayoutWidget);
        buttonAgregar->setObjectName(QStringLiteral("buttonAgregar"));

        verticalLayoutButtons->addWidget(buttonAgregar);

        buttonModificar = new QPushButton(gridLayoutWidget);
        buttonModificar->setObjectName(QStringLiteral("buttonModificar"));

        verticalLayoutButtons->addWidget(buttonModificar);

        buttonEliminar = new QPushButton(gridLayoutWidget);
        buttonEliminar->setObjectName(QStringLiteral("buttonEliminar"));

        verticalLayoutButtons->addWidget(buttonEliminar);

        verticalSpacerBottom = new QSpacerItem(20, 110, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutButtons->addItem(verticalSpacerBottom);

        gridLayoutMain->addLayout(verticalLayoutButtons, 0, 1, 1, 1);

        gridLayoutEstados = new QGridLayout();
        gridLayoutEstados->setObjectName(QStringLiteral("gridLayoutEstados"));
        labelFinal = new QLabel(gridLayoutWidget);
        labelFinal->setObjectName(QStringLiteral("labelFinal"));

        gridLayoutEstados->addWidget(labelFinal, 1, 0, 1, 1);

        buttonCambiarFinal = new QPushButton(gridLayoutWidget);
        buttonCambiarFinal->setObjectName(QStringLiteral("buttonCambiarFinal"));

        gridLayoutEstados->addWidget(buttonCambiarFinal, 1, 2, 1, 1);

        labelInicial = new QLabel(gridLayoutWidget);
        labelInicial->setObjectName(QStringLiteral("labelInicial"));

        gridLayoutEstados->addWidget(labelInicial, 0, 0, 1, 1);

        buttonCambiarInicial = new QPushButton(gridLayoutWidget);
        buttonCambiarInicial->setObjectName(QStringLiteral("buttonCambiarInicial"));

        gridLayoutEstados->addWidget(buttonCambiarInicial, 0, 2, 1, 1);

        labelEstadoFinal = new QLabel(gridLayoutWidget);
        labelEstadoFinal->setObjectName(QStringLiteral("labelEstadoFinal"));

        gridLayoutEstados->addWidget(labelEstadoFinal, 1, 1, 1, 1);

        labelEstadoInicial = new QLabel(gridLayoutWidget);
        labelEstadoInicial->setObjectName(QStringLiteral("labelEstadoInicial"));

        gridLayoutEstados->addWidget(labelEstadoInicial, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayoutEstados->addItem(horizontalSpacer, 0, 3, 1, 1);


        gridLayoutMain->addLayout(gridLayoutEstados, 1, 0, 1, 1);

        buttonValidar = new QPushButton(gridLayoutWidget);
        buttonValidar->setObjectName(QStringLiteral("buttonValidar"));
        buttonValidar->setMinimumSize(QSize(75, 75));

        gridLayoutMain->addWidget(buttonValidar, 1, 1, 1, 1);

        this->setCentralWidget(centralwidget);
        menubar = new QMenuBar(this);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 511, 30));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName(QStringLiteral("menuArchivo"));
        menuAyuda = new QMenu(menubar);
        menuAyuda->setObjectName(QStringLiteral("menuAyuda"));
        this->setMenuBar(menubar);
        statusbar = new QStatusBar(this);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        this->setStatusBar(statusbar);

        menubar->addAction(menuArchivo->menuAction());
        menubar->addAction(menuAyuda->menuAction());
        menuArchivo->addAction(actionSalir);
        menuAyuda->addAction(actionInstrucciones);
        menuAyuda->addSeparator();
        menuAyuda->addAction(actionAcerca_de);

        retranslateUi();
        
        connect(this->buttonValidar, SIGNAL (clicked()), this, SLOT (buttonValidarClicked()));
        connect(this->buttonCambiarInicial, SIGNAL (clicked()), this, SLOT (buttonCambiarInicialClicked()));
        connect(this->buttonCambiarFinal, SIGNAL (clicked()), this, SLOT (buttonCambiarFinalClicked()));
        connect(this->buttonAgregar, SIGNAL (clicked()), this, SLOT (buttonAgregarClicked()));

    } // setupUi

    void retranslateUi()
    {
        setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionSalir->setText(QApplication::translate("MainWindow", "&Salir", Q_NULLPTR));
        actionInstrucciones->setText(QApplication::translate("MainWindow", "&Instrucciones", Q_NULLPTR));
        actionAcerca_de->setText(QApplication::translate("MainWindow", "&Acerca de...", Q_NULLPTR));
        label_Transicion->setText(QApplication::translate("MainWindow", "Transiciones", Q_NULLPTR));
        buttonAgregar->setText(QApplication::translate("MainWindow", "Agregar", Q_NULLPTR));
        buttonModificar->setText(QApplication::translate("MainWindow", "Modificar", Q_NULLPTR));
        buttonEliminar->setText(QApplication::translate("MainWindow", "Eliminar", Q_NULLPTR));
        labelFinal->setText(QApplication::translate("MainWindow", "Estado final:", Q_NULLPTR));
        buttonCambiarFinal->setText(QApplication::translate("MainWindow", "Cambiar", Q_NULLPTR));
        labelInicial->setText(QApplication::translate("MainWindow", "Estado incial:", Q_NULLPTR));
        buttonCambiarInicial->setText(QApplication::translate("MainWindow", "Cambiar", Q_NULLPTR));
        labelEstadoFinal->setText(QApplication::translate("MainWindow", "<estado final>", Q_NULLPTR));
        labelEstadoInicial->setText(QApplication::translate("MainWindow", "<estado inicial>", Q_NULLPTR));
        buttonValidar->setText(QApplication::translate("MainWindow", "Validar", Q_NULLPTR));
        menuArchivo->setTitle(QApplication::translate("MainWindow", "&Archivo", Q_NULLPTR));
        menuAyuda->setTitle(QApplication::translate("MainWindow", "A&yuda", Q_NULLPTR));
    } // retranslateUi
    
    private slots:
    
    void buttonValidarClicked(){
        bool ok;
        QString palabra = QInputDialog::getText(this, "Simulador-MT", "Ingrese la palabra que desee validar:", QLineEdit::Normal, nullptr, &ok);
        if(ok){
            if(palabra.isEmpty()){
                QMessageBox msg;
                msg.setText("La palabra no puede ir vacia!");
                msg.exec();
            }else{
                int a = turing->validarPalabra(palabra.toStdString());
                if(a == 0){
                    QMessageBox msg;
                    msg.setText("La palabra es aceptada por este automata!");
                    msg.exec();
                }
            }
        }
        
    }
    void buttonModificarClicked(){
        //FALTA AGREGAR CONSTRUCTOR A DIALOG
    };
    void buttonEliminarClicked(){
        //FALTA BUSCAR Y ELIMINAR TRANSICION
    };
    void buttonAgregarClicked(){
        DialogTransicion *dialog = new DialogTransicion;
        int r = dialog->exec();
        if(r == 2){
            if(turing->getTransicion() == nullptr){
                turing->setTransicion(crear_nodo_trans(dialog->trans));
            }else{
                nodo_trans *transi = turing->getTransicion();
                agregar_nodo_trans(&transi, dialog->trans);
            }
            listView_Transicion->clear();
            nodo_trans *hel = turing->getTransicion();
            while (hel != NULL) {
                string a("∂( " + hel->transicion->estado_lectura + " , " + hel->transicion->simbolo_lectura + " ) = ( " + hel->transicion->estado_destino + " , " + hel->transicion->simbolo_destino + " , " + hel->transicion->movimiento_puntero + ")");
                listView_Transicion->addItem(QString::fromStdString(a));
                hel = hel->siguiente;
            }

        }
    };
    
    void buttonCambiarFinalClicked(){
        bool ok;
        QString palabra = QInputDialog::getText(this, "Simulador-MT", "Ingrese estado final:", QLineEdit::Normal, nullptr, &ok);
        if (ok){
            if (palabra.isEmpty()){
                QMessageBox msg;
                msg.setText("Estado final no puede ir vacio!!");
                msg.exec();
            }else if(palabra.length() > 2){
                QMessageBox msg;
                msg.setText("Maximo 2 caracteres para el nombre del estado!");
                msg.exec();
            }else{
                labelEstadoFinal->setText(palabra);
                turing->setEstado_final(palabra.toStdString());
            }
        }
    };
    
    void buttonCambiarInicialClicked(){
        bool ok;
        QString palabra = QInputDialog::getText(this, "Simulador-MT", "Ingrese estado incial:", QLineEdit::Normal, nullptr, &ok);
        if(ok){
            if (palabra.isEmpty()){
                QMessageBox msg;
                msg.setText("Maximo 2 caracteres para el nombre del estado!");
                msg.exec();
            }else if(palabra.length() > 2){
                QMessageBox msg;
                msg.setText("Estado inicial no puede ir vacio!!");
                msg.exec();
            }else{
                labelEstadoInicial->setText(palabra);
                turing->setEstado_inicial(palabra.toStdString());
            }
        }
    };
    
};

    


#endif // UI_LAYOUT_H
