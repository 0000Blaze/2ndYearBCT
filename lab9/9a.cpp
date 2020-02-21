//template for sum function that adds array elements
#include<iostream>

template<typename T>

T sum(T arr[],int n)
{
    T add=0;
    for(int i=0;i<n;i++){
        add+=arr[i];
    }
    return add;
}


int main(){
    int n=5;

    //for integer
    int iArr[n]={1,2,3,4,5};
    std::cout<<sum<int>(iArr,n)<<std::endl;

    //for float
    float fArr[n]={1.1,2.1,3.1,4.1,5.1};
    std::cout<<sum<float>(fArr,n)<<std::endl;

return 0;
}

