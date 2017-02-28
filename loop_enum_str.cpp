#include <map>
#include <string>
#include <iostream>
using namespace std;
// Value-Defintions of the different String values
enum StringValue { evNotDefined, 
                     evStringValue1, 
                     evStringValue2, 
                     evStringValue3, 
                     evEnd,
                     evNumVals };
// Map to associate the strings with the enum values
static std::map<std::string, StringValue> s_mapStringValues;
#define _MAX_PATH 256
// User input
static char szInput[_MAX_PATH];
// Intialization
static void Initialize();

int main(int argc, char* argv[])
{
  // Init the string map
  Initialize();

  // cout << evStringValue1 << endl;
  for (StringValue m=evNotDefined; m<=evNumVals; m=StringValue(m+1))
	  cout << m << endl;
  return 0;
}

void Initialize()
{
  s_mapStringValues["First Value"] = evStringValue1;
  s_mapStringValues["Second Value"] = evStringValue2;
  s_mapStringValues["Third Value"] = evStringValue3;
  s_mapStringValues["end"] = evEnd;
  cout << "s_mapStringValues contains " << s_mapStringValues.size() << " entries." << endl;
}

