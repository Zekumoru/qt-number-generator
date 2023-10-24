#include "maxwidget.h"
#include "datawidget.h"

MaxWidget::MaxWidget(QWidget *parent)
    : DataWidget{tr("Max"), parent}
{
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
