#include <iostream>
#include <Alimento.hpp>
#include <Mascota.hpp>
#include <Dibujo.hpp>
#include <Animacion.hpp>
#include <list>
using namespace std;

int main(int argc, char const *argv[])
{
Mascota firulais, mascota;
Alimento carne(10);

firulais.Comer(carne);

firulais.Jugar();
firulais.Jugar();
firulais.Jugar();

cout<<"Vida de firulais"
<<firulais.Leervida()
<<endl;

Dibujo dibujo("./assets/perro.txt");
Dibujo dibujo2("./assets/perro2.txt");


list<Dibujo> dibujos;
dibujos.push_back(dibujo);
dibujos.push_back(dibujo2);

Animacion animacion(dibujos);
animacion.Reproducir();
    
    return 0;
}
