#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>


class Book
{
  protected:
    std::string title;
    std::string author;
  public:
    Book(std::string t, std::string a)
    {
      title = t;
      author = a;
    }
    virtual void display()=0;
};


class MyBook: public Book
{
public:
  int price;
  MyBook(std::string title, std::string author, int price);
  void display();
};


MyBook::MyBook(std::string title, std::string author, int price) : Book(title,
                                                                        author)
{
  this->price = price;
}

void MyBook::display()
{
  std::cout << "Title: " << this->title << std::endl;
  std::cout << "Author: " << this->author << std::endl;
  std::cout << "Price: " << price << std::endl;
}


int main() {

  std::string title, author;
  int price;
  getline(std::cin, title);
  getline(std::cin, author);

  std::cin >> price;
  MyBook novel(title, author, price);
  novel.display();
  return 0;
}