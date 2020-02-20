//info of student , store and read from file

#include<iostream>
#include<fstream>

using namespace std;

struct student{

public:
char* name = new char[20];
int studentId;
char* department = new char[25];
char* address = new char[15];

/*~student{
    delete[] name;
    delete[] department;
    delete[] address;
    }*/
};

int main(){
    char* line = new char[30];
    student stu;
    cout<<"Enter name:";        cin>>stu.name;
    cout<<"Enter student id:";  cin>>stu.studentId;
    cout<<"Enter department:";  cin>>stu.department;
    cout<<"Enter address:";     cin>>stu.address;

    ofstream fout;
    fout.open("student.txt");
    if(!fout){
            cout<<"Could not make file\n";
    }
    else
    {
        fout << stu.name<<std::endl;
        fout << stu.studentId<<std::endl;
        fout << stu.department<<std::endl;
        fout << stu.address;
    }
    fout.close();

    cout<<std::endl;

    ifstream fin;
    fin.open("student.txt");
    if(!fin){
            cout<<"File could not be opened\n";
    }

    while(fin >> line){
        cout<<line<<std::endl;
    }
    fin.close();
    delete[] line;
    return 0;
}
