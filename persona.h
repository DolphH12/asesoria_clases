#ifndef PERSONA_H
#define PERSONA_H
#include <string>
#include <iostream>

using namespace std;

class Persona
{
private:
    string nombre;
    int edad;
    float salario;

public:
    Persona();
    Persona(string &nom, int e, float s);
    Persona(Persona &otra);
    ~Persona();
    string getNombre() const;
    void setNombre(const string &value);
    int getEdad() const;
    void setEdad(int value);
    float getSalario() const;
    void setSalario(float value);
};

#endif // PERSONA_H
