#include "Empresa.h"
using std::cout, std::ostream, std::endl;

void Empresa::armazenaCliente(Cliente a)
{
  for (Cliente &d : clientes)
  {
    if (d.getNome() == "Nome Desconhecido")
    {
      d = a;
      break;
    } 
  }
}

void Empresa::armazenaFuncionario(Funcionario a)
{
  for (Funcionario &d : funcionarios)
  {
    if (d.getNome() == "Nome Desconhecido")
    {
      d = a;
      break;
    } 
  }
}


void Empresa::imprimeClientes() const
{
  for (Cliente const &d: clientes)
  {
    if (d.getNome() != "Nome Desconhecido")
    {
      cout << d << endl;
    }
  }
}

void Empresa::imprimeFuncionarios() const
{
  for (Funcionario const &d: funcionarios)
  {
    if (d.getNome() != "Nome Desconhecido")
    {
      cout << d << endl;
    }
  }
}