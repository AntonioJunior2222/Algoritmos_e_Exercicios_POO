#include "Pessoa.h"
using std::cout, std::ostream, std::endl;

ostream &operator<<(ostream &out, const Pessoa &m)
{
  out << "Nome: " << m.nome << endl;
  return out;
}

Pessoa::Pessoa(): nome("Nome Desconhecido"){}

Pessoa::Pessoa(string nomeu) : nome(nomeu){}

void Pessoa::setNome(string nomeu)
{
  nome = nomeu;
}