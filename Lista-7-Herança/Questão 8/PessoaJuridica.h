#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H

#include "Pessoa.h"

class PessoaJuridica: public Pessoa
{

  public:
    PessoaJuridica();
    PessoaJuridica(string,string,string);
    void setCNPJ(string);
    inline string getCNPJ() const {return cnpj;}
    void setRazaoSocial(string);
    inline string getRazaoSocial() const {return razaoSocial;}

  private:
    string cnpj;
    string razaoSocial;

};

#endif