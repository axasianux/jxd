#include <QApplication>
#include <QtGui>
#include "readfile.h"
#include "writefile.h"

int main(int argc,char *argv[])
{
    QApplication app(argc,argv);

    WriteFile writefile;

    ReadFile readfile;

    return app.exec ();

}

