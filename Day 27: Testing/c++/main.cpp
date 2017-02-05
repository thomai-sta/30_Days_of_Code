#include <iostream>

int main(int argc, char **argv)
{
  std::cout << "5" << std::endl;

  /// Output:
  ///  n k
  ///  a0, a1, a2 ... 2n-1
  /// YES, NO, YES, NO, YES


  // YES = cancelled
  std::cout << 30 << " " << 28 << std::endl;
  for (int i = 0; i < 28; i++)
  {
    std::cout << "1 ";
  }
  std::cout << "0 -1";
  std::cout << std::endl;

  // NO = not cancelled
  std::cout << 10 << " " << 5 << std::endl;
  for (int i = 0; i < 6; i++)
  {
    std::cout << "-1 ";
  }
  std::cout << "0 0 0 1";
  std::cout << std::endl;

  // YES = cancelled
  std::cout << 100 << " " << 60 << std::endl;
  for (int i = 0; i < 70; i++)
  {
    std::cout << "1 ";
  }
  for (int i = 0; i < 15; i++)
  {
    std::cout << "-1 ";
  }
  for (int i = 0; i < 15; i++)
  {
    std::cout << "0 ";
  }
  std::cout << std::endl;

  // NO = not cancelled
  std::cout << 80 << " " << 60 << std::endl;
  for (int i = 0; i < 45; i++)
  {
    std::cout << "0 ";
  }
  for (int i = 0; i < 10; i++)
  {
    std::cout << "1 ";
  }
  for (int i = 0; i < 25; i++)
  {
    std::cout << "-1 ";
  }
  std::cout << std::endl;

  // YES = cancelled
  std::cout << 110 << " " << 100 << std::endl;
  for (int i = 0; i < 101; i++)
  {
    std::cout << "1 ";
  }
  for (int i = 0; i < 4; i++)
  {
    std::cout << "0 ";
  }
  for (int i = 0; i < 5; i++)
  {
    std::cout << "-1 ";
  }
  std::cout << std::endl;

  return 0;
}