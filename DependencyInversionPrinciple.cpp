#pragma once
#include "MyVechileFactory.h"

void main()
{
	MyVechileFactory m;
	MyVechile *v = new Bike( "Unicorn");
	m.showRunningDetails(*v);
	delete v;
}