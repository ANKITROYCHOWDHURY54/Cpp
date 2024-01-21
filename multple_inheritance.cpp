#include<iostream>
using namespace std;
class A{
    protected:
        char name[10];
        int age;
};
class B{
    protected:
        int w;
        float h;
};
class C:public A,public B{
    public:
        char gender[10];
        void get_data()
        {
            cout<<"Enter name and age: ";
            cin>>name>>age;
            cout<<"\nEnter height and weight: ";
            cin>>h>>w;
            cout<<"\nEnter gender: ";
            cin>>gender;
        }
        void show()
        {
            cout<<"\nName: "<<name;
            cout<<"\nAge: "<<age;
            cout<<"\nHeight: "<<h;
            cout<<"\nWeight: "<<w;
            cout<<"\nGender: "<<gender;
        }
};
int main()
{
    C ob;
    ob.get_data();
    ob.show();
}