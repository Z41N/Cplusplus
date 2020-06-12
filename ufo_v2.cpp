#include <iostream>
#include <cstdlib>
#include <vector>
#include "ufo_functions.hpp"
using namespace std;

int main() {

    string phrase = "spicyonion";
    string dashes = "----------";
    int attempts_remaining = 8;
    char guess;
    int misses = 0;
    bool checker;


    greet();
    cout<<dashes<<"\n";

    while (misses < 7 && dashes != phrase) {
        display_misses(misses);
        cout<<"What is your guess?"<<" You have "<<attempts_remaining<<" tries left. Enter guess here: ";
        cin>>guess;
        

        for (int i=0; i<phrase.length(); i++) {
            if (guess == phrase[i]) {
                dashes[i] = guess;
                checker = true;
            }
        }
        cout<<dashes<<"\n";

        if (checker) {
            cout<<"Nice!\n";
        } else {
            cout<<"WRONG\n";
            misses++;
        }
        
        checker = false;
        attempts_remaining -= 1;
    }
    
    end_game(phrase, dashes);

    return 0;
}
