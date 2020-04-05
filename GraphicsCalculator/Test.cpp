#include <string>

#include "Test.h"

using namespace std;


//string words;

Test::Test()
	:words("Init")
{
}

/*~Test()
{

}*/

void Test::SetWords()
{
	words = "Sea Plus Plus";
}

string Test::GetWords()
{
	return words;
}
