#include <iostream>
#include <math.h>

int main(int argc, char **argv)
{
  int tip_percent, tax_percent;
  double meal_cost;

  std::cin >> std::ws >> meal_cost;
  std::cin >> std::ws >> tip_percent;
  std::cin >> std::ws >> tax_percent;

  double total_cost = meal_cost;

  total_cost += (tip_percent * meal_cost / 100);
  total_cost += (tax_percent * meal_cost / 100);

  std::cout << "The total meal cost is " << (int) round(total_cost)
            << " dollars." << std::endl;

  return 0;
}