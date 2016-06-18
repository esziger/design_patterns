/*
 * Book.hh
 *
 *  Created on: 2016. jún. 17.
 *      Author: Gergely
 */

#ifndef BOOK_HH_
#define BOOK_HH_

#include <iostream>
#include <string>

#include "IManuScript.hh"

class Book : public IManuScript
{

public:

	Book(std::string pTitle, std::string pAuthor, std::string pText)
		:Title(pTitle), Author(pAuthor), Text(pText)
	{}


	const std::string& getAuthor() const {
		return Author;
	}

	void setAuthor(const std::string& author) {
		Author = author;
	}

	const std::string& getText() const {
		return Text;
	}

	void setText(const std::string& text) {
		Text = text;
	}

	const std::string& getTitle() const {
		return Title;
	}

	void setTitle(const std::string& title) {
		Title = title;
	}

	void Print()
	{
		std::cout<< "Title: "<< Title <<std::endl;
		std::cout<< "Author: "<< Author <<std::endl;
		std::cout<< "Text: "<< Text <<std::endl;
		std::cout<<std::endl;
	}

private:
	std::string Title;
	std::string Author;
	std::string Text;
};



#endif /* BOOK_HH_ */
