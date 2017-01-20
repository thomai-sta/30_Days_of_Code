#include <iostream>

int main(int argc, char **argv)
{
  int n = 0;
  std::cin >> std::ws >> n;

  int ones = 0, consecutive = 0;

  while(n > 0)
  {
    if (n % 2)
    {
      ones++;
      if (ones > consecutive)
      {
        consecutive = ones;
      }
    }
    else
    {
      ones = 0;
    }
    n = n / 2;
  }

  std::cout << consecutive << std::endl;

  return 0;
}