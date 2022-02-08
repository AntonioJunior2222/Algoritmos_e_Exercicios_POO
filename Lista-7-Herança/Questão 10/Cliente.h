#ifndef CLIENTE_H
#define CLIENTE_H

#include "PessoaFisica.h"

class Cliente: public PessoaFisica
{
  public:
    friend ostream &operator<<(ostream &, const Cliente&);
    Cliente();
    Cliente(string, string,string = "(00) 00000 - 0000",string = "Rua Da Irrelevância");
    
    void setTelefone(string);
    void setEndereco(string);

    inline string getTelefone() const {return telefone;}
    inline string getEndereco() const {return endereco;}

  private:
    string telefone;
    string endereco;


};


#endif