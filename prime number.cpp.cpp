#include <iostream>
using namespace std;
int  main()
{
    int a   ;
    bool b;
    cout<<"enter number";
    cin>>a;
    for (int i=2 ; i < a ; i++)
    {
        if(a/i==0)
        {
            b=0;
        }
        else
            b=1;
    }
    if(b==0)
        cout<<"It is not prime";
    else 
        cout<<"it is prime ";

}



