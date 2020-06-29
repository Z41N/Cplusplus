#include <iostream>
#include <cmath>
#include <fstream>
using std::cout;
using std::cin;
using std::endl;

// int get_current_score() {
//     std::ifstream file;
//     file.open("high_score.txt");
//     int input;
//     int current_high_score;
//     while (file>>input) {
//         current_high_score = input;
//     }
//     return current_high_score;
// }



void play_game() {
    int answer;
    int guess;
    int guesses[3];
    int misses = 0;
    srand (time(NULL));
    answer = rand() % 11;
    cout<<"---GAME STARTED---\n";
    cout<<"Enter your guess (0 - 10): ";

    while (true && misses < 10 && guess != answer) {
        cin>>guess;
        if (guess == answer) {
            misses++;
            cout<<">YOU WIN!!! The answer was "<<answer<<"."<<endl;
        } else if (guess > answer) {
            misses++;
            cout<<"Too high!"<<" You have "<<(10-misses)<<" tries left.\n";
        } else if (guess < answer) {
            misses++;
            cout<<"Too low!"<<" You have "<<(10-misses)<<" tries left.\n";
        }
    }

    std::ifstream input;
    input.open("high_score.txt");
    int current_score;
    input >> current_score;
    
    std::ofstream output;
    output.open("high_score.txt");

    if (misses == 10) {
        cout<<"\n>YOU LOSE. The answer was "<<answer<<"."<<endl;
    }

    if (misses < current_score) {
        output << misses;
        if (misses == 1) {
            cout<<">BEST SCORE: "<<misses<<" try."<<endl;
        } else {
            cout<<">BEST SCORE: "<<misses<<" tries."<<endl;
        }
    } else {
        output << current_score;
        if (current_score == 1) {
            cout<<">BEST SCORE: "<<current_score<<" try."<<endl;
        } else {
            cout<<">BEST SCORE: "<<current_score<<" tries."<<endl;
        }
    }
    

}




