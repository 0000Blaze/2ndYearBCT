// exception handling , added to stack class(in the lab 9 sheet)

#include<iostream>

using namespace std;

template<class T>
class Stack
{
private:
T st[100];
int top;

public:
Stack();
void push(T var);
T pop();

};



template<class T>
Stack<T>::Stack(){
top=-1;
}

template<class T>
void Stack<T>::push(T var){
if(top>1){                          //assumption for max elements of stacks reduced to test exception handling
        throw "Stack is full";
}
st[++top]=var;
}



template<class T>
T Stack<T>::pop(){
if(top<0){
    throw 1;
}
return st[top--];
}



int main()
{
Stack<float> s1;
try{
    s1.push(111.1F);
    s1.push(222.2F);
    s1.push(333.3F);

   // s1.push(44.3F);   testing stack full exception

}   catch (const char* msg){
        cerr<<msg<<endl;
}
try{
    cout<<"1 : "<<s1.pop()<<endl;
    cout<<"2 : "<<s1.pop()<<endl;
    cout<<"3 : "<<s1.pop()<<endl;

    s1.pop();             //testing stack empty exception

} catch (int num){
    cerr<<"Stack is empty"<<endl;
}

cout<<endl;

Stack<long> s2;

try{
    s2.push(123123123L);
    s2.push(234234234L);
    s2.push(345345345L);

    s2.push(123213213L); //testing stack full exception

}catch(const char* msg){
    cerr<<msg<<endl;
}
try{
    cout<<"1 : "<<s2.pop()<<endl;
    cout<<"2 : "<<s2.pop()<<endl;
    cout<<"3 : "<<s2.pop()<<endl;

    //s2.pop();             //testing  stack empty exception

}catch (int num){
    cerr<<"Stack is empty"<<endl;
}
return 0;

}
