#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QStandardItem>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->btn_ArrangeAll->setEnabled(false);
    ui->btn_ClearAll->setEnabled(false);
    csvModel = new QStandardItemModel(this);

    ui->label->setText(QUrl("qrc:/gui_sklad/gui/titan_sklad_2.mht").toEncoded());

    QFile file("qrc:/gui_sklad/gui/titan_sklad_2.mht");
    file.open(QFile::ReadWrite | QFile::Text);
    QTextStream str(&file);
    QString fullFile = nullptr;
    QList<QString> list;
    while (!str.atEnd()) {
        fullFile.append(str.readLine());
    }

    QFile newFile("newtext.txt");
    newFile.open(QFile::ReadWrite | QFile::Text);
    QTextStream outFile(&newFile);
    while (!str.atEnd()) {
        outFile << fullFile;
    }
    newFile.close();

    ui->label->setText("");
    ui->label->show();

}

MainWindow::~MainWindow()
{
    delete ui;
    delete csvModel;
}

void MainWindow::on_exitProgramm_triggered()
{
    this->close();
}

void MainWindow::on_openFile_triggered()
{
    //    csvModel->setColumnCount(2);

    //    csvModel->setHorizontalHeaderLabels(QStringList() << "Марка" << "Модель" << "Цена");

    //    QString file = QFileDialog::getOpenFileName(this, "Выберите файл", "", "Excel files(*.csv)");

    //    qDebug() << file;

    csvFile.setFileName(QFileDialog::getOpenFileName(this, "Выберите файл", "", "Excel files(*.csv)"));

    if (!csvFile.open(QFile::ReadOnly | QFile::Text)) {
        qDebug() << "File not Exist";
//        ui->btn_ArrangeAll->setEnabled(false);
    } else {
        qDebug() << "File Exist";
        ui->btn_ArrangeAll->setEnabled(true);
        QTextStream in(&csvFile);

        while (!in.atEnd()) {
            QString line = in.readLine();
            QList<QStandardItem *> standartItemList;

            for (QString item : line.split(";")) {
                standartItemList.append(new QStandardItem(item));
            }
            csvModel->insertRow(csvModel->rowCount(), standartItemList);
        }
        csvFile.close();

        qDebug() << "Example item row " << csvModel->item(2, 3)->text();
    }
}
