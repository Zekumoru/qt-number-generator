#include "datawidget.h"
#include <QLabel>
#include <QGridLayout>

DataWidget::DataWidget(const QString &title, QWidget *parent)
    : QWidget{parent}
{
    QLabel *titleLabel = new QLabel(title);

    allLabel = new QLabel;
    evenLabel = new QLabel;
    oddLabel = new QLabel;
    allValue = 0;
    evenValue = 0;
    oddValue = 0;
    updateInterface();

    QGridLayout *mainLayout = new QGridLayout;
    mainLayout->addWidget(titleLabel, 0, 0);
    mainLayout->addWidget(allLabel, 1, 0);
    mainLayout->addWidget(evenLabel, 1, 1);
    mainLayout->addWidget(oddLabel, 1, 2);

    setLayout(mainLayout);
}

void DataWidget::updateInterface()
{
    allLabel->setText(tr("All: %1").arg(allValue));
    evenLabel->setText(tr("Even: %1").arg(evenValue));
    oddLabel->setText(tr("Odd: %1").arg(oddValue));
}
