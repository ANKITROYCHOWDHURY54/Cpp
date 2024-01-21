#include<iostream>
using namespace std;
class A{
    protected:
        char name[10];
        int age;
};
class B:public A{
    public:
        float h;
        int w;
        void get_data1()
        {
            cout<<"Enter name: ";
            cin>>name;
            cout<<"\nEnter height and weight: ";
            cin>>h>>w;
        }
        void show()
        {
            cout<<"\nName: "<<name;
            cout<<"\nHeight: "<<h;
            cout<<"\nWeight: "<<w;
        }
};
class C:public A{
    public:
        char g[10];
        void get_data2(){
            cout<<"\nEnter the age: ";
            cin>>age;
            cout<<"\nEnter the gender: ";
            cin>>g;
        }
        void show()
        {
            cout<<"\nAge: "<<age;
            cout<<"\nGender: "<<g;
        }
};
int main()
{
    B ob;
    C ob1;
    ob.get_data1();
    ob1.get_data2();
    ob.show();
    ob1.show();
}