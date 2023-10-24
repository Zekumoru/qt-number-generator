#ifndef DATAWIDGET_H
#define DATAWIDGET_H

#include <QWidget>

class QLabel;

class DataWidget : public QWidget
{
    Q_OBJECT
public:
    explicit DataWidget(const QString &title, QWidget *parent = nullptr);

public slots:
    virtual void addValue(int value) = 0;

protected:
    double allValue;
    double evenValue;
    double oddValue;
    void updateInterface();

private:
    QLabel *allLabel;
    QLabel *evenLabel;
    QLabel *oddLabel;
};

#endif // DATAWIDGET_H
