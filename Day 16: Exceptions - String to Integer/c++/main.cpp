#include <iostream>
#include <string>
#include <stdexcept>


int main(int argc, char **argv)
{
  std::string S;
  std::cin >> S;

  int n;
  try
  {
    n = std::stoi(S);
    std::cout << n << std::endl;
  }
  catch (const std::invalid_argument& ia)
  {
    std::cout << "Bad String" << std::endl;
  }

  return 0;
}