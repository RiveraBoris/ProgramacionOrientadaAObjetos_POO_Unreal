#include <iostream>
using namespace std;

bool EsTrio(int d1, int d2, int d3);
bool EsEscalera(int d1, int d2, int d3);
int CalcularPuntaje(int d1, int d2, int d3);
void ImprimirMarcador(int ronda, int puntosRonda, int puntosAcumulados);
void JugarPartida(int cantidadRondas);

int main() {

    int cantidadRondas;

    cout << "\n Bienvenido al Juego Mini-Cacho" << endl;
    cout << " Ingrese la cantidad de rondas que desea jugar:  ";
    cin >> cantidadRondas;

    JugarPartida(cantidadRondas);

    return 0;
}

void JugarPartida(int cantidadRondas){

    int puntajeTotal = 0;

    for(int ronda = 1; ronda <= cantidadRondas; ronda++){

        int d1, d2, d3;

        cout << "\nRonda " << ronda << endl;
        cout << "Ingrese los 3 dados ordenados (d1 <= d2 <= d3): ";
        cin >> d1 >> d2 >> d3;

        int puntosRonda = CalcularPuntaje(d1, d2, d3);

        puntajeTotal += puntosRonda;

        ImprimirMarcador(ronda, puntosRonda, puntajeTotal);
    }

    cout << "\nJuego terminado. Puntaje final: " << puntajeTotal << endl;
}

bool EsTrio(int d1, int d2, int d3){
    return (d1 == d2 && d2 == d3);
}

bool EsEscalera(int d1, int d2, int d3){
    return (d2 == d1 + 1 && d3 == d2 + 1);
}

int CalcularPuntaje(int d1, int d2, int d3){

    if(EsTrio(d1, d2, d3)){
        return 50;
    }
    else if(EsEscalera(d1, d2, d3)){
        return 25;
    }
    else{
        return d1 + d2 + d3;
    }
}

void ImprimirMarcador(int ronda, int puntosRonda, int puntosAcumulados){

    cout << "Ronda " << ronda
         << " | Puntos ganados: " << puntosRonda
         << " | Total acumulado: " << puntosAcumulados << endl;
}