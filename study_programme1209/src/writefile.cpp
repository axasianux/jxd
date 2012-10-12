#include "writefile.h"

WriteFile::WriteFile(QGraphicsItem *parent)
    :QGraphicsWidget(parent)
{
    QFile file("/etc/study_file");

    if(!file.open(QIODevice::WriteOnly))
    {
        qDebug()<<"failed to open file\n";

    }

    QTextStream write_file(&file);

     write_file<<"1"<<" "<<"2"<<" "<<"3"<<" "<<"4"<<" "<<"5";

    file.close();
}

WriteFile::~WriteFile()
{

}
