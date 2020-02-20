//overload stream operators for complex number
#include<iostream>

using std::ostream;
using std::cout;
using std::cin;
using std::istream;

class complex{

float img,real;

public:
    complex(float r=0,float i=0){
    img=i;
    real=r;
    }

friend ostream& operator <<(ostream& ,complex );
friend istream& operator >>(istream& ,complex& );
};

ostream& operator <<(ostream &out,complex temp)
{
    out << temp.real;
    out << "+i" << temp.img;
    return out;
}

istream& operator >>(istream &in,complex &temp)  //address of complex obj to store values
{
    cout <<"Enter real part:";
    in >> temp.real;
    cout <<"Enter imaginary part:";
    in >> temp.img;
    return in;
}

int main(){
    complex hero;
    cin >>hero;
    cout << "Output:"<<std::endl;
    cout<<hero;
    return 0;
}
