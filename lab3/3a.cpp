//1.temperature conversion with use of classes
#include<iostream>

using namespace std;
class Celsius
{
    private:
        float temp;

    public:
        float toFahrenheit()
        {
            temp=32;
            float t;
            t=(temp*1.8)+32;
            return t;
        }
};

class Fahrenheit
{
    private:
        float temp;

    public:
        float toCelsius()
        {
            temp=60;
            float t;
            t=(temp-32)*0.55556;
            return t;
        }
};
int main()
{
    float result1,result2;
    Celsius obj;
    Fahrenheit obj1;
    result1=obj.toFahrenheit();
    cout<<"32 celsius to fahrenheit is "<<result1<<endl;
    result2=obj1.toCelsius();
    cout<<"60 fahrenheit to celsius is "<<result2<<endl;

}
