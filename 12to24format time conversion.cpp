// Online C++ compiler to run C++ program online
#include <iostream>

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
      string result;
      string r = s.substr(0, 2);
    
    if(s[8]=='A'&& r=="12")
    {
        s.resize(s.size() - 2);
        result =s;
        int a= s[0]-'0';
        int b=s[1]-'0';
        a=0;
        b=0;
         char c=a+'0';
         result[0]=c;
         char c2=b+'0';
         result[1]=c2;
        return result;    
    }
    else if(s[8]=='A')
    {
        s.resize(s.size() - 2);
    result =s;
        return result;
    }
    else if(r=="12"&& s[8]=='P')
    {
        s.resize(s.size() - 2);
    result =s;
        return result;
    }
    else {
        s.resize(s.size() - 2);
        result =s;
        int a= s[0]-'0';
        int b=s[1]-'0';
         a=a+1;
         b=b+2;       
         char c=a+'0';
         result[0]=c;
         char c2=b+'0';
         result[1]=c2;
        return result;    
    }
}


int main()
{
    string s="12:08:55PM";

    string result = timeConversion(s);

    cout << result << "\n";



    return 0;
}
