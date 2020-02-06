#include<iostream>

class MetCenti;
class FeetInch
{
    float feet;
    float inch;
public:
    FeetInch(float f =0, float i = 0)
    {
        feet = f;
        inch = i;
    }

    operator MetCenti();

    void show()
    {
      std::cout<<std::fixed<<"\nFeet: "<<feet<<"\tInch:"<<inch;
    }
};


class MetCenti
{
    float meter;
    float centimeter;
public:
    MetCenti(float m =0, float c= 0)
    {
      meter = m;
      centimeter = c;
    }

  operator FeetInch()
  {
   return FeetInch(3.2808*meter,centimeter * 0.3937);
  }

  void show()
    {
       std::cout<<"\nMeter: "<<meter<<"\tCentimeter:"<<centimeter;
    }
};

FeetInch::operator MetCenti()
  {
   return MetCenti(feet/3.2808,inch/0.3937);
  }


int main()
{
    FeetInch f1,f2(1.58,11.1);
    MetCenti c1(2,1.6),c2;

    f1 = (FeetInch)c1;
    c2 = (MetCenti) f2;

    std::cout<<"\nobject 1:";
    f2.show();
    c2.show();
    std::cout<<"\nobject 2:";
    c1.show();
    f1.show();

}




