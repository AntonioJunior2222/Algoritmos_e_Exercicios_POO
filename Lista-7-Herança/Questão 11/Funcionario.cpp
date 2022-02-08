#include "Funcionario.h"
using std::cout, std::ostream, std::endl;

ostream &operator<<(ostream &out, const Funcionario &m)
{
  out << "Nome: " << m.getNome() << endl;
  out << "CPF: " << m.getCPF() << endl;
  out << "Matrícula: " << m.matricula << endl;
  out << "Salário: " << m.calculaSalarioBruto() << "R$" << endl;
  out << "Carga Hrs. Mensais: " << m.chm << endl;
  out << "Qntd. Horas Trabalhadas: " << m.qht << endl;

  return out;
}


Funcionario::Funcionario() : PessoaFisica()
{
  setMatricula("XXXXXXXX");
  setSalario(1);
  setCHM(1);
  setQHT(0.00); 
}

Funcionario::Funcionario(string nomeu, string cpfu, string matriculau, double salariou, double chmu, double qhtu) : PessoaFisica(nomeu, cpfu)
{
  setMatricula(matriculau);
  setSalario(salariou);
  setCHM(chmu);
  setQHT(qhtu); 
}


void Funcionario::setMatricula(string matriculau)
{
  if(matriculau.size() != 8) matricula = "Matricula Invalida";
  else matricula = matriculau;
}

void Funcionario::setSalario(double salariou)
{
  if (salariou < 0) salario = 0.00;
  else salario = salariou;
}

void Funcionario::setCHM(double chmu)
{
  if (chmu < 0) chm = 1;
  else chm = chmu;
}

void Funcionario::setQHT(double qhtu)
{
  if (qhtu < 0) qht = 0.00;
  else if (qhtu > getCHM()) qht = chm;
  else qht = qhtu;
}

double Funcionario::calculaSalarioBruto() const
{
  return(salario*(qht/chm));
}