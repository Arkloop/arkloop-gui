#include "arkdisplay.h"
#include "ui_arkdisplay.h"

ArkDisplay::ArkDisplay(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ArkDisplay)
{
    ui->setupUi(this);
}

ArkDisplay::~ArkDisplay()
{
    delete ui;
}
