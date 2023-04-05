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

    PintarPrecipicios();

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
       sensores.terreno[2] == 'D' or (sensores.terreno[2] == 'B' and con_zapatillas) or (sensores.terreno[2] == 'A' and con_bikini)) and sensores.superficie[2] == '_'){

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
    
    }
    last_action = accion;
	return accion;
}

int ComportamientoJugador::interact(Action accion, int valor){
  
  return false;
}