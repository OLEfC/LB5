#include "Parallelepiped.h"
Parallelepiped::Parallelepiped() {
	stoA=1;
	stoB=1; 
	stoC=1;

}
Parallelepiped::Parallelepiped(double a, double b, double c) {
	stoA = a;
	stoB = b;
	stoC = c;

}
double  Parallelepiped::vol() {
	pVolume = stoA*stoB*stoC;
	cout <<"Parallelepiped volume\t" << pVolume << endl;
	return  pVolume;

}

