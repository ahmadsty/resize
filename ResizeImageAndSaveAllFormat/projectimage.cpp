#include "projectimage.h"
#include "ui_projectimage.h"
#include <QFileDialog>
#include <QPixmap>
#include <QGraphicsPixmapItem>
ProjectImage::ProjectImage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ProjectImage)
{
    ui->setupUi(this);
    Scene=new QGraphicsScene();
    ui->comboBox->addItem("PNG");
    ui->comboBox->addItem("JPG");
    ui->comboBox->addItem("BMP");
    this->setFixedSize(this->width(),this->height());
}

ProjectImage::~ProjectImage()
{
    delete ui;
    Scene->destroyed();
}
void ProjectImage::on_pushButton_clicked()
{
    Path=QFileDialog::getOpenFileName(this,"تصویر را انتخاب کنید",QString());
    PixMap=QPixmap(Path);
    PixMap=PixMap.scaled(ui->graphicsView->width(),ui->graphicsView->height());
    this->setWindowTitle(Path);
    Scene->addPixmap(PixMap);
    ui->graphicsView->setScene(Scene);
    ui->lineEdit_2->setText(QString("%1").arg(PixMap.width()));
    ui->lineEdit_3->setText(QString("%1").arg(PixMap.height()));
}

void ProjectImage::on_lineEdit_2_textChanged(const QString &arg1)
{
    Scene->clear();
    PixMap=QPixmap(Path);
    if(!arg1.isEmpty())
    PixMap=PixMap.scaledToWidth(arg1.toInt(0));
    Scene->addPixmap(PixMap);
}

void ProjectImage::on_lineEdit_3_textChanged(const QString &arg1)
{
    Scene->clear();
    PixMap=QPixmap(Path);
    if(!arg1.isEmpty())
    PixMap=PixMap.scaledToHeight(arg1.toInt(0));
    Scene->addPixmap(PixMap);
}

void ProjectImage::on_pushButton_3_clicked()
{
   QString Path=QFileDialog::getSaveFileName(this,"محل ذخیره را انتخاب کنید","",
                                      "("+ui->comboBox->currentText()+")"+"*."+ui->comboBox->currentText());
    if(!Path.isEmpty())
        PixMap.save(Path,ui->comboBox->currentText().toUtf8());
}
