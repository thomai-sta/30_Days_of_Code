#include <iostream>
#include <cmath>


int main(int argc, char **argv)
{
  int T;
  std::cin >> T;

  for (int i = 0; i < T; i++)
  {
    int n;
    std::cin >> n;
    if (n == 1)
    {
      std::cout << "Not prime" << std::endl;
    }
    else if (n == 2)
    {
      std::cout << "Prime" << std::endl;
    }
    else
    {
      int divisor = 2;
      int upper_limit = std::sqrt(n) + 1;
      while(divisor < upper_limit)
      {
        if (n % divisor == 0)
        {
          std::cout << "Not prime" << std::endl;
          break;
        }
        divisor++;
      }
      if (divisor == upper_limit)
      {
        std::cout << "Prime" << std::endl;
      }
    }
  }


  return 0;
}