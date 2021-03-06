#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QFileDialog>
#include "audiomanager.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_playButton_released();

    void on_pauseButton_released();

    void on_resumeButton_released();

    void on_skipForwardButton_released();

    void on_skipBackwardsButton_released();

private:
    Ui::MainWindow *ui;
    AudioManager *audioManager;
};

#endif // MAINWINDOW_H
