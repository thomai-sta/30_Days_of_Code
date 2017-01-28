#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

class AdvancedArithmetic
{
public:
  virtual int divisorSum(int n) = 0;
};

class Calculator : public AdvancedArithmetic
{
public:
  int divisorSum(int n);
};

int Calculator::divisorSum(int n)
{
  int sum = 0;

  for (int i = 1; i <= n; i++)
  {
    if (n % i == 0)
    {
      sum += i;
    }
  }

  return sum;
}


int main()
{
  int n;
  std::cin >> n;
  AdvancedArithmetic *myCalculator = new Calculator();
  int sum = myCalculator->divisorSum(n);
  std::cout << "I implemented: AdvancedArithmetic\n" << sum << std::endl;
  return 0;
}