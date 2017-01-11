#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
  std::cout << "Hello, World." << std::endl;

  std::string input_string;
  std::getline(std::cin, input_string);

  std::cout << input_string << std::endl;

  return 0;
}
