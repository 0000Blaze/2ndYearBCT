//Three classes , base with complex number , derived adds to base  and friend of derived subtracts with base

#include <iostream>

class comp2;

class comp{   //base class
protected:
  int real,img;
public:
  comp(int r=0,int i=0){  //initialize value from user
    real = r;
    img = i;
  }
friend comp2;
};

class comp1:public comp{    //derived class
private:
  int real1,img1;
public:
  comp1(int r=0,int i=0){
    real1 = r;
    img1 = i;
  }
void add();   //addition method

};

class comp2{     //freind class
private:
  int real2,img2;
public:
  comp2(int r=0,int i=0){
    real2 = r;
    img2 = i;
  }
void sub(int,int);  //subtraction method
};

void comp1::add(){
  int temp1,temp2;
  temp1=real + real1;
  temp2=img +img1;
  std::cout << "Sum is:" <<temp1<<" +i("<<temp2<<")"<<"\n";
}

void comp2::sub(int real,int img){
  int temp1,temp2;
  temp1=real - real2;
  temp2=img - img2;
  std::cout << "Difference is:" <<temp1<<" +i("<<temp2<<")"<<"\n";

}

int main() {
  int r,i;
  std::cout << "For base class enter complex number(real part then img part):";
  std::cin >> r>>i;
  comp obj(r,i);
  comp1 obj1(10,12);
  comp2 obj2(5,6);
  obj1.add();
  obj2.sub(r,i);
  return 0;
}
