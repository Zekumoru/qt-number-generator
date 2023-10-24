#ifndef NUMBERGENERATOR_H
#define NUMBERGENERATOR_H

#include <QWidget>

class QLineEdit;
class QPushButton;
class QHBoxLayout;
class QVBoxLayout;
class QScrollArea;

class NumberGenerator : public QWidget
{
    Q_OBJECT
public:
    explicit NumberGenerator(QWidget *parent = nullptr);

signals:
    void generated(int value);

public slots:
    void generate();

private:
    QLineEdit *minRange;
    QLineEdit *maxRange;
    QPushButton *generateButton;
    QVBoxLayout *numbersListView;

    QHBoxLayout * createRangeComponent();
    QScrollArea * createNumbersListComponent();
};

#endif // NUMBERGENERATOR_H
