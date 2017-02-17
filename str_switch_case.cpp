#include <map>
#include <string>
#include <iostream>
using namespace std;
// Value-Defintions of the different String values
enum StringValue { evNotDefined=0, 
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

typedef std::map<std::string, StringValue> StringMap;

typedef StringMap::value_type StringMapValue;

/*static const StringMapValue stringMapEntries[] = {
  StringMapValue( "First Value", evStringValue1 ),
  StringMapValue( "Second Value", evStringValue2 ),
  StringMapValue( "Third Value", evStringValue3 ),
  StringMapValue( "end", evEnd ),
};*/


//static const StringMap s_mapStringValues( &stringMapEntries[evStringValue1], &stringMapEntries[evNumVals] );

int main(int argc, char* argv[])
{
  // Init the string map
  Initialize();
  //static StringMap s_mapStringValues( &stringMapEntries[evStringValue1], &stringMapEntries[evNumVals] );
  //string name;
  //std::cin szInput;
  // Loop until the user stops the program
  while(1)
  {
    // Get the user's input
    cout << "Please enter a string (end to terminate): ";
    cout.flush();
    cin.getline(szInput, _MAX_PATH);
    //cin.getline(szInput, name);
    // Switch on the value
    cout << "Entered string: " << szInput << endl;
    switch(s_mapStringValues[szInput])
    {
      case evStringValue1:
        cout << "Detected the first valid string." << endl;
        break;
      case evStringValue2:
        cout << "Detected the second valid string." << endl;
        break;
      case evStringValue3:
        cout << "Detected the third valid string." << endl;
        break;
      case evEnd:
        cout << "Detected program end command. " << "Programm will be stopped." << endl;
        return(0);
      default:
        cout << "'" << szInput << "' is an invalid string. s_mapStringValues now contains " << s_mapStringValues.size() << " entries." << endl;
        break;
    }
  }
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

// Ref: http://www.codeguru.com/cpp/cpp/cpp_mfc/article.php/c4067/Switch-on-Strings-in-C.htm
