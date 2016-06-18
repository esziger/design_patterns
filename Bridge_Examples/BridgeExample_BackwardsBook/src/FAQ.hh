/*
 * FAQ.hh
 *
 *  Created on: 2016. jún. 17.
 *      Author: Gergely
 */

#ifndef FAQ_HH_
#define FAQ_HH_

#include <iostream>
#include <string>
#include <vector>

#include "IManuScript.hh"

class QandA
{
	public:
		std::string Question;
		std::string Answer;

		QandA(std::string pQuestion, std::string pAnswer)
		: Question(pQuestion), Answer(pAnswer)
		{}
};

class FAQ : public IManuScript
{
public:

	FAQ(IFormatter* formatter,
		std::string pTitle,
		std::vector<QandA> pQuestionsAndAnswers)
		:IManuScript(formatter),Title(pTitle), QuestionsAndAnswers(pQuestionsAndAnswers)
	{}

	const QandA& getQuestionsAndAnswers(int i) const
	{
		return QuestionsAndAnswers[i];
	}

	void setQuestionsAndAnswers(const QandA& questionsAndAnswers)
	{
		QuestionsAndAnswers.push_back(questionsAndAnswers);
	}

	const std::string& getTitle() const
	{
		return Title;
	}

	void setTitle(std::string title)
	{
		Title = title;
	}

	void Print()
	{
		std::cout<< formatter->Format("Title", Title)<<std::endl;

		for(unsigned i = 0; i < QuestionsAndAnswers.size(); i++)
		{
			std::cout<< formatter->Format("Question", QuestionsAndAnswers[i].Question)<<std::endl;
			std::cout<< formatter->Format("Answer", QuestionsAndAnswers[i].Answer)<<std::endl;
		}
		std::cout<<std::endl;
	}

private:
	std::string Title;
	std::vector<QandA> QuestionsAndAnswers;
};



#endif /* FAQ_HH_ */
