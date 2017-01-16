#include <iostream>
#include <string>

int main(int argc, char **argv)
{
  int T;
  std::string str;
  std::cin >> std::ws >> T;

  for (int i = 0; i < T; i++)
  {
    std::string even, odd;
    std::cin >> std::ws >> str;
    for (size_t s = 0; s < str.length(); s++)
    {
      if (s % 2)
      {
        /// Odd
        odd.push_back(str[s]);
      }
      else
      {
        /// Even
        even.push_back(str[s]);
      }
    }
    std::cout << even << " " << odd << std::endl;
  }

  return 0;
}