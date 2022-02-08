#include<iostream>
using namespace std;


class Point{
    int x,y;
    friend Point distance(Point p1,Point p2);
    public:
    Point()
    {
        x=0;
        y=0;
        cout<<"Default called"<<endl;
    }
    Point(int a,int b)
    {
        x=a;
        y=b;
        cout<<"Paramerixed called"<<endl;
    }
    void display()
    {
        cout <<"X is "<<x<<" and y is"<<y<<endl;
    }

};

Point distance(Point p1,Point p2)
{
    Point p;
    p.x=p1.x-p2.x;
    p.y=p1.y-p2.y;
    return p;
}

int main(){
    
    Point a(5,3);
    Point b(9,8);
    Point p=distance(a,b);
    p.display();
    return 0;
}