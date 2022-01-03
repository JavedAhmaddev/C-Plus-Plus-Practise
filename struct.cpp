#include<iostream>
using namespace std;

struct student
{
    int marks;
    string name;
};


int main(){
    
    student ahsan;
    ahsan.marks=34;
    ahsan.name="Ali";
    cout<<ahsan.name <<endl<<ahsan.marks;
    return 0;
}