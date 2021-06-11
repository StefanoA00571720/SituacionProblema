#include "Episodio.h"
#include <string>
using namespace std; 

Episodio::Episodio(){
  titulo = "Titulo Episodio"; 
  temporada = 0;
}

Episodio::Episodio(string titulo, int Temporada){
  this->titulo = titulo;
  this->temporada = Temporada;
} 

int Episodio::getTemporada(){
  return temporada;
}

void Episodio::setTemporada(int temp){
  temporada = temp; 
}

string Episodio::getTitulo(){
  return titulo;
}

void Episodio::setTitulo(string titulo){
  this->titulo = titulo; 
}


void Episodio::muestraDatos(){
  cout<<"Titulo del episodio: "<<titulo<<endl;
  cout<<"Número de temporada: "<<temporada<<endl; 
  cout<<""<<endl;
}
