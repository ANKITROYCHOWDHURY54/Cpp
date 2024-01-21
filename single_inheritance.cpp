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
        void get_data()
        {
            cout<<"Enter the name: ";
            cin>>name;
            cout<<"\nEnter the age: ";
            cin>>age;
            cout<<"\nEnter the height: ";
            cin>>h;
            cout<<"\nEnter the weight: ";
            cin>>w;
        }
        void show()
        {
            cout<<"\nName: "<<name;
            cout<<"\nAge: "<<age;
            cout<<"\nHeight: "<<h;
            cout<<"\nWeight: "<<w;
        }
};
int main(){
    B C;
    C.get_data();
    C.show();
}