#ifndef AVERAGEWIDGET_H
#define AVERAGEWIDGET_H

#include "datawidget.h"

class AverageWidget : public DataWidget
{
    Q_OBJECT
public:
    explicit AverageWidget(QWidget *parent = nullptr);

public slots:
    void addValue(int value);

private:
    int allCount;
    int evenCount;
    int oddCount;
    double allSum;
    double evenSum;
    double oddSum;

};

#endif // AVERAGEWIDGET_H
