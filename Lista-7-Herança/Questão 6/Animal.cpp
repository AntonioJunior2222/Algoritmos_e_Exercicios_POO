#include "Animal.h"

Animal::Animal():nome("Animal"),raca("Animal"){}

Animal::Animal(string nomeu, string racau):nome(nomeu),raca(racau){}

string Animal::caminha()
{
  return "Caminhada";
}