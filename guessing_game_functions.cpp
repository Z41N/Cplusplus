#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

void play_game() {
    int answer;
    int guess;
    int misses = 0;
    srand (time(NULL));
    answer = rand() % 11;
    cout<<"---GAME STARTED---\n";
    cout<<"Enter your guess: ";

    while (true && misses < 3) {
        cin>>guess;
        if (guess == answer) {
            cout<<"---YOU WIN!!!---\n";
            // exit(0);
        } else if (guess > answer) {
            misses++;
            cout<<"Too high!"<<" You have "<<(3-misses)<<" tries left.\n";
        } else if (guess < answer) {
            misses++;
            cout<<"Too low!"<<" You have "<<(3-misses)<<" tries left.\n";
        }
    }
    cout<<"---YOU LOSE: The number was "<<answer<<"---\n";
}
