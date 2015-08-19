/*
 * BookShelfIterator.cc
 *
 *  Created on: 2015/04/25
 *      Author: parallels
 */

#include <BookShelfIterator.hpp>

#include <BookShelf.hpp>

BookShelfIterator::BookShelfIterator(BookShelf& book_shelf)
 : book_shelf_(book_shelf), index_(0) {
}

bool BookShelfIterator::has_next() const {
	bool has_next;
	if (index_ < book_shelf_.get_length()) {
		has_next = true;
	} else {
		has_next = false;
	}
	return has_next;
}

const IItem& BookShelfIterator::next() {
	const Book& book = book_shelf_.get_book_at(index_);
	index_++;
	return book;
}
