//============================================================================
// Name        : Composite_Drawing_example.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Leaf.hh"
#include "Composite.hh"

using namespace std;

int main() {

	//Create a Tree Structure
	Composite* root = new Composite("Picture");
	root->Add(new Leaf("Red Line"));
	root->Add(new Leaf("Blue Circle"));
	root->Add(new Leaf("Green Box"));

	//Create a Branch
	Composite* comp = new Composite("Two Circles");
	comp->Add(new Leaf("Black Circle"));
	comp->Add(new Leaf("Purple Circle"));
	root->Add(comp);

	//Add and remove a primitive elements
	Leaf* pe1 = new Leaf("Yellow Line");
	root->Add(pe1);
	Leaf* pe2 = new Leaf("Orange Triangle");
	root->Add(pe2);
	root->Remove(pe1);

	//Recursively display nodes
	root->Display(1);

	//delete the allocated memory
	delete root;

	return 0;
}
