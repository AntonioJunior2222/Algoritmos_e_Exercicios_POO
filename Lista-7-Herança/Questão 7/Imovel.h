#ifndef IMOVEL_H
#define IMOVEL_H

#include <iostream>
using std::cout, std::ostream, std::endl, std::string;
class Imovel
{
  public:
    Imovel();
    Imovel(double,string);
    void setPreco(double);
    void setEndereco(string);
    inline string getEndereco() const {return endereco;}
    inline double getPreco() const {return preco;}

  private:
    double preco;
    string endereco;
};




#endif