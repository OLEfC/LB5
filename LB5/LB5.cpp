
#include <iostream>
#include "Sphere.h"
#include "Pyramid.h"
#include "Parallelepiped.h"


using namespace std;

int main()
{
    Sphere sph(5);
    sph.vol();
    Parallelepiped par(13, 1, 2);
    par.vol();
    Pyramid pir(4, 22, 8);
    pir.vol();
  
    
}

