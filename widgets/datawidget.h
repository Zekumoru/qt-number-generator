#ifndef DATAWIDGET_H
#define DATAWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
class QLabel;
QT_END_NAMESPACE

/*!
 * \brief The DataWidget abstract class shows the "all", "even", and
 * "odd" values based on an internal logic provided by its
 * concrete classes (subclasses of DataWidget).
 *
 * \details By some internal logic provided by its subclasses, it will
 * show the current values of "all", "even", and "odd". However,
 * updateInterface() must be called to update the texts in the
 * widget's interface.
 *
 * \headerfile "widgets/datawidget.h"
 */
class DataWidget : public QWidget
{
    Q_OBJECT
public:
    /*!
     * \brief Constructs a data widget.
     *
     * \param title The string to show as the title of this widget.
     * \param parent The parent which is passed to QWidget constructor.
     */
    explicit DataWidget(const QString &title, QWidget *parent = nullptr);

public slots:
    /*!
     * \brief A virtual method which contains the internal logic.
     *
     * \details Overridden to perform the internal logic to update "all", "even", and "odd" values in the widget's interface.
     *
     * \param value The value to perform the internal logic with.
     */
    virtual void addValue(int value) = 0;

protected:
    double allValue;
    double evenValue;
    double oddValue;

    /*!
     * \brief Updates the values of "add", "even", and "odd" values in the widget's interface.
     */
    void updateInterface();

private:
    QLabel *allLabel;
    QLabel *evenLabel;
    QLabel *oddLabel;
};

#endif // DATAWIDGET_H
