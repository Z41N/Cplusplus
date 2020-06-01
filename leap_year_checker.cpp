#include <iostream>

int main() {
  
  int year;
  std::cout << "Enter year to check for leap: ";
  std::cin >> year;

  if (year > 9999 || year < 1000) {
    std::cout << "INVALID. Enter 4-digit year.";
  }

  if (year%4 == 0 || year%400 == 0) {
    std::cout << year << " IS a leap year.";
  } else {
    std::cout << year << " IS NOT a leap year.";
  }
  
  
}
