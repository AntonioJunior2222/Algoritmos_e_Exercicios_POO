#include "Imovel.h"

#include <iostream>
using std::cout, std::ostream, std::endl;

Imovel::Imovel()
{
  preco = 1;
  endereco = "Rua da Irrelevância";
}

Imovel::Imovel(double precou, string enderecou)
{
  setPreco(precou);
  setEndereco(enderecou);
}

void Imovel::setPreco(double precou)
{
  if (precou > 0) preco = precou;
  else preco = 1;
}

void Imovel::setEndereco(string enderecou)
{
  endereco = enderecou;
}