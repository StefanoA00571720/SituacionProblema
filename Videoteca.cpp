#include <iostream>
using namespace std; 
#include <string>

#include "Video.h"
#include "Videoteca.h"

Videoteca::Videoteca(){
  numPeliculas=0;
  numSeries=0;

  Pelicula peliculas[1];
  Serie sr[1];

  Pelicula *peliculasap=peliculas;
  Serie *seriesap=sr;

  this->peliculas=peliculasap;
  this->series=seriesap;
}

Videoteca::Videoteca(int numPelis,Pelicula *pelis,int numSers, Serie *sers){
  numPeliculas=numPelis;
  numSeries=numSers;
  peliculas=pelis;
  series=sers;
}

void Videoteca::llenar(int numPelis,Pelicula *pelis,int numSers, Serie *sers){
  numPeliculas=numPelis;
  numSeries=numSers;
  peliculas=pelis;
  series=sers;
}

void Videoteca::muestraDatos(){
  cout<<"Dentro de Videoteca esta : "<<endl;
  cout<<""<<endl;
  cout<<"PELICULAS: "<<endl;
  for (int i=0; i<numPeliculas; i++){
    peliculas[i].muestraDatos();
  }
  cout<<""<<endl;
  cout<<"SERIES: "<<endl;
  for (int i=0; i<numSeries; i++){
    series[i].muestraDatos();
  }
}