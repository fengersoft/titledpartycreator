#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();
    QStringList modelList;
    void createTitles(QStringList& titlesList);

private slots:
    void on_btnOk_clicked();

    void on_edtKeyWord_returnPressed();

private:
    Ui::MainWindow* ui;
};
#endif // MAINWINDOW_H
