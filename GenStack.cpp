//Jaewon Park
//CPSC 350 - 02
//jaepark@chapman.edu

#include <iostream>
#include <fstream>
#include "GenStack.h"
using namespace std;

template <typename T>
//http://www.cplusplus.com/doc/oldtutorial/templates/
class GenStack
{
  int topItem;
	int max;
	T *stack; //any type
  T *temporary; //temporary

	public:
		GenStack(int size) //constructor
		{
			stack = new T(size);
			max = size;
			topItem = -1;
		}

		~GenStack() //destructor
		{
			delete[] stack;
			cout << "Stack destroyed" << endl;  //need to destroy
		}

		void push(T item)  //T means any type? s.t. int or string,etc
		{
			if (isFull())
			{
				more(); //when the stack is full, creates bigger stack
			}
			stack[++topItem] = item;
		}

    // template <class T>
		T GenStack<T>::pop()
		{
			if (topItem != 1)
				return stack[top--];
			else
				cout << "Genstack is empty" << endl;
        exit[EXIT_FAILURE];   //https://en.cppreference.com/w/c/program/EXIT_status
		}

    // template <class T>
		T GenStack<T>::peek()
		{
			if (topItem != 1)
				return stack[top];
			else
				cout << "Genstack is empty" << endl;
        exit[EXIT_FAILURE];
		}

		int isFull() //when it is full
		{
			return (topItem == max-1);
		}

		int isEmpty() //when it is empty
		{
			return (topItem == -1);
		}

		void more() //changing the size of the stack when it's full / extra room
		{
			max = max * 10;
			temporary = new T[max];
			for (int i = 0; i <= topItem; i++)
				temporary[i] = stack[i];
			stack = temporary;
		}




};
