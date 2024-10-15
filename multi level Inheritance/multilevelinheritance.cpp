//C++ program for multilevel inheritance

#include<iostream>
using namespace std;

class Person{
    char name[30];
    public:
    void read(){
        cout<<"Enter name:"<<endl;
        cin>>name;
    }
    void display(){
    }
};
class Sport:public Person{
    int m=80;
    public:
    void display(){
        cout<<m;
    }
};       
class Student:public Sport{
    public:
    void display(){
        Person::display();
        Sport::display();
    }
};
int main(){
    Student st;
    st.read();
    st.display();
    return 0;
}
