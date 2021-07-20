#pragma once
#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
	int vehicleNo;
	string color;
	string model;
	string gearType;
	int numberOfSeets;

public:
	Vehicle()
	{
		vehicleNo, numberOfSeets = 0;
		color = model = gearType = "";
	}
	Vehicle(int vehicleNo, string color, string model, string gearType, int numberOfSeets)
	{
		this->vehicleNo = vehicleNo;
		this->color = color;
		this->model = model;
		this->gearType = gearType;
		this->numberOfSeets = numberOfSeets;
	}
	void showDetails()
	{
		cout << "I have " << model << " whose color is " << color << " which is a " << gearType << " having " << numberOfSeets << " no of seats and the car number is " << vehicleNo << "\n";
	}
};
