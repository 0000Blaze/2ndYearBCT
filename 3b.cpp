//check prime
#include<iostream>
class prime
{
    public:
        char cont;
        int i,num,b=0;
        int check()
        {
            b=0;
            for(i=2;i<num;i++)
            {
                    if(num%i == 0)
                    b++;
            }
            if (b == 0)
                std::cout<<num<<" is prime "<<std::endl;
            else
                std::cout<<num<<" is not prime "<<b<<std::endl;
        }
};
int main()
{
    prime obj;
    std::cout<<"Enter 'y' to continue and 'n' to stop"<<std::endl;
    do
    {
        std::cout<<"Enter number: ";
        std::cin>>obj.num;
        obj.check();
        std::cout<<"(y/n)";
        std::cin>>obj.cont;
        if (obj.cont=='n')
            break;
    }while(true);
}
