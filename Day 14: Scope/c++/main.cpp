#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

class Difference
{
private:
  std::vector<int> elements;

public:
  int maximumDifference;
  Difference(std::vector<int> elements);
  void computeDifference();

};

Difference::Difference(std::vector<int> elements)
{
  this->elements = elements;
}

void Difference::computeDifference()
{
  maximumDifference = 0;
  for (size_t i = 0; i < elements.size() - 1; i++)
  {
    for (size_t j = i + 1; j < elements.size(); j++)
    {
      if (abs(elements[i] - elements[j]) > maximumDifference)
      {
        maximumDifference = abs(elements[i] - elements[j]);
      }
    }
  }
}


int main(int arc, char **argv)
{
  int N;
  std::cin >> N;

  std::vector<int> a;

  for (int i = 0; i < N; i++)
  {
    int e;
    std::cin >> e;

    a.push_back(e);
  }

  Difference d(a);

  d.computeDifference();

  std::cout << d.maximumDifference;

  return 0;
}