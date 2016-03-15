/*
 * BookShelfIterator.hpp
 *
 *  Created on: 2015/04/25
 *      Author: parallels
 */

#ifndef INCLUDES_BOOKSHELFITERATOR_H_
#define INCLUDES_BOOKSHELFITERATOR_H_

#include <Book.h>
#include <IItem.h>
#include <IIterator.h>

class BookShelf;

class BookShelfIterator: public IIterator {
public:
	explicit BookShelfIterator(BookShelf& book_shelf);
	virtual ~BookShelfIterator() {
	}
	virtual bool has_next() const;
	virtual const IItem& next();
private:
	BookShelf& book_shelf_;
	int index_;
};

#endif /* INCLUDES_BOOKSHELFITERATOR_H_ */
