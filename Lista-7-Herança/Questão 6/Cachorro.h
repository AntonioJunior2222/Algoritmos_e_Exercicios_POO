#ifndef CACHORRO_H
#define CACHORRO_H

#include "Animal.h"
#include <iostream>
using std::ostream;

class Cachorro : public Animal
{
  public:
    inline string late() const {return "au au";}
};


#endif