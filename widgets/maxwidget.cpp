#include "maxwidget.h"
#include "datawidget.h"
#include <climits>

MaxWidget::MaxWidget(QWidget *parent)
    : DataWidget{tr("Max"), parent}
{
    allValue = INT_MIN;
    evenValue = INT_MIN;
    oddValue = INT_MIN;
}

void MaxWidget::addValue(int value)
{
    if (value > allValue) {
        allValue = value;
    }

    if (value % 2) {
        if (value > oddValue) {
            oddValue = value;
        }
    } else {
        if (value > evenValue) {
            evenValue = value;
        }
    }

    updateInterface();
}
