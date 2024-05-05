// 3:Create a abstract class Shape with pure virtual method area;
// Create Rectangle,Circle,Square class..inherit them from Shape class..Override area method.
// Test these all classes by creating object of respective class.
#include<iostream>
using namespace std;
class shape
{
    private:

    public:
        virtual void calarea()
        {
            cout<<"Parameters not available:"<<endl;
        }
        virtual void display()
        {
            cout<<"Shape Not specified "<<endl;
        }
};
class rectangle : private shape
{
    private:
        int l,b;
        float area;

    public:
        rectangle()
        {
            this->l=3;
            this->b=4;
        }
        rectangle(int a, int b)
        {
            this->l=a;
            this->b=b;
        }

        void calarea()
        {
            this->area=this->l*this->b;
        }
        void display()
        {
            cout<<"length * breadth :"<<this->l<<"  "<<this->b<<endl;
            cout<<"Area of rectangle is :"<<this->area<<endl;
        }
};
class square:private shape
{
    private:
        int s;
        float area;
    public:
        square()
        {
            this->s=4;
        }

        square(int a)
        {
            this->s=a;
        }

        void calarea()
        {
            this->area=this->s*this->s;
        }

        void display()
        {
            cout<<"Side of square :"<<this->s<<endl;
            cout<<"Area of Square is :"<<this->area<<endl;
        }
};

class circle : private shape
{
    private:
        int r;
        float area;

    public:
        circle()
        {
            this->r=2;
        }
        circle(int a)
        {
            this->r=a;
        }
        void calarea()
        {
            this->area=3.14*(this->r*this->r);
        }
        void display()
        {
            cout<<"Radius of circle is :"<<this->r<<endl;
            cout<<"Area Of circle is :"<<this->area<<endl;
        }
};
int main()
{
    shape s;
    rectangle r;
    circle c;
    square sq;
    cout<<"The Parameters of shape class :"<<endl;
    s.calarea();
    s.display();
    cout<<"----------------------------------------"<<endl;
    cout<<endl;
    cout<<"Parameter less constructor of rectangle class :"<<endl;
    r.calarea();
    r.display();
    cout<<"----------------------------------------"<<endl;
    cout<<endl;
    cout<<"Parameterized constructor of rectangle class :"<<endl;
    int a,b;
    cout<<"Enter the length and breadth of rectangle :"<<endl;
    cin>>a>>b;
    rectangle r1(a,b);
    r1.calarea();
    r1.display();
    cout<<"----------------------------------------"<<endl;

    cout<<endl;
    cout<<"Parameter less constructor of square class :"<<endl;
    sq.calarea();
    sq.display();
    cout<<"----------------------------------------"<<endl;
    cout<<endl;
    cout<<"Parameterized constructor of circle  class :"<<endl;
    square sq1(88);
    sq1.calarea();
    sq1.display();
}