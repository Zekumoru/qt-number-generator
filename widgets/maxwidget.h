#ifndef MAXWIDGET_H
#define MAXWIDGET_H

#include "datawidget.h"

class MaxWidget : public DataWidget
{
    Q_OBJECT
public:
    explicit MaxWidget(QWidget *parent = nullptr);

public slots:
    void addValue(int value);

};

#endif // MAXWIDGET_H
