#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H

#include "Pessoa.h"

class PessoaFisica: public Pessoa
{

  public:
    PessoaFisica();
    PessoaFisica(string,string);
    void setCPF(string);
    inline string getCPF() const {return cpf;}

  private:
    string cpf;

};

#endif