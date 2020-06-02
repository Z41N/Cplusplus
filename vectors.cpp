#include <iostream>
#include <vector>

int main() {
  std::vector<int> arr = {2, 4, 3, 6, 1, 9};

  int even_sum = 0;
  int odd_product = 1;

  for (int i=0; i < arr.size(); i++) {
    if (arr[i] % 2 == 0) {
      even_sum += arr[i];
    } else if (arr[i] % 2 != 0) {
      odd_product *= arr[i];
    }
    
  }

std::cout<<"Even sum = "<<even_sum<<"\n";
std::cout<<"Odd product = "<<odd_product<<"\n";



}
