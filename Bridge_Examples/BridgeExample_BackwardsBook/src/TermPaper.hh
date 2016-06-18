/*
 * TermPaper.hh
 *
 *  Created on: 2016. jún. 17.
 *      Author: Gergely
 */

#ifndef TERMPAPER_HH_
#define TERMPAPER_HH_

#include <iostream>
#include <string>

#include "IManuScript.hh"

class TermPaper : public IManuScript
{
public:

	TermPaper(IFormatter* formatter,
			  std::string pClass,
			  std::string pStudent,
			  std::string pText,
			  std::string pReferences)
	:IManuScript(formatter),
	 Class(pClass),
	 Student(pStudent),
	 Text(pText),
	 References(pReferences)
	{}

	const std::string& getClass() const {
		return Class;
	}

	void setClass(const std::string& clazz) {
		Class = clazz;
	}

	const std::string& getReferences() const {
		return References;
	}

	void setReferences(const std::string& references) {
		References = references;
	}

	const std::string& getStudent() const {
		return Student;
	}

	void setStudent(const std::string& student) {
		Student = student;
	}

	const std::string& getText() const {
		return Text;
	}

	void setText(const std::string& text) {
		Text = text;
	}

	void Print()
	{
		std::cout<< formatter->Format("Class", Class)<<std::endl;
		std::cout<< formatter->Format("Student", Student)<<std::endl;
		std::cout<< formatter->Format("Text", Text)<<std::endl;
		std::cout<< formatter->Format("References", References)<<std::endl;
		std::cout<<std::endl;
	}


private:
	std::string Class;
	std::string Student;
	std::string Text;
	std::string References;

};



#endif /* TERMPAPER_HH_ */
