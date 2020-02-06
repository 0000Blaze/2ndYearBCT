//convert distance int centimeter to float meters, also vice versa
#include <iostream>
class conv{
private:
  int meter;
  float centimeter;

public:
    conv(int,float);
    conv(float b);
    void show();
    operator float()
{
    return(meter+((float)centimeter/100));
}
};

conv::conv(int a=0,float b=0){    //set value constructor

  meter=a;
  centimeter =b;
}

conv::conv(float p){
    meter= static_cast<int>(p);
    centimeter=(p-meter)*100;
}

void conv::show(){
std::cout<<meter<<"m "<<centimeter<<"cm ";
}



int main(){
    int x;
    float y;
    std::cout << "Enter meter:"; std::cin >> x;
    std::cout << "Enter centimeter:";  std::cin >> y;
    conv obj(x,y);
    float b = obj;    //conversion to float from class
    std::cout << b<<"\n";
    conv obj2=b;
    obj2.show();

  return 0;
}
