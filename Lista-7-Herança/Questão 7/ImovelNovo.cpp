#include "ImovelNovo.h"


ImovelNovo::ImovelNovo(): Imovel(),adicional(1.1)
{
  setPreco(Imovel::getPreco() * adicional);
}

ImovelNovo::ImovelNovo(double precou,string enderecou,double adicionalu) : 
Imovel(precou,enderecou)
{
  setAdicional(adicionalu);
  setPreco(Imovel::getPreco() * adicional);
}


void ImovelNovo::setAdicional(double adicionalu)
{
  if (adicionalu > 1.1) adicional = adicionalu;
  else adicional = 1.1;
}