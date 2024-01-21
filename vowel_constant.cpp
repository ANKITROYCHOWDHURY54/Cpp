#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter the character: ";
    cin>>c;
    if(c =='a'||c =='e'||c =='i'||c =='o'||c =='u'){
        cout<<"vowel";
    }
    else{
        cout<<"constant";
    }
}