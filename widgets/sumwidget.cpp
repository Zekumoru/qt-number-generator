#include "sumwidget.h"

SumWidget::SumWidget(QWidget *parent)
    : DataWidget{tr("Sum"), parent}
{

}

void SumWidget::addValue(int value)
{
    allValue += value;

    if (value % 2) {
        oddValue += value;
    } else {
        evenValue += value;
    }

    updateInterface();
}
