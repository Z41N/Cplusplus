#include <iostream>
#include <cmath>
#include <fstream>


void play_game() {
    int answer;
    int guess;
    int misses = 0;
    srand (time(NULL));
    answer = rand() % 11;
    std::cout<<"---GAME STARTED---\n";
    std::cout<<"Enter your guess (0 - 10): ";
    // While loop to continue going as long as conditions are not met
    // (10 - misses) used because we want to get the remainder # of tries
    while (true && misses < 10 && guess != answer) {
        std::cin>>guess;
        if (guess == answer) {
            misses++;
            std::cout<<">YOU WIN!!! The answer was "<<answer<<"."<<std::endl;
        } else if (guess > answer) {
            misses++;
            std::cout<<"Too high!"<<" You have "<<(10-misses)<<" tries left.\n";
        } else if (guess < answer) {
            misses++;
            std::cout<<"Too low!"<<" You have "<<(10-misses)<<" tries left.\n";
        }
    }

    std::ifstream input;
    input.open("high_score.txt");
    int current_score;
    input >> current_score;

    if (misses < current_score) {
        std::cout<<"Nice, you did better";
        std::ofstream output;
        output.open("high_score.txt");
        output << misses;

    } else {
        std::cout<<"Your score is unchanged";
    }

    // Rank system START: IN PROGRESS
    std::ofstream ranks;
    ranks.open("ranks.txt");
    if (misses <= 1) {
        std::cout<<">You've been promoted to Diamond!!!\n";
        ranks<<"Diamond";
    } else if (misses >= 2 && misses <= 5) {
        std::cout<<">Your rank has been changed to Gold!\n";
        ranks<<"Gold";
    } else if (misses >= 6 && misses <= 8) {
        std::cout<<">Your rank has been changed to Silver!\n";
        ranks<<"Silver";
    } else if (misses >= 9 || misses == 10) {
        std::cout<<">Your rank has been changed to Bronze.\n";
        ranks<<"Bronze";
    }
}




