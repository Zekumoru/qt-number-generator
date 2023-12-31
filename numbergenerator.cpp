#include "numbergenerator.h"

#include <QGridLayout>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QString>
#include <QPushButton>
#include <QScrollArea>
#include <Qt>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include "randutils.h"
#include "widgets/sumwidget.h"
#include "widgets/averagewidget.h"
#include "widgets/maxwidget.h"
#include "widgets/minwidget.h"

NumberGenerator::NumberGenerator(QWidget *parent)
    : QWidget{parent}
{
    randinit();

    QHBoxLayout *rangeLayout = createRangeComponent();
    generateButton = new QPushButton(tr("&Generate"));
    QScrollArea *numbersList = createNumbersListComponent();

    SumWidget *sumWidget = new SumWidget();
    AverageWidget *averageWidget = new AverageWidget();
    MaxWidget *maxWidget = new MaxWidget();
    MinWidget *minWidget = new MinWidget();

    QGridLayout *mainLayout = new QGridLayout;
    mainLayout->addLayout(rangeLayout, 0, 0);
    mainLayout->addWidget(generateButton, 1, 0);
    mainLayout->addWidget(numbersList, 2, 0);
    mainLayout->addWidget(sumWidget, 3, 0);
    mainLayout->addWidget(averageWidget, 4, 0);
    mainLayout->addWidget(maxWidget, 5, 0);
    mainLayout->addWidget(minWidget, 6, 0);

    setLayout(mainLayout);
    setWindowTitle(tr("Number Generator"));

    connect(generateButton, SIGNAL (clicked()), this, SLOT (generate()));
    connect(this, SIGNAL (generated(int)), sumWidget, SLOT (addValue(int)));
    connect(this, SIGNAL (generated(int)), averageWidget, SLOT (addValue(int)));
    connect(this, SIGNAL (generated(int)), maxWidget, SLOT (addValue(int)));
    connect(this, SIGNAL (generated(int)), minWidget, SLOT (addValue(int)));
}

void NumberGenerator::generate()
{
    int number = randbetween(minRange->text().toInt(), maxRange->text().toInt());

    QLabel *item = new QLabel(QString::number(number));
    item->setMinimumHeight(40);
    numbersListView->insertWidget(0, item);

    emit generated(number);
}

QHBoxLayout * NumberGenerator::createRangeComponent()
{
    QLabel *rangeLabel = new QLabel(tr("Range:"));
    QLabel *rangeDashLabel = new QLabel(" - ");
    QRegularExpressionValidator *numbersRegex = new QRegularExpressionValidator(QRegularExpression("[1-9][0-9]{0,2}"));
    minRange = new QLineEdit;
    minRange->setValidator(numbersRegex);
    minRange->setText(QString::number(5));
    maxRange = new QLineEdit;
    maxRange->setValidator(numbersRegex);
    maxRange->setText(QString::number(95));

    QHBoxLayout *rangeLayout = new QHBoxLayout;
    rangeLayout->addWidget(rangeLabel);
    rangeLayout->addWidget(minRange);
    rangeLayout->addWidget(rangeDashLabel);
    rangeLayout->addWidget(maxRange);

    return rangeLayout;
}

QScrollArea * NumberGenerator::createNumbersListComponent()
{
    numbersListView = new QVBoxLayout;
    numbersListView->addStretch();

    QWidget *numbersScrollAreaContent = new QWidget;
    numbersScrollAreaContent->setLayout(numbersListView);

    QScrollArea *numbersScrollArea = new QScrollArea;
    numbersScrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    numbersScrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    numbersScrollArea->setWidgetResizable(true);
    numbersScrollArea->setMinimumHeight(400);
    numbersScrollArea->setWidget(numbersScrollAreaContent);

    return numbersScrollArea;
}
