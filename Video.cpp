#include <iostream>
using namespace std; 
#include <string>
#include "Video.h"

Video::Video(){
  
  iDVideo = "SARS2021";
  nombreVideo = "Lilo y Stitch"; 
  genero = "Drama"; 
  calificacion = 100.00; 
  duracion = 90; 

}

Video::Video(string IDVideo, string NombreVideo, string Genero, float Calificacion, int Duracion){
  
  iDVideo = IDVideo;
  nombreVideo = NombreVideo; 
  genero = Genero; 
  calificacion = Calificacion; 
  duracion = Duracion; 

}

void Video::setIDVideoo(string IDVideo){
  iDVideo = IDVideo;
}
string Video::getIDVideo(){
  return iDVideo; 
}


void Video::setNombreVideo(string NombreVideo){
  nombreVideo = NombreVideo; 
}
string Video::getNombreVideo(){
  return nombreVideo;
}


void Video::setGenero(string Genero){
  genero = Genero;
}
string Video::getGenero(){
  return genero;
}


void Video::setCalificacion(float Calificacion){
  calificacion = Calificacion; 
}
float Video::getCalificacion(){
  return calificacion;
}


void Video::setDuracion(int Duracion){
  duracion = Duracion; 
}
int Video::getDuracion(){
  return duracion;
}


void Video::muestraDatos(){
}


void Video::calificaVideo(){
  cout<<"Que calificacion le poner a "<<nombreVideo<< " del 1 al 5"<<endl; 
  float cali; 
  cin>>cali;
  while (true){
  if ((cali < 0)||(cali >5)){
    cout<<"Esa calificacion no es valida, ingrese una calificacion valida"<<endl; 
    cin>>cali;
    break;
  }
  else{
    break;
  }
  }
  setCalificacion(cali);
  } 