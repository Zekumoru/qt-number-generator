#ifndef NUMBERGENERATOR_H
#define NUMBERGENERATOR_H

#include <QWidget>

class QLineEdit;
class QPushButton;
class QHBoxLayout;
class QVBoxLayout;

class NumberGenerator : public QWidget
{
    Q_OBJECT
public:
    explicit NumberGenerator(QWidget *parent = nullptr);

public slots:
    void generate();

private:
    QLineEdit *minRange;
    QLineEdit *maxRange;
    QPushButton *generateButton;
    QVBoxLayout *numbersListView;

    QHBoxLayout * createRangeComponent();
};

#endif // NUMBERGENERATOR_H
