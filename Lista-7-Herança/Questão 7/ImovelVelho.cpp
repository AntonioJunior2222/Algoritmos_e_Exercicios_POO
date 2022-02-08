#include "ImovelVelho.h"


ImovelVelho::ImovelVelho(): Imovel(),desconto(0.9)
{
  setPreco(Imovel::getPreco() * desconto);
}

ImovelVelho::ImovelVelho(double precou,string enderecou,double descontou) : 
Imovel(precou,enderecou)
{
  setDesconto(descontou);
  setPreco(Imovel::getPreco() * desconto);
}


void ImovelVelho::setDesconto(double descontou)
{
  if (descontou < 1 && descontou > 0) desconto = descontou;
  else desconto = 0.9;
}