#ifndef IMOVELNOVO_H
#define IMOVELNOVO_H
#include <iostream>
#include "Imovel.h"
using std::string;

class ImovelNovo: public Imovel
{
  public:
    ImovelNovo();
    ImovelNovo(double,string,double);
    inline double getAdicional() const {return adicional;}
    void setAdicional(double);

  private:
    double adicional;

};




#endif