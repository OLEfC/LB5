#pragma once
#include "Volume.h"
class Parallelepiped:Volume
{
private:
	double pVolume;
	double stoA;
	double stoB;
	double stoC;

public:
	Parallelepiped();
	Parallelepiped(double a, double b, double c);
	double vol();
};

