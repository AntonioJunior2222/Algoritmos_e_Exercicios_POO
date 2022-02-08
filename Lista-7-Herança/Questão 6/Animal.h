#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
using std::string;


class Animal
{
  public:
    Animal();
    Animal(string,string = "Animal");
    string caminha();

  protected:
    string nome;
    string raca;
};

#endif