#ifndef MINWIDGET_H
#define MINWIDGET_H

#include "datawidget.h"

/*!
 * \brief The MinWidget class calculates and shows the
 * minimum numbers of "all", "even", and "odd".
 *
 * \headerfile "widgets/midwidget.h"
 */
class MinWidget : public DataWidget
{
    Q_OBJECT
public:
    /*!
     * \brief Constructs the minimum widget.
     *
     * \param parent The parent which is passed to QWidget constructor.
     */
    explicit MinWidget(QWidget *parent = nullptr);

public slots:
    /*!
     * \brief Calculates the minimum values then updates the widget's interface.
     *
     * \param value The value which is used to calculate the minimum values.
     */
    void addValue(int value);

};

#endif // MINWIDGET_H
