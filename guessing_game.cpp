#include <iostream>
#include "garbage.hpp"
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;


int main() {

    int user_choice;

    do {
        cout<<"\n---GUESSING GAME: MAIN MENU---\n";
        cout<<"\n0. Quit"<<endl;
        cout<<"1. Play Game"<<endl;
        cout<<"2. Instructions"<<endl;
        cout<<"\nWhat would you like to do? Type the number and hit enter: ";
        cin>>user_choice;

        if (user_choice == 0) {
            cout<<"---GAME TERMINATED---\n";
            return 0;
        } else if (user_choice == 1) {
            play_game();
            continue;
        } else if (user_choice == 2) {
            cout<<"\n---INSTRUCTIONS---\n";
            cout<<"You have 3 tries to enter a number between 0 and 10 to guess what the computer outputted\n";
            cout<<"---END INSTRUCTIONS---\n";
        }
    } while(user_choice != 0);
  

}
