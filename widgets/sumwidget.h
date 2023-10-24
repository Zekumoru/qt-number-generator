#ifndef SUMWIDGET_H
#define SUMWIDGET_H

#include "datawidget.h"

/*!
 * \brief The SumWidget class calculates and shows the
 * sum of "all", "even", and "odd" numbers.
 *
 * \headerfile "widgets/sumwidget.h"
 */
class SumWidget : public DataWidget
{
    Q_OBJECT
public:
    /*!
     * \brief Constructs the sum widget.
     *
     * \param parent The parent which is passed to QWidget constructor.
     */
    explicit SumWidget(QWidget *parent = nullptr);

public slots:
    /*!
     * \brief Calculates the sum of "all", "even", and "odd" values then updates the widget's interface.
     *
     * \param value The value which is used to calculate the sum for "all", "even", and "odd" numbers.
     */
    void addValue(int value);

};

#endif // SUMWIDGET_H
