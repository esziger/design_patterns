//============================================================================
// Name        : Main.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <vector>

#include "IManuScript.hh"
#include "FAQ.hh"
#include "Book.hh"
#include "TermPaper.hh"

using namespace std;

int main()
{
	vector<IManuScript*> documents;

	std::vector<QandA> QandAVector;
	QandAVector.push_back(QandA("What is it?", "It is a design pattern"));
	QandAVector.push_back(QandA("When do we use it?",  "When you need to separate an abstraction from an implementation."));

	FAQ* faq = new FAQ("The Bridge Pattern FAQ", QandAVector);

	documents.push_back(faq);

    Book* book = new Book("Design Patterns: Elements of Reusable Object-Oriented Software",
    		             "GOF",
			             "This book contains a lot of useful patterns like Bridge Pattern");

    documents.push_back(book);

    TermPaper* paper = new TermPaper("Design Patterns",
    		        			     "John Doe",
									 "Some details about the Bridge Pattern",
									 "GOF");

    documents.push_back(paper);

    for(unsigned i = 0; i < documents.size(); i++)
    {
    	documents[i]->Print();
    }


	return 0;
}
