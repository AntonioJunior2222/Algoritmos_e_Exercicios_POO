#include <iostream>
using std::cout, std::endl;

#include "Imovel.h"
#include "ImovelNovo.h"
#include "ImovelVelho.h"

int main() {
  Imovel a(24,"Rua Siqueira Campos");
  ImovelNovo b(24,"Rua Siqueira Campos", 1.9);
  ImovelVelho c(24,"Rua Siqueira Campos", 0.7);


  cout << a.getPreco() << endl;

  cout << b.getPreco() << endl;

  cout << c.getPreco() << endl;
}