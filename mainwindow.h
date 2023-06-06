#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QLabel>
#include <QPixmap>
#include <QVBoxLayout>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private slots:
    void onUploadImageButtonClicked();

private:
    Ui::MainWindow *ui;
    QString imagePath;
    QLabel* imageLabel; // QLabel widget to display the uploaded image
};

#endif // MAINWINDOW_H
