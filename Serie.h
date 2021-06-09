#ifndef SERIE_H
#define SERIE_H

#include <iostream>
using namespace std; 
#include <string>

#include "Video.h"
#include "Temporada.h"
#include "Episodio.h"

class Serie:public Video{
  private:
    int numTemporadas;
    int numEpisodios;
    Temporada *temporadas;

  public:
    virtual void muestraDatos();
  
    Serie();

    Serie(string IDVideo, string NombreVideo, string Genero, float Calificacion, int Duracion, int numTemporadas, int numEpisodios, Temporada *temporadas);

    void setNumTemporadas(int);
    void setNumEpisodios(int);

    int getNumTemporadas();
    int getNumEpisodios();

    void calificaVideo();

    void calificaTemporadas();
    
}; 

#endif //SERIE_H