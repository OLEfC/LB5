#pragma once
#include "Volume.h"
class Pyramid:Volume
{
private:
	double piVolume;
	double stoA;
	double stoB;
	double stoH;
public:
	Pyramid();
	Pyramid(double a, double b, double h);
	double vol();
};

