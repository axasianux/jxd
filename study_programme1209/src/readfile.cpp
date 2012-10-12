#include "readfile.h"

ReadFile::ReadFile(QGraphicsItem *parent)
    :QGraphicsWidget(parent)
{
    FILE *fp;
    int f[5];
    int value[5];

    if((fp = fopen("/etc/study_file","r")) == NULL)
    {
        printf("failed to open  file\n");

        return ;
    }
    else
    {
        fscanf(fp, "%d %d %d %d %d", &f[0],&f[1],&f[2],&f[3],&f[4]);

        int i;

        for (i=0; i<5; i++)
        {
            printf("f[%d]=%d\n",i,f[i]);
            value[i] = f[i];
            printf("%d\n",value[i]);
        }
    }

}


ReadFile::~ReadFile ()
{

}
