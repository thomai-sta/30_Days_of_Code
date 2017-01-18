#include <iostream>
#include <map>

int main(int argc, char **argv)
{
  int n, number;
  std::cin >> std::ws >> n;
  std::map<std::string, int> phone_book;
  std::string name;

  for (int i = 0; i < n; i++)
  {
    std::cin >> name >> number;
    phone_book[name] = number;
  }

  while(std::cin >> name)
  {
    if (phone_book.count(name))
    {
      std::cout << name << "=" << phone_book[name] << std::endl;
    }
    else
    {
      std::cout << "Not found" << std::endl;
    }
  }

  return 0;
}