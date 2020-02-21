//class template for queue of different data types
#include<iostream>

template<typename T>
class queue{
private:
    T *ptr;
    int size;
public:
    queue(){}
    queue(T[],int s);
    void print();
};

template<typename T>
queue<T>::queue(T arr[],int s):size(s){
    ptr= new T[s];
    for(int i=0;i<s;i++)
    {
            ptr[i]=arr[i];
    }
}

template<typename T>
void queue<T>::print(){
    for(int i=0;i<size;i++){
        std::cout<<" "<<*(ptr+i);
    }
 std::cout<<std::endl;
}

int main(){
    int s=5;

    //for integer
    int iArr[s]={1,2,3,4,5};
    queue<int> i(iArr,s);
    i.print();

    //for char
    char cArr[s]={'a','b','c','d','e'};
    queue<char> c(cArr,s);
    c.print();

    //for float
    float fArr[s]={1.1,1.2,3.1,2.2,5.3};
    queue<float> f(fArr,s);
    f.print();

return 0;
}
