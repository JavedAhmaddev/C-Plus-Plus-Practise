#include<iostream>
using namespace std;

int main(){
    int a=3;
    int* b=&a;
    int** c=&b;
    cout<<a<<endl; //value of a
    cout<<*b<<endl; //value of a
    cout<< **c<<endl;//value of a
    cout<< " ------------- "<<endl;
    cout<<&a<<endl; //address of a
    cout<<b<<endl; //address of a , value of b
    cout<<*c<<endl; // value of b which is address of a
    cout<< " ------------- "<<endl;
    cout<<&b<<endl; //address of b
    cout<<c<<endl; // value of c which is address of b
    cout<< " ------------- "<<endl;
    cout<<&c<<endl; // address of c
    
    

    return 0;
}