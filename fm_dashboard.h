#ifndef FM_DASHBOARD_H
#define FM_DASHBOARD_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class fm_dashboard; }
QT_END_NAMESPACE

class fm_dashboard : public QMainWindow
{
    Q_OBJECT

public:
    fm_dashboard(QWidget *parent = nullptr);
    ~fm_dashboard();

private:
    Ui::fm_dashboard *ui;
};
#endif // FM_DASHBOARD_H
