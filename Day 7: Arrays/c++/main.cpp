#include <iostream>

int main(int argc, char **argv)
{
  int N;
  std::cin >> std::ws >> N;
  int *A = new int[N];
  for (int i = 0; i < N; i++)
  {
    std::cin >> A[i];
  }

  for (int i = N - 1; i >= 0; i--)
  {
    std::cout << A[i] << " ";
  }
  std::cout << std::endl;
}