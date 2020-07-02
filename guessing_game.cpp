#include <iostream>
#include "guessing.hpp"
#include <string>
#include <vector>
#include <fstream>


// IN PROGRESS: 
// Adding saving feature by having user enter user_name.
// Would pull from file with their save data (score data, etc.). 
// Currently only provides username and rank, which is operational.
class User {
    std::string rank = "Bronze";
public:
    std::string user_name;
    std::string get_rank()
    {
        if (user_name == "Zain" || user_name == "Helen") {
            return "Diamond";
        } else {
            return rank;
        }
    }
};


int main() {

    User user;
    std::cout<<"\n>Enter your username: \n";
    std::cin>>user.user_name;
    // This takes the username they enter and forces uppercase of first character. 
    user.user_name[0] = toupper(user.user_name[0]);
    int user_choice;

    // System function to play MP3
    system("afplay intro_music.mp3 &>/dev/null &");

    // Found this cool set of special string characters that clears the console.
    std::cout << "\033[2J\033[1;1H";

    std::cout<<"--------------------------------------------------------------------------------";
    std::cout<<"\nWelcome to Guess-The-Number, "<<user.user_name<<"! Your current rank is: "<<user.get_rank()<<".\n";

    do {
        std::cout<<"\n---MAIN MENU--- \n";
        std::cout<<"\n0. Quit"<<std::endl;
        std::cout<<"1. Play Game"<<std::endl;
        std::cout<<"2. Instructions"<<std::endl;
        std::cout<<"3. Rank Information"<<std::endl;
        std::cout<<"\nWhat would you like to do? Type the option number and hit enter: ";
        std::cin>>user_choice;

        if (user_choice == 0) {
            std::cout<<"\n---GAME TERMINATED---\n\n";
            system("killall afplay");
            exit(-1);
        } else if (user_choice == 1) {
            std::cout << "\033[2J\033[1;1H";
            play_game();
            continue;
        } else if (user_choice == 2) {
            std::cout << "\033[2J\033[1;1H";
            std::cout<<"---INSTRUCTIONS---\n";
            std::cout<<">You have 10 tries to enter a number between 0 and 10 to guess what the computer outputted\n";
            std::cout<<"---END INSTRUCTIONS---\n";
        } else if (user_choice == 3) {
            std::cout << "\033[2J\033[1;1H";
            std::cout<<"---RANK INFORMATION---\n";
            std::cout<<">Each player begins at the lowest rank, Bronze. Ranks are broken-down as follows: \n";
            std::cout<<">Bronze = 9-10 tries\n";
            std::cout<<">Silver = 6-8 tries\n";
            std::cout<<">Gold = 2-5 tries\n";
            std::cout<<">Diamond = FIRST TRY!\n";
            std::cout<<">Your rank is recorded and carries with you each game.\n";
            std::cout<<">Promotions and demotions occur depending on how many tries you made vs. your current high score.\n";
            std::cout<<"---END RANK INFORMATION---\n";
        } else {
            std::cout<<"\n---INVALID SELECTION! Please select a valid option.\n";
        }
    } while(user_choice != 0);
  

}
