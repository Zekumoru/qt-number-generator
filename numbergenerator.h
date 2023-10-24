#ifndef NUMBERGENERATOR_H
#define NUMBERGENERATOR_H

#include <QWidget>

QT_BEGIN_NAMESPACE
class QLineEdit;
class QPushButton;
class QHBoxLayout;
class QVBoxLayout;
class QScrollArea;
QT_END_NAMESPACE

/*!
 * \brief The NumberGenerator class is the main widget of the program.
 *
 * \details Generates random number between the user-specified range
 * which must be around 1 to 999.
 *
 * \headerfile ""
 */
class NumberGenerator : public QWidget
{
    Q_OBJECT

public:
    /*!
     * \brief Constructs the random number generator widget.
     *
     * \param parent The parent which is passed to QWidget constructor.
     */
    explicit NumberGenerator(QWidget *parent = nullptr);

signals:
    /*!
     * \brief Emits when a random number "value" is generated.
     *
     * \param value The random number generated.
     */
    void generated(int value);

public slots:
    /*!
     * \brief Generates a random number.
     */
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
