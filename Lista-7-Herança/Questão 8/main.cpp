#include <iostream>
#include "Pessoa.h"
#include "PessoaFisica.h"
#include "PessoaJuridica.h"


int main() {
  Pessoa a("João");
  PessoaFisica b("Carlos","111.000.111.00");
  PessoaJuridica c("Elvis","11.000.111/0000-11","Festinhas de Aniversário");

  std::cout << a << std::endl;

  std::cout << b;
  std::cout << b.getCPF() << std::endl << std::endl;

  std::cout << c;
  std::cout << c.getCNPJ() << std::endl;
  std::cout << c.getRazaoSocial() << std::endl;
}
