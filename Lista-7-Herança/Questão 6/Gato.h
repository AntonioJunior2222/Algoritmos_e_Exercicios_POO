#ifndef GATO_H
#define GATO_H

#include "Animal.h"
#include <iostream>
using std::ostream;

class Gato : public Animal
{
  public:
  inline string mia() const {return "meow";}
};


#endif