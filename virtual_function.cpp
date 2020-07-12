#include<iostream>
using namespace std;

class Base{
  public:
    virtual void show(){                      
      cout<<"This is the base class."<<endl;
    }                                         
};

//virtual keyword directs the pointer to point to the method in the derived class. 
//If the keyword is removed, it will run the show() method of the Base class.

class Derived: public Base{
  public:
    void show(){
      cout<<"This is the derived class."<<endl;
    }
};

int main(){
  Base *bPointer = new Derived;
  bPointer->show();
  
  return 0;
}
