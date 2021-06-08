#include <iostream>
#include <string>
using namespace std;
#include "Pelicula.h"
#include "Serie.h"
#include "Videoteca.h"

int main() {
  //Creación de la Videoteca

  Videoteca nfx;

  //Creación de las peliculas

  Pelicula PeliculaA("A114", "Rambo", "Accion, Aventura", 3.7, 125, "Rocky");
  Pelicula PeliculaB("B1123", "Los Increibles", "Animación", 4.5, 137, "PIXAR");

  //Creación de Series

  //Serie 1, Friends

  Episodio EpisodiosF1[3];

  Episodio *EpisodioFA1 = EpisodiosF1; 
  Temporada F1(3,5,EpisodioFA1);

  Episodio EpisodiosF2[3];
  Episodio *EpisodioFA2 = EpisodiosF2; 
  Temporada F2(3,5,EpisodioFA2);

  Temporada temporadaFA[2] = {F1,F2};
  Temporada *temporadaFAp = temporadaFA;

  Serie SerieA("S1A", "Friends", "Comedia", 1.2, 43, 2, 6, temporadaFAp);

  //Serie 2, Lucifer

  Episodio EpisodiosL1[3];
  Episodio *EpisodioLA1 = EpisodiosL1; 
  Temporada L1(3,5,EpisodioLA1);

  Episodio EpisodiosL2[3];
  Episodio *EpisodioLA2 = EpisodiosL2; 
  Temporada L2(3,5,EpisodioLA2);

  Temporada temporadaLA[2] = {L1,L2};
  Temporada *temporadaLAp = temporadaLA;

  Serie SerieB("S2B", "Lucifer", "Comedia , Policiaca", 3.7, 56, 2, 6, temporadaLAp);


   //Ciclo for para poner nombre y temporada a las series 
  
    string titulocap = "";
      for (int a = 0; a<3; a++){
        titulocap = "Capitulo " + to_string(a+1);

        EpisodiosF1[a].setTemporada(1);
        EpisodiosF1[a].setTitulo(titulocap);

        EpisodiosF2[a].setTemporada(2);
        EpisodiosF2[a].setTitulo(titulocap);

        EpisodiosL1[a].setTemporada(1);
        EpisodiosL1[a].setTitulo(titulocap);

        EpisodiosL2[a].setTemporada(2);
        EpisodiosL2[a].setTitulo(titulocap);
      }


//Evaluar las 2 Peliculas

 PeliculaA.calificaVideo();
 PeliculaB.calificaVideo();

 //Evaluar Las 2 series

 SerieA.calificaVideo();
 SerieB.calificaVideo(); 

//Creación de apuntadores de Peliculas/Series

  Pelicula peliculas[2]={PeliculaA,PeliculaB};
  Serie series[2]={SerieA,SerieB};

  Pelicula *peliculasp = peliculas; 
  Serie *seriesp = series;

//llenado de la Videoteca  

  nfx.llenar(2,peliculasp,2,seriesp);

//Imprimir Info

  nfx.muestraDatos();
}
