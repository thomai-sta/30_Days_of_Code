#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
#include <cstdio>


class myexception: public std::exception
{
  virtual const char* what() const throw()
  {
    return "n and p should be non-negative";
  }
} myex;

class Calculator
{
public:
  int power(int n, int p)
  {
    if (n < 0 || p < 0)
    {
      throw myex;
    }
    return pow(n, p);
  };
};


int main()
{
  Calculator myCalculator = Calculator();
  int T, n, p;
  std::cin >> T;
  while(T-- > 0)
  {
    if(scanf("%d %d", &n, &p) == 2)
    {
      try
      {
        int ans = myCalculator.power(n, p);
        std::cout << ans << std::endl;
      }
      catch(std::exception& e)
      {
        std::cout << e.what() << std::endl;
      }
    }
  }

}