#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#endif

#include <iostream>
#include "PessoaFisica.h"
using std::string;
using std::ostream;

class Funcionario: public PessoaFisica
{
  public:
    friend ostream &operator<<(ostream &, const Funcionario&);
    Funcionario();
    Funcionario(string, string, string = "XXXXXXXX", double = 1.00, double = 1, double = 0);
    void setMatricula(string);
    void setSalario(double);
    void setCHM(double);
    void setQHT(double);

    double calculaSalarioBruto() const;

    inline string getMatricula() const {return matricula;}
    inline double getSalario() const {return salario;}
    inline double getCHM() const {return chm;}
    inline double getQHT() const {return qht;}


  private:
    string matricula;
    double salario;
    double chm;//Carga Horaria Mensal
    double qht;//Horas Efetivamente Trabalhadas

    



};