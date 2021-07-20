#pragma once
#include "MyVechile.h"
#include<string>
using namespace std;

class Car :public MyVechile
{
public:
	string model;
	Car()
	{
		model = "";
	}
	Car(string model)
	{
		this->model = model;
	}
	void VehicleRunningMethod()
	{
		cout << "This vechile " << model << " which is a car runs on 4 wheels\n";
	}
};