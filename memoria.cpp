#include <iostream>
using namespace std;

class Personaje
{
private:
    
public:
Personaje(){}
~Personaje() {}
void Hablar(){
    cout<<"Hola enanos"<<endl;
}
};

class Duende : public Personaje
{
private:
int salud;

public:
 Duende() {}
~ Duende() {}
};

class Enano : public Personaje
{
private:
     int vida;
     float altura;
     int edad;
public:
     Enano(){}
     ~Enano(){}
     void inicializar(){
        this->altura = 2;
        this->edad = 150;
        this->vida = 10;
     }
     void Comer(){
        this->vida +=1;
     }
};

int main(int argc, char const *argv[]){

    int a=5;
    bool b=true;
    float f=0.1;
    double d=0.1;
    char c='a';
    Enano e;

    cout<<endl;
    cout<<"Tamaño tipos de datos nativos:"<<endl;
    cout<<"Tamaño int: " <<sizeof(int)<<"bytes"<<endl;
    cout<<"Tamaño bool: " <<sizeof(bool)<<"bytes"<<endl;
    cout<<"Tamaño float: " <<sizeof(float)<<"bytes"<<endl;
    cout<<"Tamaño double: " <<sizeof(double)<<"bytes"<<endl;
    cout<<"Tamaño char: " <<sizeof(char)<<endl;
    cout<<"Tamaño Enano: " <<sizeof(Enano)<<"bytes"<<endl;

    cout<<endl;
    cout<<"Memoria Estaica en C:"<<endl;
    cout<<"Direccion de int:"<<&i<<endl;
    cout<<"Direccion de bool:"<<&b <<endl;
    cout<<"Direccion de float"<<&f<<endl;
    cout<<"Direccion de double:"<<&d<<endl;
    cout<<"Direccion de char:"<<static_cast<void*>(&c)<<endl;
    cout<<"Direccion de Enano:"<<&e<<endl;

    cout<<endl;
    cout<<"Memoria dinemica C"<<endl;
    cout<<"Direccion dinamica:"<<malloc(2)<<endl;
    cout<<"Direccion dinamica int"<<malloc(sizeof(int))<<endl;

    //Casteo de punteros en C
    Enano* direccion =(Enano*) malloc(sizeof(Enano));
    direccion->inicializar();

    //Punteros en C++
    Enano* instancia = new Enano();


    //Operador ->
    instancia->comer();
    instancia->Hablar();

    //Polimorfismo
    Personaje* p = new Duende();
    Personaje* q = new Enano();

    p->Hablar();
    q->Hablar();

    cout<<"Direccion de P:"<<p<<endl;

    //Arreglos
    Duende duendes(10);

    cout<<endl;
    cout<<&duendes[0]<<endl;
    cout<<&duendes[1]<<endl;
    cout<<&duendes[2]<<endl;
    cout<<&duendes[3]<<endl;
    cout<<&duendes[4]<<endl;

    //Conversion a direccion
    cout<<endl;
    cout<<duendes+0<<endl;
    cout<<duendes+1<<endl;
    cout<<duendes+2<<endl;
    cout<<duendes+3<<endl;
    cout<<duendes+4<<endl;




return 0;
}