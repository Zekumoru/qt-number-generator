#ifndef AVERAGEWIDGET_H
#define AVERAGEWIDGET_H

#include "datawidget.h"

/*!
 * \brief The AverageWidget class calculates and shows the
 * average numbers of "all", "even", and "odd".
 *
 * \headerfile "widgets/averagewidget.h"
 */
class AverageWidget : public DataWidget
{
    Q_OBJECT

public:
    /*!
     * \brief Constructs the average widget.
     *
     * \param parent The parent which is passed to QWidget constructor.
     */
    explicit AverageWidget(QWidget *parent = nullptr);

public slots:
    /*!
     * \brief Calculates the average values then updates the widget's interface.
     *
     * \param value The value which is used to calculate the average numbers.
     */
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
