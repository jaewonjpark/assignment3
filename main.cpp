//Jaewon Park
//CPSC 350 - 01
//jaepark@chapman.edu

#include <iostream>
#include <fstream>
#include "GenStack.cpp"
#include "GenStack.h"
using namespace std;



int main(int argc, char** argv)
{
  int lineNum = 0;
  string currentLine = "";

	string file = argv[1]; //https://stackoverflow.com/questions/548509/opening-a-file-through-argv1-c


		char *charStack = new GenStack<char>(10));
		GenStack<int> *countStack(new GenStack<int>(10));

		ifstream inFile;
		inFile.open(file); //opening the file

		if (inFile.is_open())
		{

			while (getline(inFile, currentLine)) //when the file is opened and reading lines
			{
				lineNum++;
				for (int i = 0; i<currentLine.length(); i++)
				{
					if ((currentLine[i] == '('))
					{
						charStack->push(currLine[i]); //adding by using push()
						countStack->push(lineNum); //same thing but adding the lineNum
					}
          if ((currentLine[i] == '{'))
					{
						charStack->push(currLine[i]);
						countStack->push(lineNum);
					}
          if ((currentLine[i] == '['))
					{
						charStack->push(currLine[i]);
						countStack->push(lineNum);
					}
					if ((currentLine[i] == ')') && (charStack->peek() == '('))
					{
						charStack->pop();
						countStack->pop();
					}
					if ((currentLine[i] == '}') && (charStack->peek() == '{'))
					{
						charStack->pop();
						countStack->pop();
					}
					if ((currentLine[i] == ']') && (countStack->peek() == '['))
					{
						charStack->pop();
						countStack->pop();
					}
				}
			}


			if ((charStack->isEmpty() == 1) && (countStack->isEmpty() == 1))
			{
				cout << "No errors" << endl;
			}
			else
			{
				cout << "Delimiter error of " << charStack->pop() << " at " << countStack->pop() << endl;
			}
			inFile.close();

	}
	return 0;
}
