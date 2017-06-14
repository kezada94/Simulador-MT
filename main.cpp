#include <QWidget>
#include "ui_layout.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Ui_MainWindow *ui = new Ui_MainWindow;

    ui->show();
    return app.exec();
}
