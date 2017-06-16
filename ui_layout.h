
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

//Clase principal la cual contendra todos los elementos del software
class Ui_MainWindow : public QMainWindow
{
    Q_OBJECT
    
//Declaracion de los atributos publicos de la clase
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
    
    //Contructor de la clase: Crea los elementos que tendra el software y los configura correctamente
    Ui_MainWindow()
    {
        //Objeto del tipo TuringMachine que contiene los atributos y metodos necesarios para funcionar como maquina de turing
        turing = new TuringMachine();
        
        //Creacion y configuracion de atributos
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
        verticalSpacerTop = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutButtons->addItem(verticalSpacerTop);

        buttonAgregar = new QPushButton(gridLayoutWidget);
        buttonAgregar->setObjectName(QStringLiteral("buttonAgregar"));

        verticalLayoutButtons->addWidget(buttonAgregar);

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

        //Agrega el texto a mostrar en cada elemento.
        retranslateUi();
        
        //Conecta los eventos con un cierto metodo de la clase
        connect(this->buttonValidar         , SIGNAL (clicked())    , this, SLOT (buttonValidarClicked()));
        connect(this->buttonCambiarInicial  , SIGNAL (clicked())    , this, SLOT (buttonCambiarInicialClicked()));
        connect(this->buttonCambiarFinal    , SIGNAL (clicked())    , this, SLOT (buttonCambiarFinalClicked()));
        connect(this->buttonAgregar         , SIGNAL (clicked())    , this, SLOT (buttonAgregarClicked()));
        connect(this->buttonEliminar        , SIGNAL (clicked())    , this, SLOT (buttonEliminarClicked()));
        connect(this->actionSalir           , SIGNAL (triggered())  , this, SLOT (salir()));
        connect(this->actionInstrucciones   , SIGNAL (triggered())  , this, SLOT (mostrarInstrucciones()));
        connect(this->actionAcerca_de       , SIGNAL (triggered())  , this, SLOT (mostrarAcercaDe()));



    }

    void retranslateUi()
    {
        setWindowTitle(QApplication::translate("MainWindow", "Simulador-MT", Q_NULLPTR));
        actionSalir->setText(QApplication::translate("MainWindow", "&Salir", Q_NULLPTR));
        actionInstrucciones->setText(QApplication::translate("MainWindow", "&Instrucciones", Q_NULLPTR));
        actionAcerca_de->setText(QApplication::translate("MainWindow", "&Acerca de...", Q_NULLPTR));
        label_Transicion->setText(QApplication::translate("MainWindow", "Transiciones", Q_NULLPTR));
        buttonAgregar->setText(QApplication::translate("MainWindow", "Agregar", Q_NULLPTR));
        buttonEliminar->setText(QApplication::translate("MainWindow", "Eliminar", Q_NULLPTR));
        labelFinal->setText(QApplication::translate("MainWindow", "Estado final:", Q_NULLPTR));
        buttonCambiarFinal->setText(QApplication::translate("MainWindow", "Cambiar final", Q_NULLPTR));
        labelInicial->setText(QApplication::translate("MainWindow", "Estado incial:", Q_NULLPTR));
        buttonCambiarInicial->setText(QApplication::translate("MainWindow", "Cambiar inicial", Q_NULLPTR));
        labelEstadoFinal->setText(QApplication::translate("MainWindow", "<estado final>", Q_NULLPTR));
        labelEstadoInicial->setText(QApplication::translate("MainWindow", "<estado inicial>", Q_NULLPTR));
        buttonValidar->setText(QApplication::translate("MainWindow", "Validar", Q_NULLPTR));
        menuArchivo->setTitle(QApplication::translate("MainWindow", "&Archivo", Q_NULLPTR));
        menuAyuda->setTitle(QApplication::translate("MainWindow", "A&yuda", Q_NULLPTR));
    }
    //Slots: funciones que seran llamadas cuando ocurra un cierto evento.
private slots:
    
    //Funcion llamada cuando el boton "Validar" sea clickeado
    void buttonValidarClicked(){
        bool ok;
        //Muestra un cuadro de dialogo esperando por una entrada de texto del usuario y la guarda en la variable 'palabra'
        QString palabra = QInputDialog::getText(this, "Simulador-MT", "Ingrese la palabra que desee validar:", QLineEdit::Normal, nullptr, &ok);
        if(ok){
            if(palabra.isEmpty()){
                QMessageBox msg;
                msg.setText("La palabra no puede ir vacia!");
                msg.exec();
            }else{
                //llama al metodo validarPalabra de TuringMachine y almacena la respues en 'a'
                if(turing->getTransicion() == nullptr || turing->getEstado_final().length() == 0 || turing->getEstado_inicial().length() == 0){
                    QMessageBox msg;
                    msg.setText("Error. Asegurese de ingresar transiciones y ambos, estado final e inicial antes de validar una palabra!");
                    msg.exec();
                }else{
                    int a = turing->validarPalabra(palabra.toStdString());
                    if(a == 0){
                        QMessageBox msg;
                        msg.setText("La palabra: '"+palabra+"' pertenece al lenguaje especificado por las transiciones de la Maquina de Turing \n:D");
                        msg.exec();
                    }else{
                        QMessageBox msg;
                        msg.setText("La palabra '"+palabra+"' NO pertenece al lenguaje especificado por las transiciones de la Maquina de Turing... \n:(");
                        msg.exec();
                    }
                }
            }
        }
    };
    
    //Funcion llamada cuando el boton "Eliminar" sea clickeado: se encarga de buscar el indice del elemento seleccionado en la lista y en base a él
    //eliminar la transicion de la lista de transiciones en esa posicion, luego recarga la lista.
    void buttonEliminarClicked(){
        int index = -2;
        QListWidgetItem *selected = listView_Transicion->selectedItems().first();
        for(int i = 0, l = listView_Transicion->count(); i < l; i++)
        {
            if(listView_Transicion->item(i)->text() == selected->text())
            {
                index = i;
            }
        }
        if (index != -2){
            nodo_trans* aux = turing->getTransicion();
            while(index != 0){
                aux = aux->siguiente;
                index--;
            }
            nodo_trans *tr = turing->getTransicion();
            turing->eliminarTransicion(&tr, aux->transicio);
            listView_Transicion->clear();
            nodo_trans *hel = turing->getTransicion();
            while (hel != NULL) {
                string a("∂( " + hel->transicio->estado_lectura + " , " + hel->transicio->simbolo_lectura + " ) = ( " + hel->transicio->estado_destino + " , " + hel->transicio->simbolo_destino + " , " + hel->transicio->movimiento_puntero + ")");
                listView_Transicion->addItem(QString::fromStdString(a));
                hel = hel->siguiente;
            }
            listView_Transicion->setCurrentRow(0);

        }
    };
    
    //Funcion llamada cuando el boton "Agregar" sea clickeado
    void buttonAgregarClicked(){
        //Crea un nuevo objeto del tipo DialogTransicion
        DialogTransicion *dialog = new DialogTransicion;
        int r = dialog->exec();
        if(r == 2){
            //si existen transiciones: la agrega a la lista, si no crea una nueva lista
            if(turing->getTransicion() == nullptr){
                turing->setTransicion(crear_nodo_trans(dialog->trans));
            }else{
                nodo_trans *transi = turing->getTransicion();
                agregar_nodo_trans(&transi, dialog->trans);
            }
            //limpia la lista de transiciones y las agrega nuevamente
            listView_Transicion->clear();
            nodo_trans *hel = turing->getTransicion();
            while (hel != NULL) {
                string a("∂( " + hel->transicio->estado_lectura + " , " + hel->transicio->simbolo_lectura + " ) = ( " + hel->transicio->estado_destino + " , " + hel->transicio->simbolo_destino + " , " + hel->transicio->movimiento_puntero + ")");
                listView_Transicion->addItem(QString::fromStdString(a));
                hel = hel->siguiente;
            }
            listView_Transicion->setCurrentRow(0);
        }
    };
    
    //Funcion llamada al presionar el boton "Cambiar final"
    void buttonCambiarFinalClicked(){
        bool ok;
        QString palabra = QInputDialog::getText(this, "Simulador-MT", "Ingrese estado final:", QLineEdit::Normal, nullptr, &ok);
        if (ok){
            if (palabra.isEmpty()){
                QMessageBox msg;
                msg.setText("Estado final no puede ir vacio!!");
                msg.exec();
            }else if(palabra.length() > 3){
                QMessageBox msg;
                msg.setText("Maximo 3 caracteres para el nombre del estado!");
                msg.exec();
            }else{
                labelEstadoFinal->setText(palabra);
                turing->setEstado_final(palabra.toStdString());
            }
        }
    };
    
    //Funcion llamada al presionar el boton "Cambiar inicial"
    void buttonCambiarInicialClicked(){
        bool ok;
        QString palabra = QInputDialog::getText(this, "Simulador-MT", "Ingrese estado inicial:", QLineEdit::Normal, nullptr, &ok);
        if(ok){
            if (palabra.isEmpty()){
                QMessageBox msg;
                msg.setText("Estado inicial no puede ir vacio!!");
                msg.exec();
            }else if(palabra.length() > 3){
                QMessageBox msg;
                msg.setText("Maximo 3 caracteres para el nombre del estado!");
                msg.exec();
            }else{
                labelEstadoInicial->setText(palabra);
                turing->setEstado_inicial(palabra.toStdString());
            }
        }
    };
    
    //LLama al metodo estatico quit() de QApplication para cerrar la aplicacion.
    void salir(){
        QApplication::quit();
    }
    
    //Muestra informacion al presionar el menu Instrucciones.
    void mostrarInstrucciones(){
        QMessageBox msg;
        msg.setText("Instrucciones:\n1) Presione el boton \"Agregar\" para ingresar las transiciones de la Maquina de Turing. \n\n2) Presione los botones \"Cambiar inicial\" y \"Cambiar final\" para ingresar estados final e inicial. \n\n3) Presione el boton \"Validar\" para ingresar la palabra que desee validar.");
        msg.exec();
    };
    
    //Muestra informacion al presionar el menu Acerca de...
    void mostrarAcercaDe(){
        QMessageBox msg;
        msg.setText("Simulador-MT: Simulaodr de una maquina de turing. \n\n\nDesarrollado por: Felipe Quezada, Roberto Melita y Felipe del Rio.");
        msg.exec();
    };
    
};
#endif // UI_LAYOUT_H
