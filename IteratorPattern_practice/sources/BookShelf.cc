/*
 * BookShelf.cc
 *
 *  Created on: 2015/04/25
 *      Author: parallels
 */

#include <Book.h>
#include <BookShelf.h>
#include <BookShelfIterator.h>

BookShelf::BookShelf() {
}

BookShelf::~BookShelf() {
  for (Book* book : books_) {
    delete book;
  }
  books_.clear();
}

const Book& BookShelf::get_book_at(const int index) {
  std::list<Book*>::iterator it = books_.begin();
  for (int counter = 0; counter < index; counter++) {
    ++it;
  }
  return **it;
}

void BookShelf::append_book_N(Book* const p_book) {
  books_.push_back(p_book);
}

const int BookShelf::get_length() const {
  return books_.size();
}

std::shared_ptr<IIterator> BookShelf::iterator() {
  return std::shared_ptr < BookShelfIterator > (new BookShelfIterator(*this));
}
