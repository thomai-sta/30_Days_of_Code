#include <iostream>

int main(int argc, char **argv)
{

  int n;
  std::cin >> n;
  int *a = new int[n];

  for (int i = 0; i < n; i++)
  {
    std::cin >> a[i];
  }

  /// Implement bubble sort
  int total_swaps = 0, temp;
  bool swaps_occured = false;

  for (int i = 0; i < n; i++)
  {
    for (int j = n - 1; j > i; j--)
    {
      if (a[j] < a[j - 1])
      {
        /// SWAP
        total_swaps++;
        swaps_occured = true;
        temp = a[j];
        a[j] = a[j - 1];
        a[j - 1] = temp;
      }
    }
    if (!swaps_occured)
    {
      break;
    }
    swaps_occured = false;
  }

  std::cout << "Array is sorted in " << total_swaps << " swaps." << std::endl;
  std::cout << "First Element: " << a[0] << std::endl;
  std::cout << "Last Element: " << a[n - 1] << std::endl;

  return 0;
}