/*
 * BookShelfIterator.hpp
 *
 *  Created on: 2015/04/25
 *      Author: parallels
 */

#ifndef INCLUDES_BOOKSHELFITERATOR_HPP_
#define INCLUDES_BOOKSHELFITERATOR_HPP_

#include <Book.hpp>
#include <IItem.hpp>
#include <IIterator.hpp>

class BookShelf;

class BookShelfIterator : public IIterator {
public:
	BookShelfIterator(BookShelf& book_shelf);
	virtual ~BookShelfIterator() { }
	virtual bool has_next() const;
	virtual const IItem& next();
private:
	BookShelf& book_shelf_;
	int index_;
};



#endif /* INCLUDES_BOOKSHELFITERATOR_HPP_ */
