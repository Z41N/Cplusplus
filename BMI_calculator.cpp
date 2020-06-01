#include <iostream>

int main() {
  
  // Declaring float variables
  double height, weight, bmi;
  
 
  //Ask user for their height and assign it
  std::cout << "Type in your height (m): ";
  std::cin >> height;
  
  //Ask user for their weight and assign it
  std::cout << "Type your weight (kg): ";
  std::cin >> weight;

  //Calculate BMI and assign
  bmi = weight / (height * height);

  //Output BMI
  std::cout << "Your BMI is: " << bmi;
  
  return 0;

}
