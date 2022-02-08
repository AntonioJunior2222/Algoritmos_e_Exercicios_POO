#ifndef IMOVELVELHO_H
#define IMOVELVELHO_H
#include <iostream>
#include "Imovel.h"
using std::string;

class ImovelVelho: public Imovel
{
  public:
    ImovelVelho();
    ImovelVelho(double,string,double);
    inline double getDesconto() const {return desconto;}
    void setDesconto(double);

  private:
    double desconto;

};




#endif