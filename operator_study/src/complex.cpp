#include "complex.h"

Complex::Complex()
{
}

Complex::Complex(double r=0.0 ,double i=0.0 ):real(r),image(i)
{
}

Complex Complex::operator + (const Complex &c2) const
{
    return Complex(real+c2.real,image+c2.image);
}

Complex Complex::operator - (const Complex &c2) const
{
    return Complex(real-c2.real,image-c2.image);
}

Complex Complex::operator * (const Complex &c2) const
{
    return Complex(real*c2.real,image*c2.image);
}

Complex Complex::operator / (const Complex &c2) const
{
    return Complex(real/c2.real,image/c2.image);
}

void Complex::show_result () const
{
    if(image >= 0)
    {
        cout<<"结果 = "<< real<<"+"<<image<<"i"<<endl;
    }
    else
    {
        cout<<"结果 = "<<real<<image<<"i"<<endl;
    }
}
Complex::~Complex ()
{

}
