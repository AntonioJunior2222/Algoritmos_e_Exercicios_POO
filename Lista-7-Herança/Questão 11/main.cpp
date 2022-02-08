#include <iostream>
#include "Pessoa.h"
#include "Cliente.h"
#include "Funcionario.h"
#include "Empresa.h"
using std::cout, std::endl;



int main() {
  char linha[] = "---------------------------------------------\n";
  Empresa A;
  A.armazenaCliente(Cliente("Robertinho","000"));

  A.armazenaCliente(Cliente("Moasilvio", "000.111.000-45", "(83) 12345 - 1234"));

  A.armazenaFuncionario(Funcionario("Robervaldo", "111.000.111-00", "12346578", 1023.50, 192, 2000));
  
  A.armazenaFuncionario(Funcionario("Juracir", "000.111.000-11", "87654321", 1023.50, 192, -550));

  A.imprimeClientes();
  cout << linha;
  A.imprimeFuncionarios();
  cout << linha;

}
