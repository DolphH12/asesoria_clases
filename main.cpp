#include <iostream>
#include <string>
#include "persona.h"

using namespace std;

void imprime(Persona &imp)
{
    cout << imp.getNombre() << endl;
    cout << imp.getEdad() << endl;
    cout << imp.getSalario() << endl;
}

int main()
{
    string nombre = "helena";
    string nombre2 = "Carlos";
    Persona * tirsof = new Persona();
    Persona * helena = new Persona(nombre,25,500);
    Persona * hija = new Persona(*helena);
    tirsof->setNombre(nombre2);
    tirsof->setEdad(24);
    tirsof->setSalario(59620);
    helena->setSalario(52600);
    imprime(*tirsof);
    imprime(*helena);
    imprime(*hija);
    delete tirsof;
    delete helena;
    delete hija;

    return 0;
}

