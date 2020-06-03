#include <iostream>
#include "ufo_functions.hpp"

int main() {
  //Greet players with lame text
  greet();

  //Declare varz
  std::string codeword = "blacklivesmatter";
  std::string answer = "________________";
  int misses = 0;
  std::vector<char> incorrect;
  bool guess = false;
  char letter;

  //The actual game system
  while (misses < 7 && answer != codeword) {
    display_misses(misses);

    std::cout<<"\nIncorrect guesses:\n";
    for (int i=0; i<incorrect.size();i++) {
      std::cout<<incorrect[i]<<' ';
    }

    std::cout<<"\nCodeword:\n";
    for (int i=0; i<answer.length();i++) {
      std::cout<<answer[i]<<' ';
    }

    std::cout<<"\nEnter your guess:\n";
    std::cin>>letter;

    for (int i=0; i<codeword.length();i++) {
      if (codeword[i] == letter) {
        answer[i] = letter;
        guess = true;
      }
    }

    if (guess) {
      std::cout<<"\nCorrect!\n";
    } else {
      std::cout<<"\nWRONG!\n";
      incorrect.push_back(letter);
      misses++;
    }
    guess = false;
  }

  //Check for win/loss
  end_game(answer, codeword);


}
