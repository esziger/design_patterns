/*
 * BackwardsBook.hh
 *
 *  Created on: 2016. jún. 17.
 *      Author: Gergely
 */

#ifndef SRC_BACKWARDSBOOK_HH_
#define SRC_BACKWARDSBOOK_HH_

#include "Book.hh"
#include <algorithm>


class BackwardsBook : public Book
{
public:
	BackwardsBook(std::string pTitle, std::string pAuthor, std::string pText)
		:Book(pTitle, pAuthor, pText)
	{}

	void Print()
	{
		std::string reversedTitle = Title;
		std::reverse(reversedTitle.begin(), reversedTitle.end());
		std::cout<< "Title: "<< reversedTitle <<std::endl;

		std::string reversedAuthor = Author;
		std::reverse(reversedAuthor.begin(), reversedAuthor.end());
		std::cout<< "Author: "<< reversedAuthor <<std::endl;

		std::string reversedText = Text;
		std::reverse(reversedText.begin(), reversedText.end());
		std::cout<< "Text: "<< reversedText <<std::endl;
		std::cout<<std::endl;
	}
};



#endif /* SRC_BACKWARDSBOOK_HH_ */
