//multiple exception handling, re-throw , catch all exceptions

#include<iostream>

using std::cout;
using std::endl;
using std::cerr;

void handler(){

    cout<<"\n Handler start"<<endl;
//character exception
    try{
           throw 'b';
        }
        catch(char c){
            cerr<<" Character catch block in function"<<endl;
    //re-throw out of function
            throw;
        }

       cout<<" Handler end"<<endl;  //doest not execute due to re-throw
}

int main(){

cout<<" Main Starts: "<<endl;

//integer exception
    try{
        throw 20;
    }
        catch(int x){
            cerr<<" Integer catch block, x="<<x<<endl;
        }

    try{
        handler();
    }
    //catch re-throw from the function
        catch(char ch){
            cerr<<" Character catch block in main"<<endl;
        }

    try{
        throw "hey there";
    }
        catch(int x){
            cerr<<" Integer catch block"<<endl;
        }
        catch(char c){
            cerr<<" Character catch block"<<endl;
        }

    //catches all exceptions
        catch(...){
            cerr<<" Default catch block "<<endl;
        }

    cout<<"\n Main end"<<endl;
    return 0;
}
