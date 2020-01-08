// classes for circle , rectangle , triangle
#include<iostream>
#include<cmath>
using namespace std;

const float PI = 3.14;

class circle
{
    public:
        float radius;
        float perimeter()
        {
            return (2*PI*radius);
        }
        float area()
        {
            return (PI*radius*radius);
        }
};

class rectangle
{
    public:
        float length,breadth;
        float perimeter()
        {
            float x=(length+breadth)*2;
            return (x);
        }
        float area()
        {
            return (length*breadth);
        }
};

class triangle
{
    public:
        float side1,side2,side3;
        float perimeter()
        {
            return (side1+side2+side3);
        }
        float area()
        {
            float s=(side1+side2+side3)/2;
            return (sqrt(s*(s-side1)*(s-side2)*(s-side3)));
        }
};
int main()
{
    do
    {
        cout<<"Enter: \n 1.Circle \n 2.Rectangle \n 3.Triangle"<<endl;
        int choice;
        char ck='y';
        cin>>choice;
        if(choice == 1)
        {
            circle obj1;
            cout<<"Enter radius: ";
            cin>>obj1.radius;
            cout<<"The area="<<obj1.area()<<" and the perimeter="<<obj1.perimeter()<<endl;
        }
        else if (choice == 2)
        {
            rectangle obj2;
            cout<<"Enter length and breadth: "<<endl;
            cin>>obj2.length;
            cin>>obj2.breadth;
            cout<<"The area="<<obj2.area()<<" and the perimeter="<<obj2.perimeter()<<endl;
        }
        else if (choice == 3)
        {
            triangle obj3;
            cout<<"Enter the three sides of triangle: "<<endl;
            cin>>obj3.side1;
            cin>>obj3.side2;
            cin>>obj3.side3;
            cout<<"The area="<<obj3.area()<<" and the perimeter="<<obj3.perimeter()<<endl;
        }
        cout<<"Do u want to continue (y/n):";
        cin>>ck;
        if (ck == 'n')
            break;
    }while(true);
}
