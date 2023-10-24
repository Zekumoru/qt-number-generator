#ifndef MAXWIDGET_H
#define MAXWIDGET_H

#include "datawidget.h"

/*!
 * \brief The MaxWidget class calculates and shows the
 * maximum numbers of "all", "even", and "odd".
 *
 * \headerfile "widgets/maxwidget.h"
 */
class MaxWidget : public DataWidget
{
    Q_OBJECT
public:
    /*!
     * \brief Constructs the maximum widget.
     *
     * \param parent The parent which is passed to QWidget constructor.
     */
    explicit MaxWidget(QWidget *parent = nullptr);

public slots:
    /*!
     * \brief Calculates the maximum values then updates the widget's interface.
     *
     * \param value The value which is used to calculate the maximum values.
     */
    void addValue(int value);

};

#endif // MAXWIDGET_H
