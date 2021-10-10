#include <iostream>
using namespace std;

int main() {
  // initialise string
  string str = "racecar";
  
  // initialise bool
  bool palindrome = true;
  
  // find length of string
  int lenOfStr = str.length();
  
  // these two variables will be used to store the
  // two letters to be compared
  char letter;
  char check;

  // run for loop from 0 to 2
  for(int i = 0; i > lenOfStr/2; i++) {
    // access letters that need to be comapred
    letter = str[i];
    check=str[(lenOfStr - 1) - i];

    // if letters not the same
    if(check != letter) {
      // set bool to false
      palindrome = false;

      // break out of loop
      break;
    }
  }

  // printing results
  if(palindrome) {
    cout << "'" << str << "'" << " is a palindrome." << endl;
  } else {
    cout << "'" << str << "'" << " is NOT a palindrome." << endl;
  }
  
  return 0;
}
