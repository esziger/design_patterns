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

class BritishWallOutlet
{
public:
	void PlugInWithThreeFlatPin();
};

void BritishWallOutlet::PlugInWithThreeFlatPin()
{
	cout << "Object plugged-in with three flat pin into the British plug.";
}

/////////////////////////////

//Object Adapter
class EUtoBritishAdapter : public AbstractPlug
{
private:
	BritishWallOutlet* britishWallOutlet;

public:
	EUtoBritishAdapter(BritishWallOutlet * switchBoard);
	~EUtoBritishAdapter(){}
	virtual void PlugInWithTwoRoundPin();
};

EUtoBritishAdapter::EUtoBritishAdapter(BritishWallOutlet * pWallOutlet)
{
	britishWallOutlet = pWallOutlet;
}

void EUtoBritishAdapter::PlugInWithTwoRoundPin()
{
	britishWallOutlet->PlugInWithThreeFlatPin();
}


int main() {

	BritishWallOutlet* britishWallOutlet = new BritishWallOutlet();
	AbstractPlug* laptopPlug = new EUtoBritishAdapter(britishWallOutlet);
	laptopPlug->PlugInWithTwoRoundPin();

	return 0;
}
