/*
 * LeafElement.hh
 *
 *  Created on: 20 juni 2016
 *      Author: esziger
 */

#ifndef LEAF_HH_
#define LEAF_HH_

#include <string>
#include <iostream>

#include "IDrawingComponent.hh"

class Leaf : public IDrawingComponent
{
public:
  Leaf(std::string name) : IDrawingComponent(name){};
  void Add(IDrawingComponent* d)
  {
    std::cout<<"Cannot add to a PrimitiveElement"<<std::endl;
  }
  void Remove(IDrawingComponent* d)
  {
	  std::cout<<"Cannot remove from a PrimitiveElement"<<std::endl;
  }
  void Display(int indent)
  {
	  std::string newStr(indent, '-');
	  std::cout << newStr << " " << name <<std::endl;
  }
  virtual ~Leaf(){};
private:
  Leaf(); //not allowed
};


#endif /* LEAF_HH_ */
