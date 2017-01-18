#include <iostream>

int factorial(int N)
{
  if (N == 0)
  {
    return 1;
  }
  else
  {
    return N * factorial(N - 1);
  }
}


int main(int argc, char **argv)
{
  int N;
  std::cin >> N;

  int result = factorial(N);

  std::cout << result << std::endl;
}