/********************************************************************************
** Form generated from reading UI file 'projectimage.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTIMAGE_H
#define UI_PROJECTIMAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjectImage
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGraphicsView *graphicsView;
    QGroupBox *groupBox_2;
    QPushButton *pushButton;
    QGroupBox *groupBox_3;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QGroupBox *groupBox_4;
    QComboBox *comboBox;
    QLabel *label_3;
    QPushButton *pushButton_3;

    void setupUi(QWidget *ProjectImage)
    {
        if (ProjectImage->objectName().isEmpty())
            ProjectImage->setObjectName(QStringLiteral("ProjectImage"));
        ProjectImage->resize(697, 277);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(14);
        ProjectImage->setFont(font);
        gridLayout = new QGridLayout(ProjectImage);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(ProjectImage);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        groupBox->setFont(font1);
        graphicsView = new QGraphicsView(groupBox);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(290, 10, 381, 241));
        graphicsView->setStyleSheet(QStringLiteral("background-color: rgb(138, 138, 138);"));
        graphicsView->setFrameShape(QFrame::NoFrame);
        graphicsView->setFrameShadow(QFrame::Plain);
        graphicsView->setLineWidth(0);
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 10, 261, 211));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 241, 31));
        pushButton->setFont(font1);
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 40, 241, 81));
        groupBox_3->setFont(font);
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 40, 61, 31));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        lineEdit_3 = new QLineEdit(groupBox_3);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(0, 50, 131, 20));
        lineEdit_2 = new QLineEdit(groupBox_3);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(0, 20, 131, 20));
        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 10, 61, 31));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 130, 241, 71));
        groupBox_4->setFont(font);
        comboBox = new QComboBox(groupBox_4);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(0, 30, 91, 22));
        comboBox->setFont(font1);
        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(130, 22, 101, 31));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(70, 220, 131, 31));
        pushButton_3->setFont(font1);

        gridLayout->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(ProjectImage);

        QMetaObject::connectSlotsByName(ProjectImage);
    } // setupUi

    void retranslateUi(QWidget *ProjectImage)
    {
        ProjectImage->setWindowTitle(QApplication::translate("ProjectImage", "ProjectImage", nullptr));
        groupBox->setTitle(QString());
        groupBox_2->setTitle(QString());
        pushButton->setText(QApplication::translate("ProjectImage", "\330\247\331\206\330\252\330\256\330\247\330\250 \330\252\330\265\331\210\333\214\330\261", nullptr));
        groupBox_3->setTitle(QApplication::translate("ProjectImage", "\330\252\330\272\333\214\333\214\330\261 \330\247\331\206\330\257\330\247\330\262\331\207", nullptr));
        label_2->setText(QApplication::translate("ProjectImage", "\330\247\330\261\330\252\331\201\330\247\330\271", nullptr));
        label->setText(QApplication::translate("ProjectImage", "\330\271\330\261\330\266", nullptr));
        groupBox_4->setTitle(QApplication::translate("ProjectImage", "\330\252\330\272\333\214\333\214\330\261 \331\201\330\261\331\205\330\252", nullptr));
        label_3->setText(QApplication::translate("ProjectImage", "\330\247\331\206\330\252\330\256\330\247\330\250 \331\201\330\261\331\205\330\252", nullptr));
        pushButton_3->setText(QApplication::translate("ProjectImage", "\330\260\330\256\333\214\330\261\331\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProjectImage: public Ui_ProjectImage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTIMAGE_H
