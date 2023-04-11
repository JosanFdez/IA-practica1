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

void ComportamientoJugador::PonerPrepint(const vector<unsigned char> &terreno, int fila, int col, Orientacion bruj,  unsigned char **matriz){

        switch (bruj)
        {
        case norte:
            matriz[fila][col] = terreno[0];
            matriz[fila - 1][col - 1] = terreno[1];
            matriz[fila - 1][col] = terreno[2];
            matriz[fila - 1][col + 1] = terreno[3];
            matriz[fila - 2][col - 2] = terreno[4];
            matriz[fila - 2][col - 1] = terreno[5];
            matriz[fila - 2][col] = terreno[6];
            matriz[fila - 2][col + 1] = terreno[7];
            matriz[fila - 2][col + 2] = terreno[8];
            matriz[fila - 3][col - 3] = terreno[9];
            matriz[fila - 3][col - 2] = terreno[10];
            matriz[fila - 3][col - 1] = terreno[11];
            matriz[fila - 3][col] = terreno[12];
            matriz[fila - 3][col + 1] = terreno[13];
            matriz[fila - 3][col + 2] = terreno[14];
            matriz[fila - 3][col + 3] = terreno[15];
            break;
        case sur:
            matriz[fila][col] = terreno[0];
            matriz[fila + 1][col + 1] = terreno[1];
            matriz[fila + 1][col] = terreno[2];
            matriz[fila + 1][col - 1] = terreno[3];
            matriz[fila + 2][col + 2] = terreno[4];
            matriz[fila + 2][col + 1] = terreno[5];
            matriz[fila + 2][col] = terreno[6];
            matriz[fila + 2][col - 1] = terreno[7];
            matriz[fila + 2][col - 2] = terreno[8];
            matriz[fila + 3][col + 3] = terreno[9];
            matriz[fila + 3][col + 2] = terreno[10];
            matriz[fila + 3][col + 1] = terreno[11];
            matriz[fila + 3][col] = terreno[12];
            matriz[fila + 3][col - 1] = terreno[13];
            matriz[fila + 3][col - 2] = terreno[14];
            matriz[fila + 3][col - 3] = terreno[15];
        break;
        
        case oeste:
            matriz[fila][col] = terreno[0];
            matriz[fila + 1][col - 1] = terreno[1];
            matriz[fila][col - 1] = terreno[2];
            matriz[fila - 1][col - 1] = terreno[3];
            matriz[fila + 2][col - 2] = terreno[4];
            matriz[fila + 1][col - 2] = terreno[5];
            matriz[fila][col - 2] = terreno[6];
            matriz[fila - 1][col - 2] = terreno[7];
            matriz[fila - 2][col - 2] = terreno[8];
            matriz[fila + 3][col - 3] = terreno[9];
            matriz[fila + 2][col - 3] = terreno[10];
            matriz[fila + 1][col - 3] = terreno[11];
            matriz[fila][col - 3] = terreno[12];
            matriz[fila - 1][col - 3] = terreno[13];
            matriz[fila - 2][col - 3] = terreno[14];
            matriz[fila - 3][col - 3] = terreno[15];
        break;

        case este:
            matriz[fila][col] = terreno[0];
            matriz[fila - 1][col + 1] = terreno[1];
            matriz[fila][col + 1] = terreno[2];
            matriz[fila + 1][col + 1] = terreno[3];
            matriz[fila - 2][col + 2] = terreno[4];
            matriz[fila - 1][col + 2] = terreno[5];
            matriz[fila][col + 2] = terreno[6];
            matriz[fila + 1][col + 2] = terreno[7];
            matriz[fila + 2][col + 2] = terreno[8];
            matriz[fila - 3][col + 3] = terreno[9];
            matriz[fila - 2][col + 3] = terreno[10];
            matriz[fila - 1][col + 3] = terreno[11];
            matriz[fila][col + 3] = terreno[12];
            matriz[fila + 1][col + 3] = terreno[13];
            matriz[fila + 2][col + 3] = terreno[14];
            matriz[fila + 3][col + 3] = terreno[15];
        break;

        case noroeste: 
            matriz[fila][col] = terreno[0];
            matriz[fila][col - 1] = terreno[1];
            matriz[fila - 1][col - 1] = terreno[2];
            matriz[fila - 1][col] = terreno[3];
            matriz[fila][col - 2] = terreno[4];
            matriz[fila - 1][col - 2] = terreno[5];
            matriz[fila - 2][col - 2] = terreno[6];
            matriz[fila - 2][col - 1] = terreno[7];
            matriz[fila - 2][col] = terreno[8];
            matriz[fila][col - 3] = terreno[9];
            matriz[fila - 1][col - 3] = terreno[10];
            matriz[fila - 2][col - 3] = terreno[11];
            matriz[fila - 3][col - 3] = terreno[12];
            matriz[fila - 3][col - 2] = terreno[13];
            matriz[fila - 3][col - 1] = terreno[14];
            matriz[fila - 3][col] = terreno[15];
        break;

        case sureste:
            matriz[fila][col] = terreno[0];
            matriz[fila][col + 1] = terreno[1];
            matriz[fila + 1][col + 1] = terreno[2];
            matriz[fila + 1][col] = terreno[3];
            matriz[fila][col + 2] = terreno[4];
            matriz[fila + 1][col + 2] = terreno[5];
            matriz[fila + 2][col + 2] = terreno[6];
            matriz[fila + 2][col + 1] = terreno[7];
            matriz[fila + 2][col] = terreno[8];
            matriz[fila][col + 3] = terreno[9];
            matriz[fila + 1][col + 3] = terreno[10];
            matriz[fila + 2][col + 3] = terreno[11];
            matriz[fila + 3][col + 3] = terreno[12];
            matriz[fila + 3][col + 2] = terreno[13];
            matriz[fila + 3][col + 1] = terreno[14];
            matriz[fila + 3][col] = terreno[15];
        break;

        case noreste:
            matriz[fila][col] = terreno[0];
            matriz[fila - 1][col] = terreno[1];
            matriz[fila - 1][col + 1] = terreno[2];
            matriz[fila][col + 1] = terreno[3];
            matriz[fila - 2][col] = terreno[4];
            matriz[fila - 2][col + 1] = terreno[5];
            matriz[fila - 2][col + 2] = terreno[6];
            matriz[fila - 1][col + 2] = terreno[7];
            matriz[fila][col + 2] = terreno[8];
            matriz[fila - 3][col] = terreno[9];
            matriz[fila - 3][col + 1] = terreno[10];
            matriz[fila - 3][col + 2] = terreno[11];
            matriz[fila - 3][col + 3] = terreno[12];
            matriz[fila - 2][col + 3] = terreno[13];
            matriz[fila - 1][col + 3] = terreno[14];
            matriz[fila][col + 3] = terreno[15];
        break;

        case suroeste:
            matriz[fila][col] = terreno[0];
            matriz[fila + 1][col] = terreno[1];
            matriz[fila + 1][col - 1] = terreno[2];
            matriz[fila][col - 1] = terreno[3];
            matriz[fila + 2][col] = terreno[4];
            matriz[fila + 2][col - 1] = terreno[5];
            matriz[fila + 2][col - 2] = terreno[6];
            matriz[fila + 1][col - 2] = terreno[7];
            matriz[fila][col - 2] = terreno[8];
            matriz[fila + 3][col] = terreno[9];
            matriz[fila + 3][col - 1] = terreno[10];
            matriz[fila + 3][col - 2] = terreno[11];
            matriz[fila + 3][col - 3] = terreno[12];
            matriz[fila + 2][col - 3] = terreno[13];
            matriz[fila + 1][col - 3] = terreno[14];
            matriz[fila][col - 3] = terreno[15];
        break;
        }
}

// casilla nº 3
unsigned char ComportamientoJugador::casillaDerechaBienPosicionado(const vector<vector<unsigned char>>  & mapa_result, Sensores sen){
	unsigned char casilla;
	switch(sen.sentido){
		case norte: 
		casilla=mapa_result[sen.posF -1][sen.posC +1];
		break;
		case noroeste:
		casilla=mapa_result[sen.posF -1][sen.posC];
		break;
		case oeste:
		casilla=mapa_result[sen.posF -1][sen.posC -1];
		break;
		case suroeste:
		casilla=mapa_result[sen.posF ][sen.posC -1];
		break;
        case sur:
		casilla=mapa_result[sen.posF +1][sen.posC -1];
		break;
        case sureste:
		casilla=mapa_result[sen.posF +1][sen.posC];
		break;
        case este:
		casilla=mapa_result[sen.posF +1][sen.posC +1];
		break;
        case noreste:
		casilla=mapa_result[sen.posF][sen.posC +1];
		break;
	}
	return casilla;

}

//casilla nº1
unsigned char ComportamientoJugador::casillaIzquierdaBienPosicionado(const vector<vector<unsigned char>> & mapa_result, Sensores sen){
	unsigned char casilla;
	switch(sen.sentido){
		case norte: 
		casilla=mapa_result[sen.posF -1][sen.posC -1];
		break;
		case noroeste:
		casilla=mapa_result[sen.posF][sen.posC -1];
		break;
		case oeste:
		casilla=mapa_result[sen.posF +1][sen.posC -1];
		break;
		case suroeste:
		casilla=mapa_result[sen.posF +1][sen.posC];
		break;
        case sur:
		casilla=mapa_result[sen.posF +1][sen.posC +1];
		break;
        case sureste:
		casilla=mapa_result[sen.posF][sen.posC +1];
		break;
        case este:
		casilla=mapa_result[sen.posF -1][sen.posC +1];
		break;
        case noreste:
		casilla=mapa_result[sen.posF -1][sen.posC];
		break;
	}
	return casilla;

}

// casilla nº 3
unsigned char ComportamientoJugador::casillaDerechaMalPosicionado(unsigned char **mapa_result, int fila, int columna, Sensores sensores){
	unsigned char casilla;
	switch(current_state.brujula){
		case norte: 
		casilla=mapa_result[fila -1][columna +1];
		break;
		case noroeste:
		casilla=mapa_result[fila -1][columna];
		break;
		case oeste:
		casilla=mapa_result[fila -1][columna -1];
		break;
		case suroeste:
		casilla=mapa_result[fila ][columna -1];
		break;
        case sur:
		casilla=mapa_result[fila +1][columna -1];
		break;
        case sureste:
		casilla=mapa_result[fila +1][columna];
		break;
        case este:
		casilla=mapa_result[fila +1][columna +1];
		break;
        case noreste:
		casilla=mapa_result[fila][columna +1];
		break;
	}
	return casilla;

}

unsigned char ComportamientoJugador::casillaIzquierdaMalPosicionado(unsigned char **mapa_result, int fila, int columna, Sensores sensores){
	unsigned char casilla;
	switch(sensores.sentido){
		case norte: 
		casilla=mapa_result[fila -1][columna -1];
		break;
		case noroeste:
		casilla=mapa_result[fila][columna -1];
		break;
		case oeste:
		casilla=mapa_result[fila +1][columna -1];
		break;
		case suroeste:
		casilla=mapa_result[fila +1][columna];
		break;
        case sur:
		casilla=mapa_result[fila +1][columna +1];
		break;
        case sureste:
		casilla=mapa_result[fila][columna +1];
		break;
        case este:
		casilla=mapa_result[fila -1][columna +1];
		break;
        case noreste:
		casilla=mapa_result[fila -1][columna];
		break;
	}
	return casilla;

}

void ComportamientoJugador::PintarPrecipicios(){

    for (int i = 0; i < tamanio; i++){
        
        for (int j = 0; j < tamanio; j++){

            if((i < 3)  or (j < 3) or (j > (tamanio - 3)) or i > (tamanio - 3)){

                mapaResultado[i][j] = 'P';
            }
        }
        
    }
}

int ComportamientoJugador::numeroPos(unsigned char p, const vector<unsigned char> &terreno){

    int posicionamiento = - 1;
    bool encontrado = false;
    for (int i = 0; i < terreno.size() and !encontrado; i++){
        
        if(terreno[i] == p){

            posicionamiento = i;
            encontrado = true;
        }
    }

    return posicionamiento;
    
}
//En función de la posición de la que quiera ir dentro del campo de visión hacemos las siguientes acciones:
// Casillas 1 4 9 --> turnSL
// Casillas 3 8 15 --> turnSR
// Resto Forward

void ComportamientoJugador::irA(int p){

    if (p == 1 or p == 4 or p == 9){

        actTURN_SL;
    }
    else if (p == 3 or p == 8 or p == 15){

        actTURN_SR;
    }
    else {

        actFORWARD;
    }

}

Action ComportamientoJugador::think(Sensores sensores){

	Action accion = actIDLE;

    encontrado = false;

    

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
                    fil_prov --;
                break;

                case noroeste:
                    current_state.fil --;
                    current_state.col --;
                    fil_prov --;
                    col_prov --;
                break;

                case oeste:
                    current_state.col --;
                    col_prov --;
                break;

                case suroeste:
                    current_state.fil ++;
                    current_state.col --;
                    fil_prov ++;
                    col_prov --;
                break;

                case sur:
                    current_state.fil ++;
                    fil_prov ++;
                break;

                case sureste:
                    current_state.fil ++;
                    current_state.col ++;
                    fil_prov ++;
                    col_prov ++;
                break;

                case este:
                    current_state.col ++;
                    col_prov ++;
                break;

                case noreste:
                    current_state.fil --;
                    current_state.col ++;
                    fil_prov --;
                    col_prov ++;
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

    switch (sensores.nivel){
		
        case 0:
			current_state.fil = sensores.posF;
			current_state.col = sensores.posC;
            current_state.brujula = sensores.sentido;
			bien_situado=true;
		break;

		default:

			if (sensores.terreno[0]=='G' and !bien_situado){
				
                current_state.fil=sensores.posF;
				current_state.col=sensores.posC;
                current_state.brujula = sensores.sentido;
				bien_situado=true;
				current_state.brujula=sensores.sentido;
				int filaResultado=0;
				
			}
		break;

	}

    PintarPrecipicios();

    if(!bien_situado){
		
        PonerPrepint(sensores.terreno, fil_prov, col_prov, current_state.brujula, mapaProvisional);
	}

    if(sensores.reset){

        con_bikini = false;
        con_zapatillas = false;
        bien_situado = false;
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

int p;

if (!bien_situado){

        p = numeroPos('G', sensores.terreno);

        cout << "Mi posición es " << p << endl;

        accion = actFORWARD;

        if (p != -1){

            encontrado = true;
        }

        if (p == 1 or p == 4 or p == 9){

            accion = actTURN_SL;
        }
        if (p == 3 or p == 8 or p == 15){

            accion = actTURN_SR;
        }
}

int z;
if(!con_zapatillas and !encontrado){

    z = numeroPos('K', sensores.terreno);

        cout << "Mi posición es " << z << endl;

        accion = actFORWARD;

        if (z != -1){

            encontrado = true;
        }
        if (z == 1 or z == 4 or z == 9){

            accion = actTURN_SL;
        }
        if (z == 3 or z == 8 or z == 15){

            accion = actTURN_SR;
        }
}

int k;
if(!con_bikini and !encontrado){

    k = numeroPos('K', sensores.terreno);

        cout << "Mi posición es " << k << endl;

        accion = actFORWARD;

        if(k != -1){

            encontrado = true;
        }
        if (k == 1 or k == 4 or k == 9){

            accion = actTURN_SL;
        }
        if (k == 3 or k == 8 or k == 15){

            accion = actTURN_SR;
        }
}


    if (!encontrado){

    if((sensores.terreno[2] == 'T' or sensores.terreno[2] == 'S' or sensores.terreno[2] == 'G' or sensores.terreno[2] == 'K' or 
       sensores.terreno[2] == 'D' or sensores.terreno[2] == 'X' or (sensores.terreno[2] == 'B' and con_zapatillas) or (sensores.terreno[2] == 'A' and con_bikini)) and sensores.superficie[2] == '_'){

        accion = actFORWARD;
    }
    else if((sensores.terreno[0] == 'B' and !con_zapatillas) or (sensores.terreno[0] == 'A' and !con_bikini)){

        accion = actFORWARD;

    }

    else if(!girar_derecha){

        accion = actTURN_BL;
        girar_derecha = (rand()%2 ==0);
    }
    else {

        accion = actTURN_BR;
        girar_derecha = (rand()%2 ==0);
    }

    if (girardoble){
        accion = last_action;
        girardoble = false;
    }
    else{

    if(pasos%50==0 and pasos%12==0){
		pasos=0;
		if (rand()%2==0){
		accion=actTURN_SR;
        
		}else{
		accion=actTURN_SL;
		}
        girardoble = true;
	}

	if(pasos%35==0 and pasos%21==0){
		if (rand()%2==0){
		accion=actTURN_SL;
		}else{
		accion=actTURN_SR;
		}
        girardoble = true;
	}
            

    if(bien_situado and last_action!=actTURN_SR and last_action!=actTURN_SL){

            
        if(sensores.terreno[3]== 'M' and casillaDerechaBienPosicionado(mapaResultado,sensores)!='M' and sensores.terreno[2] == 'M'){
            accion=actTURN_SR;
            der_muro = true;
        }
        else if(sensores.terreno[1]=='M' and casillaIzquierdaBienPosicionado(mapaResultado,sensores)!='M' and sensores.terreno[2] == 'M'){
            accion=actTURN_SL;
            der_muro = false;
        }
        girardoble = true;
    }

    if (sensores.terreno[2] != 'M')
    {
        accion = actFORWARD;
    }
    
    if(sensores.terreno[1] != 'M' and sensores.terreno[3] != 'M'){

        if(der_muro){

            accion = actTURN_SL;
        }
        else{

            accion = actTURN_SR;
        }
    }
    }
    

	if(!bien_situado){
		if(sensores.terreno[2]=='G'){
			accion=actFORWARD;
		}
        else if(casillaDerechaMalPosicionado(mapaProvisional,fil_prov, col_prov, sensores)=='G'){
			accion=actTURN_BR;
		}
        else if(casillaIzquierdaMalPosicionado(mapaProvisional,fil_prov, col_prov, sensores)=='G'){
			accion=actTURN_BL;
		}
	}

    
    }
    last_action = accion;
	return accion;
}

int ComportamientoJugador::interact(Action accion, int valor){
  
  return false;
}