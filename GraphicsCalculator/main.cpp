//#include <stdio.h>
#include <iostream>
#include "Test.h"

using namespace std;

int main()
{
	Test* testObject = new Test();

	cout << testObject->GetWords() + "\n";

	testObject->SetWords();

	cout << testObject->GetWords();

	return 0;
}

