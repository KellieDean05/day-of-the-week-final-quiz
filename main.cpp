#include <cstdlib>  // Provides EXIT_SUCCESS
#include "Input_Validation_Extended.h" // Provides getValidatedInput<T>(), a header File with a Template Class
                              // Extended 2-11-2016 by Dr. McMillan to add validation methods by datatype
#include<string> //for string manipulation
#include<sstream> //for string manipulation and comparison
#include <locale> // this is to use toupper() transform char
#include <cmath>
#include <iomanip>
#include<iostream>
using namespace std;

void welcomeMessage (); // function prototype
void dayOFTheWeek(int); // function prototype


int main()
{ 

int dayMain = 0; // day input from the user
double numMain = 0.0;
 cout << fixed << setprecision(4) << endl;
 char exit ='\0'; // null char initialization
 
 do
 { //begin do
  cout << "\nPlease enter the day of the week (1-7) (E or e to exit): " << endl;
  dayMain= validateInt(dayMain);
  dayOFTheWeek(dayMain); // call: pass as argument the value from the user 
    exit= validateChar(exit); // ask the user to loop the program E to exit (get data)
    } while (exit != 'e' && exit != 'E'); // DeMorgan's law //end do-while
    return 0;
}

void dayOFTheWeek(int day)
{
  if (day == 1)
  {
    cout << "\x1b[44;1mIt's Sunday\x1b[0m\n" << endl; // bold 1
  }
  else if (day == 2)
  {
    cout << "\x1b[33;1mMonday\x1b[0m\n"; // Bold 2
  }
  else if (day == 3)
  {
    cout << "\x1b[32;1mTuesday\x1b[0m\n"; // Bold 6
  }
  else if (day == 4)
  {
    cout << "\x1b[45;1mWednesday\x1b[0m\n" << endl; // bold 3
  }
  else if (day == 5)
  {
    cout << "\x1b[36;1mThursday\x1b[0m\n"; // Bold 4
  }
  else if (day == 6)
  {
    cout << "\x1b[32;1mFriday\x1b[0m\n" << endl; // bold 5
  }
  else if (day == 7)
  {
    cout << "\x1b[32;2mSaturday\x1b[0m\n"; // Bold 6
  }
  else // default clause
  {
    cout << "\nError: Something went wrong." << endl;
  }
}
