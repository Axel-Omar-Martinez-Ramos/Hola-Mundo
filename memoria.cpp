#include <iostream>
using namespace std;

class Personaje
{
private:
    
public:
Personaje(){}
~Personaje() {}
};

class Duende
{
private:
int salud;

public:
 Duende() {}
~ Duende() {}
};

class Enano : public Personaje{


};
class Enano
{
private:
    float altura;
    int edad;
    int vida;
    void Hablar()
public:
 Enano() {}
     
 ~Enano() {}
void inicializar(){
    this->altura = 2;
    this->vida = 10;
    this->edad = 1000;
}
void comer(){
    this->vida+=1;

}
};


int main(int argc, char const *argv[]){

    int a=5;
    bool b=true;
    float f=0.1;
    double d=0.1;
    char c='i';
    Enano e;


    cout<<"Tamaño tipos de datos masivos:"<<endl;
    cout<<"Tamaño int: " <<sizeof(int)<<"bytes"<<endl;
    cout<<"Tamaño bool: " <<sizeof(bool)<<"bytes"<<endl;
    cout<<"Tamaño float: " <<sizeof(float)<<"bytes"<<endl;
    cout<<"Tamaño double: " <<sizeof(double)<<"bytes"<<endl;
    cout<<"Tamaño char: " <<sizeof(char)<<static_cast<void*>(&c)<<endl;
    cout<<"Tamaño Enano: " <<sizeof(Enano)<<"bytes"<<endl;

    cout<<endl;
    cout<<"Memoria ºestaica en C"<<endl;
    cout<<"Direccion de int:"<<&a <<endl;
    cout<<"Direccion de bool:"<<&b <<endl;
    cout<<"Direccion de float"<<&f<<endl;
    cout<<"Direccion de double:"<<&d<<endl;
    cout<<"Direccion de char:"<<&c <<endl;
    cout<<"Direccion de Enano:"<<&e<<endl;

    cout<<endl;
    cout<<"Memoria dinemica C"<<endl;
    cout<<"Direccion dinamica:"<<malloc(2)<<endl;
    cout<<"Direccion dinamica int"<<malloc(sizeof(int))<<endl;

    //Casteo de punteros en C
    Enano* direccion =(Enano*) malloc(sizeof(int));
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
    cout<<&duendes(0)<<endl;
    cout<<&duendes(1)<<endl;
    cout<<&duendes(2)<<endl;
    cout<<&duendes(3)<<endl;
    cout<<&duendes(4)<<endl;

    //Conversion a direccion
    cout<<endl;
    cout<<duendes+0<<endl;
    cout<<duendes+1<<endl;
    cout<<duendes+2<<endl;
    cout<<duendes+3<<endl;
    cout<<duendes+4<<endl;




return 0;
}