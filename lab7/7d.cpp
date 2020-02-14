//RTTI
#include<iostream>
#include<typeinfo>

using namespace std;
class Vehicle
{
protected:
    char name[20];
    int maxSpeed;
    int hp;

    virtual void show(){}
};

class Bus: public Vehicle
{
};

class Car: public Vehicle
{
};

class Bike: public Vehicle
{
};

int main()
{
    Bus b;
    Car c;
    Bike *bi,bi1;
    Vehicle *v = &b;
    cout<<"\n"<<typeid(*v).name();
    v = &bi1;
    bi = dynamic_cast<Bike*>(v);
    cout<<"\n"<<typeid(bi).name();

}
