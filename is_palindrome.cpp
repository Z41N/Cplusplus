#include <iostream>

//Define boolean function (since true or false)
bool is_palindrome(std::string text) {
  std::string new_text;
  //Simply iterate from end of the string to front
  //Then add the text (which will add backwards) to new_text
  for (int i=text.size()-1;i<text.size(); i--) {
    new_text+=text[i];
  }
  //If the new_text is equal to original, then its a palindrome
  if (text == new_text) {
    return true;
  } else {
    return false;
  }
}


int main() {
  
  std::cout << is_palindrome("madam") << "\n"; //yes
  std::cout << is_palindrome("ada") << "\n"; //yes
  std::cout << is_palindrome("lovelace") << "\n"; //no
  
}
