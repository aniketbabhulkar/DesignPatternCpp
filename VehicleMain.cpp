#include "VehicleBuilder.h"

void main()
{
	VehicleBuilder v;

	// Builder Design Pattern
	/*
	v.setColor("red");
	v.setGearType("autogear");
	v.setNumberOfSeats(5);
	v.setModel("Suzuki Swift");
	v.setVehicleNo(1234);
	Vehicle &v1 = v.build();
	v1.showDetails();
	*/

	// Fluent Builder Design Pattern
	Vehicle &v1 = v.SetColor("red").SetGearType("autogear").SetNumberOfSeats(5).SetVehicleNo(1234).SetModel("Suzuki Swift").build();
	v1.showDetails();
}