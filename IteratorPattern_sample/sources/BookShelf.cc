/*
 * BookShelf.cc
 *
 *  Created on: 2015/04/25
 *      Author: parallels
 */

#include <BookShelf.hpp>
#include <BookShelfIterator.hpp>

#include <Book.hpp>

BookShelf::BookShelf(const int maxsize)
: last_(0) {
	books_.assign(maxsize, 0);
}

BookShelf::~BookShelf() {
	for (Book* book : books_) {
		delete book;
	}
	books_.clear();
}

const Book& BookShelf::get_book_at(const int index) {
	return *(books_.at(index));
}

void BookShelf::append_book_N(Book* const p_book) {
	books_.at(last_) = p_book;
	last_++;
}

const int BookShelf::get_length() const {
	return last_;
}

std::shared_ptr<IIterator> BookShelf::iterator() {
	return std::shared_ptr<BookShelfIterator>(new BookShelfIterator(*this));
}
