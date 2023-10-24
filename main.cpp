/*! \mainpage Welcome to NumberGenerator's documentation!
 * \section Introduction
 *
 * NumberGenerator is an application where a user can generate
 * random numbers between a user-specified minimum and maximum
 * numbers and then using these random numbers, calculate the
 * sum, average, maximum, and minimum of all numbers, even
 * numbers, and odd numbers.
 *
 */
#include <QApplication>
#include "numbergenerator.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    NumberGenerator numberGenerator;
    numberGenerator.show();

    return app.exec();
}
