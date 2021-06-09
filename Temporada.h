#ifndef TEMPORADA_H
#define TEMPORADA_H

#include <iostream>
using namespace std; 
#include <string>

#include "Episodio.h"

class Temporada{

  private:

  int numEpisodios;
  float calificacion;
  Episodio *episodios;

  public:

  void muestraDatos();

  Temporada();
  Temporada(int numEpisodios,float calificacion,Episodio *episodios);

  void setNumEpisodios(int);
  void setCalificacion(float);

  int getNumEpisodios();
  float getCalificacion();
  
  void operator+(Episodio); 
  
  void calificaTemporada();

};

#endif //TEMPORADA_H