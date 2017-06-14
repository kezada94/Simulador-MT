//
//  dialog_transicion.hpp
//  
//
//  Created by Mac on 14-06-17.
//
//

#ifndef dialog_transicion_hpp
#define dialog_transicion_hpp

#include <stdio.h>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QHBoxLayout>


class DialogTransicion : public QDialog
{
    Q_OBJECT
    
public:
    DialogTransicion(QWidget *parent = 0);
    
signals:
    void buttonOkClicked();
    void buttonCancelClicked();
    
private slots:
    void buttonOkClickedSlot();
    void buttonCancelClickedSlot();
    
private:
    QLabel *delta;
    QLabel *coma1;
    QLabel *equals;
    QLabel *coma2;
    QLabel *coma3;
    QLabel *parentesis;
    
    QLineEdit *edit_estado_lectura;
    QLineEdit *edit_simbolo_lectura;
    QLineEdit *edit_estado_destino;
    QLineEdit *edit_simbolo_destino;
    QLineEdit *edit_movimiento;
    
    QPushButton *ok;
    QPushButton *cancel;
};

#endif /* dialog_transicion_hpp */
