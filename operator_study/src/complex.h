#include <iostream>

using namespace std;

class Complex
{
public:
    Complex();
    Complex(double ,double);
    ~Complex();

    Complex operator +(const Complex &c2) const;
    Complex operator -(const Complex &c2) const;
    Complex operator *(const Complex &c2) const;
    Complex operator /(const Complex &c2) const;

    void show_result() const;

private:
    double real;
    double image;
};
