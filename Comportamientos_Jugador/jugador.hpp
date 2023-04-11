#ifndef COMPORTAMIENTOJUGADOR_H
#define COMPORTAMIENTOJUGADOR_H
#include "comportamientos/comportamiento.hpp"
using namespace std;

struct state{
	int fil;
	int col;
	Orientacion brujula;  
};

struct punto{

  int x;
  int y;
};

class ComportamientoJugador : public Comportamiento{

  public:
    ComportamientoJugador(unsigned int size) : Comportamiento(size){
      // Constructor de la clase

      current_state.fil = current_state.col = size/2;
      current_state.brujula = norte;
      last_action = actIDLE;
      bien_situado = false;
      girar_derecha = false;
      con_zapatillas = false;
      con_bikini = false;
      tamanio = size;
      encontrado = false;
      poca_bate = false;
      fil_prov=mapaResultado.size();
      col_prov=mapaResultado.size();

      mapaProvisional=new unsigned char* [mapaResultado.size()*2];

      for(int i=0;i<mapaResultado.size()*2;++i){
        
        mapaProvisional[i]=new unsigned char[mapaResultado.size()*2];
      }

      for (int f = 0; f <mapaResultado.size()*2; ++f){
        
        for(int c=0; c<mapaResultado.size()*2; ++c){
          
          mapaProvisional[f][c]='?';
        }
      }
      girardoble = false;
      der_muro = false;
      pasos++;
      
      // Dar el valor inicial a las variables de estado
    }

    ComportamientoJugador(const ComportamientoJugador & comport) : Comportamiento(comport){}
    ~ComportamientoJugador(){}

    Action think(Sensores sensores);
    int interact(Action accion, int valor);
    void PonerTerrenoEnMatriz(const vector<unsigned char> &terreno, const state &st, vector<vector<unsigned char>> &matriz);
    void PintarPrecipicios();
    int numeroPos(unsigned char p, const vector<unsigned char> &terreno);
    void irA(int p);
    bool esTransitable(unsigned char pos);
    void volcarMatriz(state aux);
    bool hayMuro(Sensores m);
    unsigned char casillaDerechaBienPosicionado(const vector<vector<unsigned char>> & mapa_result, Sensores sen);
    unsigned char casillaIzquierdaBienPosicionado(const vector<vector<unsigned char>> & mapa_result, Sensores sen);
    unsigned char casillaDerechaMalPosicionado(unsigned char **mapa_result, int fila, int columna, Sensores sensores);
    unsigned char casillaIzquierdaMalPosicionado(unsigned char **mapa_result, int fila, int columna, Sensores sensores);
    void PonerPrepint(const vector<unsigned char> &terreno, int fila, int col, Orientacion bruj,  unsigned char **matriz);

    ///void prePintado(int x1, int x2);
  private:
  
  // Declarar aquí las variables de estado
    state current_state;
    Action last_action;
    bool girar_derecha;
	  bool bien_situado;
    bool con_zapatillas;
    bool con_bikini;
    int tamanio;
    bool encontrado;
    bool girardoble; 
    bool poca_bate;
    unsigned char **mapaProvisional;
    int fil_prov;
    int col_prov;
    const int Lbateria = 3500;
    int pasos;
    bool der_muro;
};

#endif