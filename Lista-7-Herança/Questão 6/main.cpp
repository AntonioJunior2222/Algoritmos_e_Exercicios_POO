#include <iostream>
#include "Animal.h"
#include "Cachorro.h"
#include "Gato.h"


int main() {
  Animal A("Spark");
  Cachorro B;
  Gato C;

  std::cout << A.caminha() << std::endl;
  std::cout << B.late() << std::endl;
  std::cout << C.mia() << std::endl;
}