#include <iostream>
using namespace std;
#include "Vector3D.h"
#include "Esfera.h"
#include "ViewPlane.h"
#include "Rayo.h"
int main()
{
    // ESFERA
    Punto3D centro(0.0, 0.0, 0.0);
    double radio = 50;
    Esfera esfera(centro, radio);   
    // VIEWPLANE
    int hres = 400;
    int vres = 300;
    double s = 1.0;
    ViewPlane vp(hres, vres, s);

    for(int fil = 0; fil < vp.vres; fil++)
    {
        for ( int col = 0; col < vp.hres; col++) 
        {
            // Disparar un rayo
            Vector3D direccion(0.0, 0.0, -1.0);
            double x_o = vp.s * ( col - vp.hres/2 + 0.5 );
            double y_o = vp.s * ( fil - vp.vres/2 + 0.5 );
            double z_o = 100;
            Punto3D origen(x_o, y_o, z_o);
            Rayo rayo(origen, direccion);
            if (esfera.hayImpacto(rayo))
            {
                // PINTAR DE ROJO
            }
            else
            {
                // PINTAR DE NEGRO
            }
        }
    }    

    return 0;
}