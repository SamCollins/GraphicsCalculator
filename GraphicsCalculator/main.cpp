//#include <stdio.h>
#include <iostream>
#include "Test.h"

using namespace std;

int main()
{
	Test* testObject = new Test();

	std::cout << testObject->GetWords() + "\n";

	Test testObject2 = Test();

	cout << testObject2.GetWords();

	return 0;
}

