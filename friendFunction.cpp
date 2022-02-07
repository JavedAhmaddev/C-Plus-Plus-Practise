#include<iostream>
using namespace std;

class complex {
    int a,b;
    public:
    friend complex sumcomplex(complex c1, complex c2);
    void setnumbers(int n1, int n2)
    {
        a=n1;
        b=n2;
    }
    void print()
    {
        cout<<"the number is "<<a <<" + "<<b<<"i"<<endl;
    }
};


complex sumcomplex(complex c1, complex c2)
{
    complex c3;
    c3.setnumbers((c1.a+c2.a) ,(c1.b + c2.b));
    return c3;
}

int main(){
     complex c1,c2,sum;
     c1.setnumbers(5,2);
     c1.print();

     c2.setnumbers(2,3);
     c2.print();

    sum= sumcomplex(c1,c2);
    sum.print();
    return 0;
}