#include <QApplication>
#include "numbergenerator.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    NumberGenerator numberGenerator;
    numberGenerator.show();

    return app.exec();
}
