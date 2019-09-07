// This program calculates a person's height in feet (') and inches (").
#include <iostream>
#include <string>

int main()
{
  int inches_given;

  std::cout << "How tall are you in inches?"<< std::endl;// Ask how tall a person is in inches.

  std::cin >> inches_given;

  int inches_to_feet = inches_given / 12; // Find how many feet they are by dividing the inches given by twelve.

  int inches_leftover = inches_given % 12; // Find how many inches are left over.

  std::cout << "You are "<< inches_to_feet << "'" << inches_leftover << "\"." << std::endl; // Output the results.

  return 0;
}
