#pragma once
#include "MyVechile.h"
#include<string>
using namespace std;

class Bike:public MyVechile
{
public:
	Bike()
	{
		model = "";
	}
	Bike(string model)
	{
		this->model = model;
	}
	string model;
	void VehicleRunningMethod()
	{
		cout << "This vechile " << model << " which is a bike runs on two wheels\n";
	}
};