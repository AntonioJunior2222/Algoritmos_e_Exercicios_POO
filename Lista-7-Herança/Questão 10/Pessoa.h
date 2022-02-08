#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
using std::string;
using std::ostream;
class Pessoa
{
  public:
    friend ostream &operator<<(ostream &, const Pessoa&);
    Pessoa();
    Pessoa(string);
    inline string getNome() const {return nome;}
    void setNome(string nome);
  
  protected:
    string nome;
};
#endif