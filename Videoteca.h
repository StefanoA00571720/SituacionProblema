#ifndef VIDEOTECA_H
#define VIDEOTECA_H

#include <iostream>
using namespace std; 
#include <string>

using namespace std;

#include "Video.h"
#include "Pelicula.h"
#include "Serie.h"

class Videoteca{

  private:
  
  Pelicula *peliculas;
  Serie *series;
  int numPeliculas;
  int numSeries;

  public:
  Videoteca();
  
  Videoteca(int numPelis,Pelicula *pelis,int numSers, Serie *sers);

  void llenar(int numPelis,Pelicula *pelis,int numSers, Serie *sers);

  void muestraDatos();

};

#endif //VIDEOTECA_H