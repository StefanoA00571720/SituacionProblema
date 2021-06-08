#ifndef VIDEO_H
#define VIDEO_H

#include <iostream>
using namespace std; 
#include <string>

class Video{
  protected :

  string iDVideo;
  string nombreVideo;
  string genero; 
  float calificacion;
  int duracion;

  public : 

  Video();

  Video(string IDVideo, string NombreVideo, string Genero, float Calificacion, int Duracion);

  void setIDVideoo(string IDVideo);
  string getIDVideo();

  void setNombreVideo(string NombreVideo); 
  string getNombreVideo(); 

  void setGenero(string Genero); 
  string getGenero();

  void setCalificacion(float Calificacion); 
  float getCalificacion(); 

  void setDuracion(int Duracion); 
  int getDuracion(); 

  virtual void muestraDatos() = 0;

  void calificaVideo();
};

#endif //VIDEO_H