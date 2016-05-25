//============================================================================
// Name        : Adapter_plug.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//This is the target interface what our laptop can use.
class AbstractPlug
{
public:
	virtual ~AbstractPlug() = 0;
	virtual void PlugInWithTwoRoundPin() = 0;
};

AbstractPlug::~AbstractPlug(){}

/////////////////////////

class EUPlug : public AbstractPlug
{
public:
	~EUPlug(){};
	virtual void PlugInWithTwoRoundPin();
};

void EUPlug::PlugInWithTwoRoundPin()
{
	cout << "Object plugged-in with two round pin into EU plug.";
}

////////////////////////////

class BritishPlug
{
public:
	void PlugInWithThreeFlatPin();
};

void BritishPlug::PlugInWithThreeFlatPin()
{
	cout << "Object plugged-in with three flat pin into the British plug.";
}

/////////////////////////////

//Object Adapter
class EUtoBritishAdapter : public AbstractPlug
{
private:
	BritishPlug* britishPlug;

public:
	EUtoBritishAdapter(BritishPlug * switchBoard);
	~EUtoBritishAdapter(){}
	virtual void PlugInWithTwoRoundPin();
};

EUtoBritishAdapter::EUtoBritishAdapter(BritishPlug * pPlug)
{
	britishPlug = pPlug;
}

void EUtoBritishAdapter::PlugInWithTwoRoundPin()
{
	britishPlug->PlugInWithThreeFlatPin();
}


int main() {

	BritishPlug* britishPlug = new BritishPlug();
	AbstractPlug* laptopPlug = new EUtoBritishAdapter(britishPlug);
	laptopPlug->PlugInWithTwoRoundPin();

	return 0;
}
