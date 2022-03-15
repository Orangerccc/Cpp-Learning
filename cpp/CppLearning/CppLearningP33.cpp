#include<iostream>
using namespace std;

class Complex
{
private:
    double real; //复数实部
    double imag;//复数
public:
    friend ostream & operator << (ostream &out, const Complex &c);
    Complex(double r =0.0, double i = 0.0):real(r),imag(i){
        cout << "Complex constructor is called" <<endl;
    };
    Complex(const Complex &c1){
        this->real = c1.real;
        this->imag = c1.imag;
        cout << "Complex copy constructor is called" <<endl;
    };
    ~Complex(){
        cout << "Complex destructor is called" <<endl;
    }
    Complex operator + (const Complex &c2) const;
    Complex operator - (const Complex &c2) const;
    Complex operator + (const double &c2) const;
    Complex operator - (const double &c2) const;
    // Complex operator = (const Complex &c2) const;
    void display() const;
};
Complex Complex::operator+(const Complex &c2) const{
    // Complex res;
    // res.real = this->real + c2.real;
    // res.imag = this->imag + c2.imag;
    // return res;
    return Complex(this->real + c2.real,this->imag + c2.imag);
}
Complex Complex::operator-(const Complex &c2) const{
    // Complex res;
    // res.real = this->real - c2.real;
    // res.imag = this->imag - c2.imag;
    // return res;
    return Complex(this->real - c2.real,this->imag - c2.imag); //创建临时无名对象速度更快,效率更高
}
// Complex Complex::operator=(const Complex &c2) const{
//     Complex res;
//     res.real = this->real + c2.real;
//     res.imag = this->imag + c2.imag;
//     return res;
// }
Complex Complex::operator+(const double &c2) const{
    return Complex(this->real + c2,this->imag);
}
Complex Complex::operator-(const double &c2) const{
    return Complex(this->real - c2,this->imag);
}
void Complex::display() const{
    cout << this->real <<"+"<<this->imag<<"i"<<endl;
}
ostream & operator << (ostream &out, const Complex &c){
    out << "(" << c.real << "," << c.imag <<")" <<endl;
    return out;
}
int main(){
    Complex c1(1,2);
    Complex c2(3,4);
    Complex c3 = c1 - c2;
    Complex c4 = c1 + 1;
    c1.display();
    c2.display();
    c3.display();
    c4.display();
    cout << c1 << endl;
    return 0;
}