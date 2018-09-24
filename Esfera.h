// #include "Punto3D.h"
#include "Rayo.h"
class Esfera
{
    public:
    Esfera(Punto3D, double);
    ~Esfera();
    bool hayImpacto(const Rayo& r) const;

    Punto3D c;
    double r;
};