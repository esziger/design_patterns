/*
 * Composite.hh
 *
 *  Created on: 20 juni 2016
 *      Author: esziger
 */

#ifndef COMPOSITE_HH_
#define COMPOSITE_HH_

#include <string>
#include <vector>
#include <iostream>

#include "IDrawingComponent.hh"


using namespace std;

class Composite : public IDrawingComponent
{
public:
  Composite(string name) : IDrawingComponent(name) {};
  void Add(IDrawingComponent* d)
  {
    elements.push_back(d);
  }

  void Remove(IDrawingComponent* d)
  {
    vector<IDrawingComponent*>::iterator it = elements.begin();
    while(it != elements.end())
    {
      if(*it == d)
      {
        delete d;
        elements.erase(it);
        break;
      }
      ++it;
    }
  }

  void Display(int indent)
  {
    string newStr(indent, '-');
    cout << newStr << "+ " << name <<endl;
    vector<IDrawingComponent*>::iterator it = elements.begin();
    while(it != elements.end())
    {
      (*it)->Display(indent + 2);
      ++it;
    }
  }

  virtual ~Composite()
  {
    while(!elements.empty())
    {
      vector<IDrawingComponent*>::iterator it = elements.begin();
      delete *it;
      elements.erase(it);
    }
  }

private:
  Composite(); //not allowed
  vector<IDrawingComponent*> elements;

};


#endif /* COMPOSITE_HH_ */
