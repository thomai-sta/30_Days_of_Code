#include <iostream>


int main(int argv, char **argc)
{
  int ret_day, ret_mon, ret_year, day, mon, year;
  std::cin >> ret_day >> ret_mon >> ret_year;
  std::cin >> day >> mon >> year;

  if (ret_year > year)
  {
    /// Fixed fine of 10000
    std::cout << "10000" << std::endl;
  }
  else if (ret_year == year && ret_mon > mon)
  {
    /// 500 x (number of months late)
    std::cout << 500 * (ret_mon - mon) << std::endl;
  }
  else if (ret_year == year && ret_mon == mon && ret_day > day)
  {
    /// 15 x (number of days late)
    std::cout << 15 * (ret_day - day) << std::endl;
  }
  else
  {
    /// not late
    std::cout << "0" << std::endl;
  }

  return 0;
}