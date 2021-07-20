#pragma once
#include "Bike.h"
#include "Car.h"

class MyVechileFactory
{
public:
	void showRunningDetails(MyVechile &myvechile)
	{
		myvechile.VehicleRunningMethod();
	}
};