// Create a class Book with data members as bname,id,author,price. Write getters and setters for all the 
// data members. Also add the display function. Create Default and Parameterized constructors. Create 
// the object of this class in main method and invoke all the methods in that class. 
#include<iostream>
#include<string>
using namespace std;
class book 
{
    protected:
    string bname;
    int id;
    string author;
    int price;
    public:
    book()
    {
        this->bname="Not specified";
        this->id=000;
        this->author="Not Specified";
        this->price=00;
    }
    book(string name,int i,string a,int p)
    {
        this->bname=name;
        this->id=i;
        this->author=a;
        this->price=p;
    }

        

};