#include<iostream>
using namespace std;

int main()
{
    int a[12]= {20,90,30,52,62,35,16,26,35,95,98,97,};

    for (int i =0 ; i < 12;i++)
    {
        if (a[i] > 50 )
            cout<< a[i] << endl  ;
    }
    return 0;
}