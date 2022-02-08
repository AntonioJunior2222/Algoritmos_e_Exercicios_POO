#include "PessoaJuridica.h"

PessoaJuridica::PessoaJuridica() : Pessoa()
{
  setCNPJ("00.000.000/0000-00");
  setRazaoSocial("Razão Social Não Descrita");
}

PessoaJuridica::PessoaJuridica(string nomeu, string cnpju, string razaoSocialu) : Pessoa(nomeu)
{
  setCNPJ(cnpju);
  setRazaoSocial(razaoSocialu);
}

void PessoaJuridica::setCNPJ(string cnpju)
{
  if (cnpju.size() != 18) cnpj = "000.000.000-00";
  else cnpj = cnpju;
}

void PessoaJuridica::setRazaoSocial(string razaoSocialu)
{
  if (razaoSocialu == "") razaoSocial = "Razão Social Não Descrita";
  else razaoSocial = razaoSocialu;
}