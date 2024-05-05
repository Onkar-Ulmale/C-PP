// Write a program to create student class with data members rollno, marks1,mark2,mark3.
// Accept data (acceptInfo()) and display  using display member function.
// Also display total,percentage and grade.
#include<iostream>
using namespace std;

class student
{
    private :
    int rollno, m1,m2,m3;
    int total=0,percentage=0;
    

    public:
    void acceptinfo()
    {
        cout<<"Enter The Roll Number :"<<endl;
        cin>>this->rollno;
        cout<<"Enter Marke Of Three subjects : "<<endl;
        cin>>this->m1>>this->m2>>this->m3;  
    }
    void display()
    {
        cout<<"The Roll Number Is : "<<this->rollno<<endl;
        cout<<" The marks of three subjects is : "<<this->m1<<" "<<this->m2<<" "<<this->m3<<endl;
        totalm();
        percentagem();
        grade();

    }
    void totalm()
    {
        this->total=this->m1+this->m2+this->m3;
        cout<<"The Total is : "<<this->total<<endl;
    }
    

    void percentagem()
    {
        this->percentage=this->total*100/300;
        cout<<"The Percentage is : "<<this->percentage<<endl;
    }

    void grade()
    {
        if(this->percentage>=90)
        {
            cout<<"You  got A Grade"<<endl;
        }
        else if(this->percentage>=80 && this->percentage<90)
        {
            cout<<"You  got B Grade"<<endl;
        }
        else if(this->percentage>=70 && this->percentage<80)
        {
            cout<<"You  got C Grade"<<endl;
        }
        else if(this->percentage>=60 && this->percentage<70)
        {
            cout<<"You  got D Grade"<<endl;
        }
        else if(this->percentage>=50 && this->percentage<60)
        {
            cout<<"You  got E Grade"<<endl;
        }
        else if(this->percentage<50)
        {
            cout<<"You are faillllll : Now you can cry"<<endl;
        }

    }


};


int main()
{
    student s1;
    s1.acceptinfo();
    s1.display();
    return 0;


}