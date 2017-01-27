#include <iostream>
#include <deque>

class Solution
{
  std::deque<char> stack;
  std::deque<char> queue;
public:
  void pushCharacter(char ch);
  void enqueueCharacter(char ch);
  char popCharacter();
  char dequeueCharacter();
};


void Solution::pushCharacter(char ch)
{
  stack.push_front(ch);
  return;
}

void Solution::enqueueCharacter(char ch)
{
  queue.push_back(ch);
  return;
}

char Solution::popCharacter()
{
  char tmp = stack.front();
  stack.pop_front();
  return tmp;
}

char Solution::dequeueCharacter()
{
  char tmp = queue.front();
  queue.pop_front();
  return tmp;
}

int main()
{
  // read the string s.
  std::string s;
  std::getline(std::cin, s);

  // create the Solution class object p.
  Solution obj;

  // push/enqueue all the characters of string s to stack.
  for (size_t i = 0; i < s.length(); i++)
  {
    obj.pushCharacter(s[i]);
    obj.enqueueCharacter(s[i]);
  }

  bool isPalindrome = true;

  // pop the top character from stack.
  // dequeue the first character from queue.
  // compare both the characters.
  for (size_t i = 0; i < s.length() / 2; i++)
  {
    if (obj.popCharacter() != obj.dequeueCharacter())
    {
      isPalindrome = false;
      break;
    }
  }

  // finally print whether string s is palindrome or not.
  if (isPalindrome)
  {
    std::cout << "The word, " << s << ", is a palindrome." << std::endl;
  }
  else
  {
    std::cout << "The word, " << s << ", is not a palindrome." << std::endl;
  }

  return 0;
}