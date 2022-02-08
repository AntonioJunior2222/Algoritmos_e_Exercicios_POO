#ifndef EMPRESA_H
#define EMPRESA_H

#include "PessoaJuridica.h"
#include "Cliente.h"
#include "Funcionario.h"

class Empresa: PessoaJuridica
{
  public:
    void armazenaCliente(Cliente);
    void armazenaFuncionario(Funcionario);
    void imprimeClientes() const;
    void imprimeFuncionarios() const;


  private:
    Cliente clientes[10];
    Funcionario funcionarios[10];




};





#endif