#ifndef COMPORTAMIENTOJUGADOR_H
#define COMPORTAMIENTOJUGADOR_H
#include "comportamientos/comportamiento.hpp"
using namespace std;

struct state{
	int fil;
	int col;
	Orientacion brujula;  
};

class ComportamientoJugador : public Comportamiento{

  public:
    ComportamientoJugador(unsigned int size) : Comportamiento(size){
      // Constructor de la clase

      current_state.fil = current_state.col = 99;
      current_state.brujula = norte;
      last_action = actIDLE;
      bien_situado = false;
      girar_derecha = false;
      con_zapatillas = false;
      con_bikini = false;
      tamanio = size;
      encontrado = false;
      fil = col = 100;
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
    int fil;
    int col;
    
};

#endif