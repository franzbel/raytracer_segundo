#include "Esfera.h"
Esfera::Esfera(Punto3D v_c, double v_r):c( v_c), r( v_r)
{ }
Esfera::~Esfera(){}
bool Esfera::hayImpacto(const Rayo& rayo) const
{
    Vector3D temp = rayo.o - c;
    double a = rayo.d * rayo.d;
    double b = 2 * rayo.d * ( rayo.o - c);
    double c = temp * temp  -  r * r ;
    double discriminante = b * b - 4.0 * a * c;
    if ( discriminante < 0.0 )
    {
        return false;
    } 
    else
    {
        return true;
    }
}