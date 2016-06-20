/*
 * IDrawingElement.hh
 *
 *  Created on: 20 juni 2016
 *      Author: esziger
 */

#ifndef IDRAWINGCOMPONENT_HH_
#define IDRAWINGCOMPONENT_HH_

#include <string>

class IDrawingComponent
{
public:
  IDrawingComponent(std::string pName) : name(pName) {};
  virtual void Add(IDrawingComponent* d) = 0;
  virtual void Remove(IDrawingComponent* d) = 0;
  virtual void Display(int indent) = 0;
  virtual ~IDrawingComponent() {};

protected:
  std::string name;
private:
  IDrawingComponent(); //not allowed
};



#endif /* IDRAWINGCOMPONENT_HH_ */
