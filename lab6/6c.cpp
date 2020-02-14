//inheritance
#include<cstring>
#include <iostream>

class Musicians{
protected:
  char str[4][15],win[4][15],per[4][15];
public:
  void string(){
        strcpy(str[0],"veena");
        strcpy(str[1],"guitar");
        strcpy(str[2],"sitar");
        strcpy(str[3],"sarod");
        strcpy(str[4],"mandolin");
    }
  void wind(){
        strcpy(win[0],"tabla");
        strcpy(win[1],"mridangam");
        strcpy(win[2],"bangos");
        strcpy(win[3],"drums");
        strcpy(win[4],"tambour");
    }
  void perc(){
        strcpy(per[0],"flute");
        strcpy(per[1],"clarinet");
        strcpy(per[2],"saxophone");
        strcpy(per[3],"nadhaswaram");
        strcpy(per[4],"picolo");
    }
  void showStr();
  void showWin();
  void showPer();
};

void Musicians::showStr(){
  std::cout << "For string:" << '\n';
  for(int i=0;i<5;i++){
    std::cout << str[i]<<", ";
  }
}

void Musicians::showWin(){
  std::cout << "For wind:" << '\n';
  for(int i=0;i<5;i++){
    std::cout << win[i]<<", ";
  }
}

void Musicians::showPer(){
  std::cout << "For perc:" << '\n';
  for(int i=0;i<5;i++){
    std::cout << per[i]<<", ";
  }
}

class TypeIns:public Musicians{
private:
  char choice;
public:
  void get();
  void show();
};

void TypeIns::get(){
  std::cout << "Choose\na.String instruments\nb.Wind instruments\nc.Percussion instrument" << '\n';
  std::cin >> choice;
  if(choice=='a'){
    string();
  }
  else if(choice=='b'){
    wind();
  }
  else{
    perc();
  }
}

void TypeIns::show(){
  if(choice=='a'){
    showStr();
  }
  else if(choice=='b'){
    showWin();
  }
  else{
    showPer();
  }
}

int main() {
  TypeIns obj;
  obj.get();
  obj.show();
  return 0;
}
