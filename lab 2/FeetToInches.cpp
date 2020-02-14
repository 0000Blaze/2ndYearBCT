//2.WAP to sue overloading function with no argument , 1 argument and 2 argument.
//overloading function
#include<iostream>

using namespace std;
void FeetToInch1()
{
    float length;
    cout<<"enter length in feet: ";
    cin>>length;
    length*=12;
    cout<<"the length in inches is "<<length<<endl;
}

void FeetToInch1(float length)
{
    length*=12;
    cout<<"the length in inches is "<<length<<endl;
}

void FeetToInch1(float length,float fly)
{
    cout<<"the length in inches is "<<fly<<endl;
}
int main()
{
    float feet,inch;
    FeetToInch1();
    cout<<"Enter length in feet:";
    cin>>feet;
    inch=12*feet;
    FeetToInch1(feet);
    FeetToInch1(feet,inch);

}

