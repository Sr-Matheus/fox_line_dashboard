#include "fm_dashboard.h"
#include "ui_fm_dashboard.h"

fm_dashboard::fm_dashboard(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::fm_dashboard)
{
    ui->setupUi(this);
}

fm_dashboard::~fm_dashboard()
{
    delete ui;
}

