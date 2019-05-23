#ifndef PROJECTIMAGE_H
#define PROJECTIMAGE_H

#include <QWidget>
#include <QGraphicsScene>
namespace Ui {
class ProjectImage;
}

class ProjectImage : public QWidget
{
    Q_OBJECT

public:
    explicit ProjectImage(QWidget *parent = 0);
    ~ProjectImage();
    QGraphicsScene* Scene;
    QString Path;
    QPixmap PixMap;
private slots:
    void on_pushButton_clicked();

    void on_lineEdit_2_textChanged(const QString &arg1);

    void on_lineEdit_3_textChanged(const QString &arg1);

    void on_pushButton_3_clicked();

private:
    Ui::ProjectImage *ui;
};

#endif // PROJECTIMAGE_H
