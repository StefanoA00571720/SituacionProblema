#ifndef PELICULA_H
#define PELICULA_H

#include <iostream>
using namespace std; 
#include <string>
#include "Video.h"

class Pelicula : public Video{
  private :

  string director;

  public :

  Pelicula(); 
  Pelicula(string IDVideo, string NombreVideo, string Genero, float Calificacion, int Duracion, string Director);

  void setDirector(string director);
  string getDirector();

  virtual void muestraDatos();
};

#endif //VIDEO_H