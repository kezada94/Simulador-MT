//
//  dialog_transicion.cpp
//  
//
//  Created by Mac on 14-06-17.
//
//

#include "dialog_transicion.hpp"

//Constructor de DialogTransicion
DialogTransicion::DialogTransicion(QWidget *parent) : QDialog(parent)
{
    //creando y configurando los atributos del dialog
    QLabel *texto = new QLabel("Ingrese la transicion que desea agregar:");
    QLabel *ejemplo = new QLabel("Utilize: \n ∂(estado actual, lectura) = (estado destino, marca, movimiento<D ó I>)");
    
    delta = new QLabel("∂(");
    delta->setStyleSheet("font:16pt;");
    
    coma1 = new QLabel(",");
    coma1->setStyleSheet("font:16pt;");
    
    equals = new QLabel(") = (");
    equals->setStyleSheet("font:16pt;");
    
    coma2 = new QLabel(",");
    coma2->setStyleSheet("font:16pt;");
    
    coma3 = new QLabel(",");
    coma3->setStyleSheet("font:16pt;");
    
    parentesis = new QLabel(")");
    parentesis->setStyleSheet("font:16pt;");
    
    edit_estado_lectura = new QLineEdit;
    edit_estado_lectura->setMaxLength(2);
    edit_estado_lectura->setMaximumWidth(30);
    
    edit_simbolo_lectura = new QLineEdit;
    edit_simbolo_lectura->setMaxLength(1);
    edit_simbolo_lectura->setMaximumWidth(30);
    
    edit_estado_destino = new QLineEdit;
    edit_estado_destino->setMaxLength(2);
    edit_estado_destino->setMaximumWidth(30);
    
    edit_simbolo_destino = new QLineEdit;
    edit_simbolo_destino->setMaxLength(1);
    edit_simbolo_destino->setMaximumWidth(30);
    
    edit_movimiento = new QLineEdit;
    edit_movimiento->setMaxLength(1);
    edit_movimiento->setMaximumWidth(30);
    
    ok = new QPushButton("Ingresar");
    ok->setDefault(true);
    
    cancel = new QPushButton("Cancelar");
    
    QHBoxLayout *buttonlayout = new QHBoxLayout;
    
    QSpacerItem *buttonspacer = new QSpacerItem(120, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);
    buttonlayout->addItem(buttonspacer);
    buttonlayout->addWidget(cancel);
    buttonlayout->addWidget(ok);
    
    QHBoxLayout *layout = new QHBoxLayout;
    
    layout->addWidget(delta);
    layout->addWidget(edit_estado_lectura);
    layout->addWidget(coma1);
    layout->addWidget(edit_simbolo_lectura);
    layout->addWidget(equals);
    layout->addWidget(edit_estado_destino);
    layout->addWidget(coma2);
    layout->addWidget(edit_simbolo_destino);
    layout->addWidget(coma3);
    layout->addWidget(edit_movimiento);
    layout->addWidget(parentesis);
    
    QVBoxLayout *mainlayout = new QVBoxLayout;
    
    mainlayout->addWidget(texto);
    mainlayout->addLayout(layout);
    mainlayout->addWidget(ejemplo);
    mainlayout->addLayout(buttonlayout);
    
    setLayout(mainlayout);
    
    
    connect(ok, SIGNAL(clicked()), this, SLOT(buttonOkClickedSlot()));
    connect(cancel, SIGNAL(clicked()), this, SLOT(buttonCancelClickedSlot()));
}

//Funcion llamada al hacer click en el boton "Ingresar": comprueba si el ingreso fue vacio, si no crea la transicion y devuelve codigo 2
void DialogTransicion::buttonOkClickedSlot(){
    if(edit_movimiento->text().isEmpty() || edit_estado_destino->text().isEmpty() || edit_estado_lectura->text().isEmpty() || edit_simbolo_destino->text().isEmpty() || edit_simbolo_lectura->text().isEmpty()){
        QMessageBox msg;
        msg.setText("Ningun campo puede estar vacio!");
        msg.exec();
        return;
    }
    this->trans = crear_transicion(edit_estado_lectura->text().toStdString(), edit_simbolo_lectura->text().at(0).toLatin1(), edit_estado_destino->text().toStdString(), edit_simbolo_destino->text().at(0).toLatin1(), edit_movimiento->text().at(0).toLatin1());

    this->done(2);
}
//funcion llamada al hacer click en el boton "Cancelar": cierra el dialogo con codigo 1;
void DialogTransicion::buttonCancelClickedSlot(){
    this->done(1);
}
//Destructor de la clase: Libera la memoria utilizada por la transicion trans
DialogTransicion::~DialogTransicion(){
    delete(this->trans);
}
