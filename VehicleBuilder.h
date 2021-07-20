#pragma once
#include "Vehicle.h"

class VehicleBuilder
{
	int vehicleNo;
	string color;
	string model;
	string gearType;
	int numberOfSeets;

public:
	// Builder Design Pattern
	void setVehicleNo(int vehicleNo)
	{
		this->vehicleNo = vehicleNo;
	}
	void setColor(string color)
	{
		this->color = color;
	}
	void setModel(string model)
	{
		this->model = model;
	}
	void setGearType(string gearType)
	{
		this->gearType = gearType;
	}
	void setNumberOfSeats(int numberOfSeets)
	{
		this->numberOfSeets = numberOfSeets;
	}

	// Fluent Builder Design Pattern
	VehicleBuilder& SetVehicleNo(int vehicleNo)
	{
		this->vehicleNo = vehicleNo;
		return *this;
	}
	VehicleBuilder& SetColor(string color)
	{
		this->color = color;
		return *this;
	}
	VehicleBuilder& SetModel(string model)
	{
		this->model = model;
		return *this;
	}
	VehicleBuilder& SetGearType(string gearType)
	{
		this->gearType = gearType;
		return *this;
	}
	VehicleBuilder& SetNumberOfSeats(int numberOfSeets)
	{
		this->numberOfSeets = numberOfSeets;
		return *this;
	}

	Vehicle build()
	{
		Vehicle *v1 = new Vehicle(this->vehicleNo, this->color, this->model, this->gearType, this->numberOfSeets);
		return *v1;
	}
};
