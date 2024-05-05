#include<iostream>
using namespace std ;
//class for emploee
class emp
{
    private:
    int id,deptid;
    string name;
    protected:
    double basic_salary;

    public:
    //default constructor of emp
    emp(){
        this->id=11;
        this->deptid=6911;
        this->name='JOJO';
        this->basic_salary=10000;
    }
    //parameterized constructor of emp
    emp(int a,int b,string n,double s){
        this->id=a;
        this->deptid=b;
        this->name=n;
        this->basic_salary=s;
    }

    //print net salary

    virtual double  computeNetSalary()
    {
        return basic_salary;
    }


    virtual void display()
    {
        cout<<"Id :"<<id<<"\n"<<"Department Id : "<<deptid<<"\n";
        cout<<"Name : "<<name<<"\n"<<"Salary is : "<<basic_salary<<"\n";
    }
};

//child class manager of parent class employee

class manager : public emp
{
    private:
    int perfbonous;
    public:
    // default constructor of manager class
    manager():emp()
    {

        this->perfbonous=2000;
    }

    // Parameterized constructor of manager class
    manager(int id ,int deptid, string name,double basic_salary ,int perfbonous):emp( id, deptid,name,basic_salary)
    {
        this->perfbonous=perfbonous;
    }

    // override net salary of manager 
    double  computeNetSalary()
    {
        basic_salary=basic_salary+perfbonous;   
    }

    void display()
    {

        emp::display();
        cout<<"\n performance Bonous : "<<perfbonous;
    }
};

//child class worker of parent class employee
class worker : public emp
{
    private:
    int hoursworked,hourlyrate;

    public:

    //default constructor of worker class
    worker():emp()
    {
        this->hoursworked=8;
        this->hourlyrate=50;
    }

    //parameeterrized constructor of worker class
    worker(int id ,int deptid, string name,double basic_salary ,int hoursworked,int hourlyrate):emp( id, deptid,name,basic_salary)
    {
        this->hoursworked=hoursworked;
        this->hourlyrate=hourlyrate;
    }

    //getter for hourly rate
    double getrate( )
    {
        cout<<"enter the Hourly rate";
        cin>>this->hourlyrate;

    }

    // override net salary of worker 
    double  computeNetSalary()
    {
        basic_salary= basic_salary+(hoursworked*hourlyrate);   
    }

     void display()
    {

        emp::display();
        cout<<"\n";
    }
};

int main()
{
    emp o1;
    o1.computeNetSalary();
    o1.display();
    cout<<"--------------------------";
     
     //id ,deptid,name,basic_salary ,perfbonous
    manager m1(11,6969,"gogo",30000,3000);
    m1.computeNetSalary();
    m1.display();

}