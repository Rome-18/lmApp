#ifndef longmanApp_h__
#define longmanApp_h__

#include <QMainWindow>
#include <QFileDialog>
#include <QStandardPaths> 
#include <QPushButton>
#include <QTimeLine>
#include "ui_longmanApp.h"
#include "lmGraphView.h"
#include "src\lmView.h"
#include "yuvParamSet.h"
#include "lmMessageBox.h"
#include "lmDataView.h"
//�����棬����̳���lmView��ͨ��listenParam�ӿ��趨��Ӧ����;
class longmanApp : public QMainWindow ,public lmView
{
	Q_OBJECT

public:
	longmanApp(QWidget *parent = 0);
	bool updatemainwindow(longmanEvt&);
private:
	Ui::longmanAppClass ui;
	lmGraphView *m_imageView;
	lmMessageBox *msgBox;
	lmDataView* m_DataView;
	QTimeLine timeLine;
	QImage* imageSave;
private slots:
//void on_actionOpen_clicked();
void on_actionOpen_triggered();
void on_actionAbout_triggered();
void on_actionAboutQT_triggered();
void on_nextButton_clicked();
void on_backButton_clicked();
void on_FrameIdxSlider_valueChanged(int);
void on_beginButton_clicked();
void on_endButton_clicked();
void player(int);
void on_playButton_clicked();
void on_stopButton_clicked();
void on_actionSave_as_image_triggered();
void on_f1Button_clicked();

};
#endif // longmanApp_h__