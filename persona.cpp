#include "persona.h"

string Persona::getNombre() const
{
    return nombre;
}

void Persona::setNombre(const string &value)
{
    nombre = value;
}

int Persona::getEdad() const
{
    return edad;
}

void Persona::setEdad(int value)
{
    edad = value;
}

float Persona::getSalario() const
{
    return salario;
}

void Persona::setSalario(float value)
{
    salario = value;
}

Persona::Persona()
{
    nombre =  "";
    edad = 0;
    salario = 0.0;
}

Persona::Persona(string &nom, int e, float s)
{
    nombre =  nom;
    edad = e;
    salario = s;
}

Persona::Persona(Persona &otra)
{
    nombre = otra.nombre;
    edad = otra.edad;
    salario = otra.salario;
}


Persona::~Persona()
{
    cout << "adios " << nombre <<endl;
}

