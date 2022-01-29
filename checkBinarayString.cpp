#include <iostream>
#include <string>
using namespace std;

class binary
{

    string s1;

public:
    void inputstring();

    void checkbinary();
};

void binary::inputstring()
{
    cout << "Enter a string:" << endl;
    cin >> s1;
}
void binary::checkbinary()
{
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1.at(i) != '0' && s1.at(i) != '1')
        {
            cout << "String is not binary";
            exit(0);
        }
    }
    cout << "String is Binary " << endl;
}
int main()
{

    binary obj;
    obj.inputstring();
    obj.checkbinary();
    return 0;
}