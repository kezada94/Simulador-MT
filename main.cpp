#include <QWidget>
#include "ui_layout.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QMainWindow *widget = new QMainWindow;
    Ui::MainWindow ui;
    ui.setupUi(widget);

    widget->show();
    return app.exec();
}
