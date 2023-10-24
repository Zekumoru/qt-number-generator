#include "averagewidget.h"
#include "datawidget.h"

AverageWidget::AverageWidget(QWidget *parent)
    : DataWidget{tr("Average"), parent}
{
    allCount = 0;
    allSum = 0;
    evenCount = 0;
    evenSum = 0;
    oddCount = 0;
    oddSum = 0;
}

void AverageWidget::addValue(int value)
{
    allCount++;
    allSum += value;
    allValue = allSum / (double) allCount;

    if (value % 2) {
        oddCount++;
        oddSum += value;
        oddValue = oddSum / (double) oddCount;
    }
    else {
        evenCount++;
        evenSum += value;
        evenValue = evenSum / (double) evenCount;
    }

    updateInterface();
}
