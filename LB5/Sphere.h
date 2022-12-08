#pragma once
#include "Volume.h"
class Sphere:Volume
{
private:
	double radius;
	double sVolume;
	const double PI = 3.14159265359;
public:
	Sphere(double r);
	Sphere();
	double vol();
	
};

