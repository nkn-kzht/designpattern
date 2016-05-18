/*
 * BookShelf.hpp
 *
 *  Created on: 2015/04/25
 *      Author: parallels
 */

#ifndef INCLUDES_BOOKSHELF_H_
#define INCLUDES_BOOKSHELF_H_

#include <memory>
#include <list>

#include <IAggregate.h>

class Book;

class BookShelf : public IAggregate {
 public:
  BookShelf();
  virtual ~BookShelf();
  const Book& get_book_at(const int index);
  void append_book_N(Book* const p_book);
  const int get_length() const;
  void clear();
  virtual std::shared_ptr<IIterator> iterator();
 private:
  std::list<Book*> books_;
};

#endif /* INCLUDES_BOOKSHELF_H_ */
