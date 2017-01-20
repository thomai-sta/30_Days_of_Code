#include <iostream>

int main(int argc, char **argv)
{
  int A[6][6];

  for (int i = 0; i < 6; i++)
  {
    for (int j = 0; j < 6; j++)
    {
      std::cin >> A[i][j];
    }
  }

  int sum = 0, max_sum = -100;

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      sum += A[i][j];
      sum += A[i][j + 1];
      sum += A[i][j + 2];
      sum += A[i + 1][j + 1];
      sum += A[i + 2][j];
      sum += A[i + 2][j + 1];
      sum += A[i + 2][j + 2];

      if (sum > max_sum)
      {
        max_sum = sum;
      }
      sum = 0;
    }
  }

  /// Print
  std::cout << max_sum << std::endl;

}