#ifndef EPISODIO_H 
#define EPISODIO_H

#include <iostream>
using namespace std; 
#include <string>

class Episodio{
  private:
  string titulo; 
  int temporada;

  public:

  Episodio(); 
  Episodio(string, int); 

  int getTemporada(); 
  void setTemporada(int);
   
  string getTitulo(); 
  void setTitulo(string);
  
  void muestraDatos(); 
};

#endif 