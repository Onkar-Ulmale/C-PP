#include<iostream>
using namespace std;
int main()
{
    char ch1,ch2;
    int a;
    int b;
    cout<<"enter the lower case charecter";
    cin>>ch1;
    a = (int)ch1;
    b = a - 32;

    cout<<"Charecter in Upper case is "<<(char)b;

    return 0;


}