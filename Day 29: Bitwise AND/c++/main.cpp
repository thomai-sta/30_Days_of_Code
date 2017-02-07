#include <iostream>
#include <vector>

int main(int argc, char**argv)
{
  int T, N, K;
  std::cin >> T;
  std::vector<int> results;

  for (int i = 0; i < T; i++)
  {
    results.push_back(0);
    std::cin >> N >> K;
    for (int a = 1; a < N; a++)
    {
      for (int b = a + 1; b <= N; b++)
      {
        int A = a;
        int B = b;
        /// perform AND
        int res = A & B;
        if (res > results[i] && res < K)
        {
          results[i] = res;
        }
      }
    }

  }

  for (int i = 0; i < T; i++)
  {
    std::cout << results[i] << std::endl;
  }

  return 0;
}