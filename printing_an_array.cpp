#include <iostream>
#include "garbage.hpp"
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;


int main() {

    int array[10];
    int size = sizeof(array) / sizeof(int);

    for (int i = 0; i < size; i++) {
        cin>>array[i];
    }  

    print_array(array, size);
}


//NOW FOR THE FUNCTION FILE
#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

void print_array(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout<<array[i]<<"\t";
    }
}


//NOW FOR THE HEADER
void print_array(int array[], int size);
