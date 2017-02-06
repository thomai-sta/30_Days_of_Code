#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>

int main(int argc, char **argv){
  int N;
  std::cin >> N;
  std::string email = "@gmail.com";

  std::vector<std::string> names;

  bool correct = true;

  for(int a0 = 0; a0 < N; a0++)
  {
    correct = true;
    std::string firstName;
    std::string emailID;
    std::cin >> firstName >> emailID;
    std::string test = emailID.substr(emailID.size() - email.size(), email.size());
    for (size_t i = 0; i < email.size(); i++)
    {
      if (email[i] != test[i])
      {
        correct = false;
      }
    }
    if (correct)
    {
      names.push_back(firstName);
    }
  }

  std::sort (names.begin(), names.end());

  for (size_t i = 0; i < names.size(); i++)
  {
    std::cout << names[i] << std::endl;
  }
  return 0;
}