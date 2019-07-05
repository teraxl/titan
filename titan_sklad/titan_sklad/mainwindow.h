#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QFile>
#include <QMainWindow>
#include <QStandardItemModel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QFile csvFile;

private slots:
    void on_openFile_triggered();
    void on_exitProgramm_triggered();


private:
    Ui::MainWindow *ui;
    QStandardItemModel *csvModel;
};

#endif // MAINWINDOW_H
