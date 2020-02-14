//default , parameterized and user-defined copy constructor
#include<iostream>

class vehicle
{
private:
  int num_vehicle , hour , rate ;
public:
  vehicle(){}                   //default constructor
  vehicle(int num);             //initialize parametrized Constructor
  vehicle(const vehicle &v1);   //initialize user defined copy constructor
  void display()
    {
        std::cout << "\nnum_vehicle: " <<num_vehicle<<" hour :"<<hour<<" rate: "<<rate;
    }
};
vehicle::vehicle(int num)
{
  num_vehicle=num;
  std::cout << "Enter hour: ";
  std::cin >> hour;
  std::cout << "Enter rate: ";
  std::cin >> rate;
  if (num_vehicle>10) {
    rate=rate-(0.1*rate);       //decrease rate as per question
  }
}

vehicle::vehicle(const vehicle &v1)
{
    num_vehicle=v1.num_vehicle;
    hour=v1.hour;
    rate=v1.rate;
}


int main() {
  int num;
  std::cout << "Enter vehicle number: ";
  std::cin >> num;
  vehicle v1(num);    //parametric constructor
  vehicle v2=v1;     //user defined copy constructor
  std::cout << "For V1:";
  v1.display();
  std::cout << "\nFor V2:" ;
  v2.display();
  return 0;
}
