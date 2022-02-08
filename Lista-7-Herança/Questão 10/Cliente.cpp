#include "Cliente.h"
using std::cout, std::ostream, std::endl;

ostream &operator<<(ostream &out, const Cliente &m)
{
  out << "Nome: " << m.getNome() << endl;
  out << "CPF: " << m.getCPF() << endl;
  out << "Telefone: " << m.getTelefone() << endl;
  out << "Endereço: " << m.getEndereco() << endl;
  return out;
}


Cliente::Cliente() : PessoaFisica()
{
  setTelefone("");
  setEndereco("Rua Da Irrelevância");
}

Cliente::Cliente(string nomeu, string cpfu, string telefoneu, string enderecou): PessoaFisica(nomeu, cpfu)
{
  setTelefone(telefoneu);
  setEndereco(enderecou);
}


void Cliente::setTelefone(string telefoneu)
{
  if (telefoneu.size() != 17) telefone = "(00) 00000 - 0000";
  else telefone = telefoneu;
}

void Cliente::setEndereco(string enderecou)
{
  endereco = enderecou;
}