#include <QApplication>
#include <QDebug>
#include "complex.h"

int main(int argc,char *argv[])
{
    QApplication app(argc,argv);

    double Fir_real=0.0,Fir_image=0.0,Sec_real=0.0,Sec_image=0.0;

    cout<<"输入第一个复数的实部和虚部(按空格分开,按回车结束)"<<endl;
    cin>>Fir_real>>Fir_image;
    Complex complex(Fir_real,Fir_image);

    cout<<"输入第二个复数的实部和虚部(按空格分开）"<<endl;
    cin>>Sec_real>>Sec_image;
    Complex complex_sec(Sec_real,Sec_image);

    cout<<"按序号选择："<<endl;
    cout<<"1-加法"<<endl<<"2-减法"<<endl<<"3-乘法"<<endl<<"4-除法"<<endl;

    int oper;
    cin>>oper;

    Complex show_complex;

    switch(oper)
    {
    case 1:
    {
        show_complex=complex+complex_sec;
        show_complex.show_result ();
        break;
    }
    case 2:
    {
        show_complex=complex-complex_sec;
        show_complex.show_result ();
        break;
    }
    case 3:
    {
        show_complex=complex*complex_sec;
        show_complex.show_result ();
        break;
    }
    case 4:
    {
        show_complex=complex/complex_sec;
        show_complex.show_result ();
        break;
    }
    default:
    {
        cout<<"Enter wrong!!!"<<endl;
        break;
    }
    }
   return 0;
}
