#include<bits/stdc++.h>
using namespace std;

class Person{
  public://Pure Virtual function
   virtual void fun()=0;  //Compiler ko pata chalega ki yay do nothing function hai;
   void f1()
   {cout<<"Hello from f1()";}
};
class Student:public Person
{
    public:
     void fun(){
        cout<<"Helllo from fun";
     }
};

int main(){
    Student s1;
    s1.f1();
    s1.fun();
}