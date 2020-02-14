//car park class
#include<iostream>
using namespace std;

class carpark
{
    public:
        int carId,chargePerHour;
        float time;
        int setting(int* i)
        {
            carId=*i;
            return 0;
        }
        int showing()
        {
            cout<<"For carId:"<<(carId+1)<<",your total cost is Rs."<<(50 * time)<<endl;
            return 0 ;
        }
};
int main()
{
    int i,num;
    cout<<"The charge per hour for parking is Rs.50"<<endl;
    cout<<"How many cars are there :";
    cin>>num;
    for(i=0;i<num;i++)
    {
        carpark obj[i];
        obj[i].setting(&i);
        cout<<"How many hours did you park :" ;
        cin>>obj[i].time;
        obj[i].showing();
    }

}
