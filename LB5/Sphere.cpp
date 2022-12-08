#include "Sphere.h"
Sphere::Sphere() {
	radius = 1;
};
Sphere::Sphere(double r) {
	radius = r;

};
double Sphere::vol() {

	sVolume =4/3*(PI*pow(radius,3));
	cout << "Sphere volume\t" << sVolume << endl;
	return  sVolume;
};

