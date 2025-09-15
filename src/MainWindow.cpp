#include "MainWindow.h"
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    auto *label = new QLabel("Hello APRG_DEMO", this);
    setCentralWidget(label);
}
