#include <iostream>
#include <vector>
#include <string>

int main() {
  //Original string
  std::string sentence = "turpentine and turtles\n";
  //Vowels vector
  std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
  //Output vector
  std::vector<char> result;

  //First for loop scanning sentence
  for (int i = 0; i < sentence.size(); i++) {
    //If checks for vowel for double
    if (sentence[i]=='e' || sentence[i]=='u'){
      result.push_back(sentence[i]);
    }
    //Second for loop checking if vowel
    for (int j = 0; j < vowels.size(); j++) {
      if (sentence[i] == vowels[j]) {
        result.push_back(sentence[i]);
      }
    }
  }
  //Output the final result
  //Not sure why we can't just print out vector
  //Perhaps because C++ logic? vs. Python?
  for (int k = 0; k < result.size(); k++) {
    std::cout<<result[k];
  }

}
