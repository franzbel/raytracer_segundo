// #include "Punto3D.h"
#include "Rayo.h"
#include "ColorRGB.h"
class Esfera
{
    public:
    Esfera(Punto3D, double);
    ~Esfera();
    bool hayImpacto(const Rayo& r) const;
    ColorRGB obtenerColor();

    Punto3D c;
    double r;
    ColorRGB color;
};