#include "../Comportamientos_Jugador/jugador.hpp"
#include <iostream>
using namespace std;

void ComportamientoJugador::PonerTerrenoEnMatriz(const vector<unsigned char> &terreno, const state &st, vector<vector<unsigned char>> &matriz){

        switch (st.brujula)
        {
        case norte:
            matriz[st.fil][st.col] = terreno[0];
            matriz[st.fil - 1][st.col - 1] = terreno[1];
            matriz[st.fil - 1][st.col] = terreno[2];
            matriz[st.fil - 1][st.col + 1] = terreno[3];
            matriz[st.fil - 2][st.col - 2] = terreno[4];
            matriz[st.fil - 2][st.col - 1] = terreno[5];
            matriz[st.fil - 2][st.col] = terreno[6];
            matriz[st.fil - 2][st.col + 1] = terreno[7];
            matriz[st.fil - 2][st.col + 2] = terreno[8];
            matriz[st.fil - 3][st.col - 3] = terreno[9];
            matriz[st.fil - 3][st.col - 2] = terreno[10];
            matriz[st.fil - 3][st.col - 1] = terreno[11];
            matriz[st.fil - 3][st.col] = terreno[12];
            matriz[st.fil - 3][st.col + 1] = terreno[13];
            matriz[st.fil - 3][st.col + 2] = terreno[14];
            matriz[st.fil - 3][st.col + 3] = terreno[15];
            break;
        case sur:
            matriz[st.fil][st.col] = terreno[0];
            matriz[st.fil + 1][st.col + 1] = terreno[1];
            matriz[st.fil + 1][st.col] = terreno[2];
            matriz[st.fil + 1][st.col - 1] = terreno[3];
            matriz[st.fil + 2][st.col + 2] = terreno[4];
            matriz[st.fil + 2][st.col + 1] = terreno[5];
            matriz[st.fil + 2][st.col] = terreno[6];
            matriz[st.fil + 2][st.col - 1] = terreno[7];
            matriz[st.fil + 2][st.col - 2] = terreno[8];
            matriz[st.fil + 3][st.col + 3] = terreno[9];
            matriz[st.fil + 3][st.col + 2] = terreno[10];
            matriz[st.fil + 3][st.col + 1] = terreno[11];
            matriz[st.fil + 3][st.col] = terreno[12];
            matriz[st.fil + 3][st.col - 1] = terreno[13];
            matriz[st.fil + 3][st.col - 2] = terreno[14];
            matriz[st.fil + 3][st.col - 3] = terreno[15];
        break;
        
        case oeste:
            matriz[st.fil][st.col] = terreno[0];
            matriz[st.fil + 1][st.col - 1] = terreno[1];
            matriz[st.fil][st.col - 1] = terreno[2];
            matriz[st.fil - 1][st.col - 1] = terreno[3];
            matriz[st.fil + 2][st.col - 2] = terreno[4];
            matriz[st.fil + 1][st.col - 2] = terreno[5];
            matriz[st.fil][st.col - 2] = terreno[6];
            matriz[st.fil - 1][st.col - 2] = terreno[7];
            matriz[st.fil - 2][st.col - 2] = terreno[8];
            matriz[st.fil + 3][st.col - 3] = terreno[9];
            matriz[st.fil + 2][st.col - 3] = terreno[10];
            matriz[st.fil + 1][st.col - 3] = terreno[11];
            matriz[st.fil][st.col - 3] = terreno[12];
            matriz[st.fil - 1][st.col - 3] = terreno[13];
            matriz[st.fil - 2][st.col - 3] = terreno[14];
            matriz[st.fil - 3][st.col - 3] = terreno[15];
        break;

        case este:
            matriz[st.fil][st.col] = terreno[0];
            matriz[st.fil - 1][st.col + 1] = terreno[1];
            matriz[st.fil][st.col + 1] = terreno[2];
            matriz[st.fil + 1][st.col + 1] = terreno[3];
            matriz[st.fil - 2][st.col + 2] = terreno[4];
            matriz[st.fil - 1][st.col + 2] = terreno[5];
            matriz[st.fil][st.col + 2] = terreno[6];
            matriz[st.fil + 1][st.col + 2] = terreno[7];
            matriz[st.fil + 2][st.col + 2] = terreno[8];
            matriz[st.fil - 3][st.col + 3] = terreno[9];
            matriz[st.fil - 2][st.col + 3] = terreno[10];
            matriz[st.fil - 1][st.col + 3] = terreno[11];
            matriz[st.fil][st.col + 3] = terreno[12];
            matriz[st.fil + 1][st.col + 3] = terreno[13];
            matriz[st.fil + 2][st.col + 3] = terreno[14];
            matriz[st.fil + 3][st.col + 3] = terreno[15];
        break;

        case noroeste: 
            matriz[st.fil][st.col] = terreno[0];
            matriz[st.fil][st.col - 1] = terreno[1];
            matriz[st.fil - 1][st.col - 1] = terreno[2];
            matriz[st.fil - 1][st.col] = terreno[3];
            matriz[st.fil][st.col - 2] = terreno[4];
            matriz[st.fil - 1][st.col - 2] = terreno[5];
            matriz[st.fil - 2][st.col - 2] = terreno[6];
            matriz[st.fil - 2][st.col - 1] = terreno[7];
            matriz[st.fil - 2][st.col] = terreno[8];
            matriz[st.fil][st.col - 3] = terreno[9];
            matriz[st.fil - 1][st.col - 3] = terreno[10];
            matriz[st.fil - 2][st.col - 3] = terreno[11];
            matriz[st.fil - 3][st.col - 3] = terreno[12];
            matriz[st.fil - 3][st.col - 2] = terreno[13];
            matriz[st.fil - 3][st.col - 1] = terreno[14];
            matriz[st.fil - 3][st.col] = terreno[15];
        break;

        case sureste:
            matriz[st.fil][st.col] = terreno[0];
            matriz[st.fil][st.col + 1] = terreno[1];
            matriz[st.fil + 1][st.col + 1] = terreno[2];
            matriz[st.fil + 1][st.col] = terreno[3];
            matriz[st.fil][st.col + 2] = terreno[4];
            matriz[st.fil + 1][st.col + 2] = terreno[5];
            matriz[st.fil + 2][st.col + 2] = terreno[6];
            matriz[st.fil + 2][st.col + 1] = terreno[7];
            matriz[st.fil + 2][st.col] = terreno[8];
            matriz[st.fil][st.col + 3] = terreno[9];
            matriz[st.fil + 1][st.col + 3] = terreno[10];
            matriz[st.fil + 2][st.col + 3] = terreno[11];
            matriz[st.fil + 3][st.col + 3] = terreno[12];
            matriz[st.fil + 3][st.col + 2] = terreno[13];
            matriz[st.fil + 3][st.col + 1] = terreno[14];
            matriz[st.fil + 3][st.col] = terreno[15];
        break;

        case noreste:
            matriz[st.fil][st.col] = terreno[0];
            matriz[st.fil - 1][st.col] = terreno[1];
            matriz[st.fil - 1][st.col + 1] = terreno[2];
            matriz[st.fil][st.col + 1] = terreno[3];
            matriz[st.fil - 2][st.col] = terreno[4];
            matriz[st.fil - 2][st.col + 1] = terreno[5];
            matriz[st.fil - 2][st.col + 2] = terreno[6];
            matriz[st.fil - 1][st.col + 2] = terreno[7];
            matriz[st.fil][st.col + 2] = terreno[8];
            matriz[st.fil - 3][st.col] = terreno[9];
            matriz[st.fil - 3][st.col + 1] = terreno[10];
            matriz[st.fil - 3][st.col + 2] = terreno[11];
            matriz[st.fil - 3][st.col + 3] = terreno[12];
            matriz[st.fil - 2][st.col + 3] = terreno[13];
            matriz[st.fil - 1][st.col + 3] = terreno[14];
            matriz[st.fil][st.col + 3] = terreno[15];
        break;

        case suroeste:
            matriz[st.fil][st.col] = terreno[0];
            matriz[st.fil + 1][st.col] = terreno[1];
            matriz[st.fil + 1][st.col - 1] = terreno[2];
            matriz[st.fil][st.col - 1] = terreno[3];
            matriz[st.fil + 2][st.col] = terreno[4];
            matriz[st.fil + 2][st.col - 1] = terreno[5];
            matriz[st.fil + 2][st.col - 2] = terreno[6];
            matriz[st.fil + 1][st.col - 2] = terreno[7];
            matriz[st.fil][st.col - 2] = terreno[8];
            matriz[st.fil + 3][st.col] = terreno[9];
            matriz[st.fil + 3][st.col - 1] = terreno[10];
            matriz[st.fil + 3][st.col - 2] = terreno[11];
            matriz[st.fil + 3][st.col - 3] = terreno[12];
            matriz[st.fil + 2][st.col - 3] = terreno[13];
            matriz[st.fil + 1][st.col - 3] = terreno[14];
            matriz[st.fil][st.col - 3] = terreno[15];
        break;
        }
    }

Action ComportamientoJugador::think(Sensores sensores){

	Action accion = actIDLE;

	cout << "Posicion: fila " << sensores.posF << " columna " << sensores.posC << " ";

	switch(sensores.sentido){
		case 0: cout << "Norte" << endl; break;
		case 1: cout << "Noreste" << endl; break;
		case 2: cout << "Este" << endl; break;
		case 3: cout << "Sureste" << endl; break;
		case 4: cout << "Sur " << endl; break;
		case 5: cout << "Suroeste" << endl; break;
		case 6: cout << "Oeste" << endl; break;
		case 7: cout << "Noroeste" << endl; break;
	}

	cout << "Terreno: ";
	for (int i=0; i<sensores.terreno.size(); i++)
		cout << sensores.terreno[i];
	cout << endl;

	cout << "Superficie: ";
	for (int i=0; i<sensores.superficie.size(); i++)
		cout << sensores.superficie[i];
	cout << endl;

	cout << "Colisión: " << sensores.colision << endl;
	cout << "Reset: " << sensores.reset << endl;
	cout << "Vida: " << sensores.vida << endl;
	cout << endl;


	// Determinar el efecto de la ultima accion enviada
    switch (last_action){
    
        case actFORWARD:
            
            switch (current_state.brujula){
            
                case norte:
                    current_state.fil --;
                break;

                case noroeste:
                    current_state.fil --;
                    current_state.col --;
                break;

                case oeste:
                    current_state.col --;
                break;

                case suroeste:
                    current_state.fil ++;
                    current_state.col --;
                break;

                case sur:
                    current_state.fil ++;
                break;

                case sureste:
                    current_state.fil ++;
                    current_state.col ++;
                break;

                case este:
                    current_state.col ++;
                break;

                case noreste:
                    current_state.fil --;
                    current_state.col ++;
                break;
            
            }
        break;

        case actTURN_SL: 
            current_state.brujula = static_cast<Orientacion>((current_state.brujula + 7) % 8);
        break;

        case actTURN_SR:
            current_state.brujula = static_cast<Orientacion>((current_state.brujula + 1) % 8);
        break;

        case actTURN_BL:
            current_state.brujula = static_cast<Orientacion>((current_state.brujula + 5) % 8);
        break;

        case actTURN_BR:
            current_state.brujula = static_cast<Orientacion>((current_state.brujula + 3 ) % 8);
        break;
    
    }

    // Nos sirve para saber cuando estamos bien posicionado y así salvar las posiciones y orientacion del agente
    if (sensores.terreno[0] == 'G' and !bien_situado){

       current_state.col = sensores.posC;
       current_state.fil = sensores.posF;
       current_state.brujula = sensores.sentido;
       bien_situado = true; 
    }

    // Una vez que ya está bien colocado, se dispone a pintar
    if (bien_situado){

        PonerTerrenoEnMatriz(sensores.terreno, current_state, mapaResultado);
    }

    if(sensores.terreno[0] == 'K' and !con_bikini){

        con_bikini = true;
    }

    if(sensores.terreno[0] == 'D' and !con_zapatillas){

        con_zapatillas = true;
    }

    if((sensores.terreno[2] == 'T' or sensores.terreno[2] == 'S' or sensores.terreno[2] == 'G' or sensores.terreno[2] == 'K' or 
       sensores.terreno[2] == 'D' or (sensores.terreno[2] == 'B' and con_zapatillas) or (sensores.terreno[2] == 'A' and con_bikini)) and sensores.superficie[2] == '_'){

        accion = actFORWARD;
    }
    else if(!girar_derecha){

        accion = actTURN_SL;
        girar_derecha = (rand()%2 ==0);
    }
    else {

        accion = actTURN_BR;
        girar_derecha = (rand()%2 ==0);
    }

    last_action = accion;
	return accion;
}

int ComportamientoJugador::interact(Action accion, int valor){
  return false;
}