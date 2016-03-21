#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <opencv2/opencv.hpp>
#include "TargetController.h"
#include "ShotDetector.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    cv::VideoCapture* cam;

	QString targetDevPath;
	TargetController targetController;
    ShotDetector detector;

private slots:
    void updateCamImage();
    void connectToCam();
	void connectToTarget();
	void updateTargetDevPath(QString path);
	void targetButtonClicked();

};

#endif // MAINWINDOW_H
