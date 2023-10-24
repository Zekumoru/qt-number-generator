#include "minwidget.h"
#include "datawidget.h"
#include <climits>

MinWidget::MinWidget(QWidget *parent)
    : DataWidget{tr("Min"), parent}
{
    allValue = INT_MAX;
    evenValue = INT_MAX;
    oddValue = INT_MAX;
}

void MinWidget::addValue(int value)
{
    if (value < allValue) {
        allValue = value;
    }

    if (value % 2) {
        if (value < oddValue) {
            oddValue = value;
        }
    } else {
        if (value < evenValue) {
            evenValue = value;
        }
    }

    updateInterface();
}
