#include <iostream>
#include <math.h>

int main(int argc, char **argv)
{
  int num;

  std::cin >> std::ws >> num;

  if (num % 2)
  {
    std::cout << "Weird" << std::endl;
  }
  else if (num >= 2 && num <= 5)
  {
    std::cout << "Not Weird" << std::endl;
  }
  else if (num >= 6 && num <= 20)
  {
    std::cout << "Weird" << std::endl;
  }
  else
  {
    std::cout << "Not Weird" << std::endl;
  }

  return 0;
}