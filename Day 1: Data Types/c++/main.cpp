#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

int main(int argc, char **argv)
{
  int i = 4;
  double d = 4.0;
  std::string s = "HackerRank ";

  int num;
  double num_double;
  std::string str;

  std::cin >> std::ws >> num >> std::ws;
  std::cin >> std::ws >> num_double >> std::ws;
  std::getline(std::cin, str);

  std::cout << i + num << std::endl;
  std::cout << std::fixed;
  std::cout << std::setprecision(1) << d + num_double << std::endl;
  std::cout << s << str << std::endl;


  return 0;
}