#include <iostream>
using namespace std; 
#include <string>

#include "Temporada.h"

Temporada::Temporada(){
  Episodio arrEpisodios[1]; 
  Episodio *episodios = arrEpisodios; 

  numEpisodios = 0; 
  calificacion = 0.00; 
  this->episodios = episodios; 
}

Temporada::Temporada(int numEpisodios,float calificacion,Episodio *episodios){
  this->numEpisodios = numEpisodios; 
  this->calificacion = calificacion; 
  this->episodios = episodios;
}

void Temporada::setNumEpisodios(int numEpisodios){
  this->numEpisodios = numEpisodios; 
}

int Temporada::getNumEpisodios(){
  return numEpisodios; 
}

void Temporada::setCalificacion(float calificacion){
  this->calificacion = calificacion; 
}

float Temporada::getCalificacion(){
  return calificacion; 
}

void Temporada::muestraDatos(){
  cout<<""<<endl;
  cout<<"Número de episodios: "<<numEpisodios<<endl; 
  cout<<"Calificación temporada: "<<calificacion<<endl;
  cout<<""<<endl;
  
  for(int i = 0; i < numEpisodios; i++){
    cout<<"Episodio: "<<i+1<<endl;
    episodios[i].muestraDatos();
    
  }
  cout<<""<<endl;
}

void Temporada::operator+(Episodio episodio){
	numEpisodios++; 
	Episodio *episodiosNuevo = new Episodio[numEpisodios]; 

	for (int i = 0; i<numEpisodios-1; i++){
		episodiosNuevo[i] = episodios[i]; 
	}

	episodiosNuevo[numEpisodios-1] = episodio; 
	episodios = episodiosNuevo; 
	delete []episodiosNuevo; 
}

void Temporada::calificaTemporada(){ 
  float cali;
  cin>>cali;
  while (true){
  if ((cali < 0)||(cali >5)){
    cout<<"Esa calificacion no es valida, ingrese una calificacion valida"<<endl; 
    cin>>cali;
  }
  else{
    break;
  }
  }
  setCalificacion(cali);
  }
