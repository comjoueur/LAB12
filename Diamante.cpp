#include<iostream>
using namespace std;
class Profesional{
    string certificado;
    int graduado;
    public:
    Profesional(string mycertificado, int mygraduado)
      : certificado(mycertificado),graduado(mygraduado){}
};
class Ingeniero: public Profesional{
  string certificado;
  int graduado;
  string codigo_ingeniero;
  public:
    Ingeniero(string mycertificado, int mygraduado, string mycodigo_ingeniero)
      :Profesional(mycertificado,mygraduado), codigo_ingeniero(mycodigo_ingeniero){}
};
class medico: public Profesional{
  string certificado;
  int graduado;
  string codigo_medico;
  public:
    medico(string mycertificado, int mygraduado, string mycodigo_medico)
      :Profesional(mycertificado,mygraduado), codigo_medico(mycodigo_medico){}
};
class medicoIngeniero: public Ingeniero,public medico{
  string certificado;
  int graduado;
  string codigo_ingeniero;
  string codigo_medico;
  public:
    medicoIngeniero(string mycertificado, int mygraduado, string mycodigo_medico, string mycodigo_ingeniero)
      :certificado(mycertificado),graduado(mygraduado),codigo_medico(mycodigo_medico),codigo_ingeniero(mycodigo_ingeniero){}
};
/*class Profesional{
  ...
  virtual string certificado;
  virtual int graduado;
}
class Ingeniero{
  ...
  virtual string certificado;
  virtual int graduado;
}
class medico{
  ...
  virtual string certificado;
  virtual int graduado;
}
class medicoIngeniero{
  ...
  virtual string certificado;
  virtual int graduado;
}
*/
int main(){
  medicoIngeniero a;
}
