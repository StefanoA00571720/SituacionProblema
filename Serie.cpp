#include <iostream>
using namespace std; 
#include <string>

#include "Serie.h"
#include "Temporada.h"

Serie::Serie(){
  numTemporadas=1;
  numEpisodios=1;
  //APUNTADOR A TEMPORADAS 
}

Serie::Serie(string IDVideo, string NombreVideo, string Genero, float Calificacion, int Duracion, int numTemporadas, int numEpisodios, Temporada *temporadas):Video( IDVideo,  NombreVideo,  Genero,  Calificacion,  Duracion){
  
  this->numTemporadas = numTemporadas;
  this->numEpisodios = numEpisodios;
  this-> temporadas = temporadas;
}

void Serie::muestraDatos(){
  cout<<""<<endl;
  cout<<"Nombre : "<<nombreVideo<<endl;
  cout<<"ID : "<<iDVideo<<endl;
  cout<<"Genero : "<<genero<<endl;
  cout<<"Calificacion : "<<calificacion<<"/5"<<endl;
  cout<<"Duracion por reproducción : "<<duracion<<" minutos"<<endl;
  cout<<"Numero de Temporadas: "<<numTemporadas<<endl; 
  cout<<"Numero de Episodios: "<<numEpisodios<<endl;
  cout<<""<<endl;

  for (int i=0; i<numTemporadas; i++){
    cout<<"Temporada "<<i+1<<endl;
    temporadas[i].muestraDatos();
  }

}

void Serie::setNumTemporadas(int n){
  numTemporadas=n;
}

void Serie::setNumEpisodios(int n){
  numEpisodios=n;
}


int Serie::getNumTemporadas(){
  return numTemporadas;
}    
    
int Serie::getNumEpisodios(){
  return numEpisodios;
}

void Serie::calificaVideo(){
  calificaTemporadas();
  float suma = 0.00;
  for(int i = 0; i < numTemporadas; i++){
    suma = suma + temporadas[i].getCalificacion();
  }
  this->calificacion = suma/numTemporadas;
}

void Serie::calificaTemporadas(){
  cout<<""<<endl;
  cout<<"De la serie : "<<nombreVideo<<endl;
  for(int i = 0; i < numTemporadas; i++){
    cout<<"Que calificacion desea ponerle a la temporada "<<i+1<<" del 1 al 5"<<endl;
    temporadas[i].calificaTemporada();
  }
}