#ifndef SUMWIDGET_H
#define SUMWIDGET_H

#include "datawidget.h"

class SumWidget : public DataWidget
{
    Q_OBJECT
public:
    explicit SumWidget(QWidget *parent = nullptr);

public slots:
    void addValue(int value);

};

#endif // SUMWIDGET_H
