//Jaewon Park
//CPSC 350 - 01
//jaepark@chapman.edu

#include <iostream>

using namespace std;

class GenStack
{
  public:
    GenStack(); //constructor
    GenStack(int size); //overloaded constructor
    ~GenStack(); //destructor


    void push(T item);
    T pop();
    T peek(); //AKA top()
    int isFull();
    int isEmpty();
    void more();


    int topItem;
  	int max;
  	T *stack; //any type
    T *temporary;

};
