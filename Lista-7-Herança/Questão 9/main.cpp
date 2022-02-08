#include <iostream>
#include "Pessoa.h"
#include "Funcionario.h"
using std::cout, std::endl;



int main() {
  Funcionario a("Robervaldo", "111.000.111-00", "12346578", 1023.50, 192, 2000);
  cout<< a << endl;

  Funcionario b("Juracir", "000.111.000-11", "87654321", 1023.50, 192, -550);
  cout<<b;
}
