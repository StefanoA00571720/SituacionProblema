#include <iostream>
using namespace std; 
#include <string>
#include "Pelicula.h"

Pelicula::Pelicula(string IDVideo, string NombreVideo, string Genero, float Calificacion, int Duracion, string Director):Video(IDVideo,  NombreVideo, Genero, Calificacion, Duracion){

  director = Director;

}

Pelicula::Pelicula(){
  
  nombreVideo = "Nombre Video";
  iDVideo = "ID Video"; 
  genero = "Genero";
  calificacion = 0.0;
  duracion = 0;
  director = "Director";

}

void Pelicula::setDirector(string Director){
  director = Director;
}
string Pelicula::getDirector(){
  return director;
}

void Pelicula::muestraDatos(){
  cout<<""<<endl;
  cout<<"Nombre : "<<nombreVideo<<endl;
  cout<<"ID : "<<iDVideo<<endl;
  cout<<"Genero : "<<genero<<endl;
  cout<<"Calificacion : "<<calificacion<<"/5"<<endl;
  cout<<"Duracion por reproducción : "<<duracion<<" minutos"<<endl;
  cout<<"Dirigida por : "<<director<<endl; 
}