#include <iostream>

using namespace std;

class Parent
{
  public:
    virtual void print() { cout << "Parent class\n"; }
};

class Child: public Parent
{
  public:
    void print() { cout << "Child class\n"; }
};

int main()
{
  Parent* base = new Parent;
  base->print();

  Child* derived = new Child;
  derived->print();

  Child c2;
  Parent* p2 = &c2;
  p2->print(); // Prints child class because points to address of Child

  return 0;
}