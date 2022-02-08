#include "PessoaFisica.h"

PessoaFisica::PessoaFisica(): Pessoa()
{
  setCPF("000.000.000-00");
}

PessoaFisica::PessoaFisica(string nomeu, string cpfu) : Pessoa(nomeu)
{
  setCPF(cpfu);
}

void PessoaFisica::setCPF(string cpfu)
{
  if (cpfu.size() != 14) cpf = "000.000.000-00";
  else cpf = cpfu;
}