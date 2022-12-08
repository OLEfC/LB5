#include "Pyramid.h"

Pyramid::Pyramid() {
	stoA = 1;
	stoB = 1;
	stoH = 1;

}
Pyramid::Pyramid(double a, double b, double h) {
	stoA = a;
	stoB = b;
	stoH = h;

}
double  Pyramid::vol() {
	piVolume = (stoA * stoB * stoH)/3;
	cout << "Pyramid volume\t" << piVolume << endl;
	return  piVolume;

}

