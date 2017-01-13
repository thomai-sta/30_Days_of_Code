#include <iostream>

class Person
{
public:
  int age = 0;

  Person(int initial_age);
  void year_passes();
  void am_i_old();
};


Person::Person(int initial_age)
{
  if (initial_age > 0)
  {
    age = initial_age;
  }
  else
  {
    std::cout << "Age is not valid, setting age to 0." << std::endl;
  }
}

void Person::year_passes()
{
  age++;
}

void Person::am_i_old()
{
  if (age < 13)
  {
    std::cout << "You are young." << std::endl;
  }
  else if (age >= 13 && age < 18)
  {
    std::cout << "You are a teenager." << std::endl;
  }
  else
  {
    std::cout << "You are old." << std::endl;
  }
}

int main(int argc, char **argv)
{
  int n, age;
  std::cin >> std::ws >> n;
  for (int i = 0; i < n; i++)
  {
    std::cin >> std::ws >> age;
    Person p(age);
    p.am_i_old();
    for (int j = 0; j < 3; j++)
    {
      p.year_passes();
    }
    p.am_i_old();
    std::cout << "\n";
  }
  return 0;
}