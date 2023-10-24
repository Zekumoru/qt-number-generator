#ifndef MINWIDGET_H
#define MINWIDGET_H

#include "datawidget.h"

class MinWidget : public DataWidget
{
    Q_OBJECT
public:
    explicit MinWidget(QWidget *parent = nullptr);

public slots:
    void addValue(int value);

};

#endif // MINWIDGET_H
