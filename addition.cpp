//A simple addition script
#include <iostream>
#include <cmath>

int main(){
  //Declaring variables
  int numb1 = 0;
  int numb2 = 0;
  int result = 0;

  //Input two numbers
  std::cin >> numb1;
  std::cin >> numb2;

  //Calculate result
  result = numb1 + numb2;

  //Sending result to terminal
  std::cout << result << '\n';
}
