/*
 * main.cc
 *
 *  Created on: 2015/04/25
 *      Author: parallels
 */

#include <Book.h>
#include <BookShelf.h>
#include <IIterator.h>
#include <iostream>

int main() {
  const int BOOK_SHELF_MAX_SIZE = 4;
  BookShelf book_shelf(BOOK_SHELF_MAX_SIZE);
  std::string title;
  title.clear();
  title = "AAA";
  book_shelf.append_book_N(new Book(title));
  title.clear();
  title = "BBB";
  book_shelf.append_book_N(new Book(title));
  title.clear();
  title = "CCC";
  book_shelf.append_book_N(new Book(title));
  title.clear();
  title = "DDD";
  book_shelf.append_book_N(new Book(title));

  std::shared_ptr<IIterator> it = book_shelf.iterator();
  while (it->has_next()) {
    const Book& book = static_cast<const Book&>(it->next());
    std::cout << book.get_name() << std::endl;
  }

  return 0;
}

