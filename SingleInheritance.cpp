#include<iostream>
using namespace std;


class base{
    int data1;
public: 
    int data2;
    void setdata()
    {
        data1=10;
        data2=20;
    }
    int getdata1()
    {
        return data1;
    }
    int getdata2()
    {
        return data2;
    }


};

class derived : public base{
    int data3;
public:
    void process();
    void display();
    
};

void derived ::process()
{
    data3=data2*getdata1();
}

void derived ::display()
{
    cout<<" D1 is "<<getdata1()<<endl;
    cout<<" D2 is "<<data2<<endl;
    cout<<" D3 is "<<data3<<endl;
}

int main(){
    derived der;
    der.setdata();
    der.process();
    der.display();
    return 0;
}