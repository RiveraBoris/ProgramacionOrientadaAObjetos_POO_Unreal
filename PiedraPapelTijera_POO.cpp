#include <iostream>
using namespace std;

class Jugador
{
private:
    short jugada;

public:
    int puntaje;

    short getJugada(){return jugada;}
    void setJugada(short newJugada){jugada = newJugada;}
};
void leerJugada(Jugador &j, string nombre)
{
    short op;
    cout << nombre << " Ingrese una opcion: ";
    cin >> op;
    j.setJugada(op);
}
short evaluar(short op1, short op2)
{
    if(op1 == op2){
        return 0;
    }

    if((op1 == 1 && op2 == 3) || (op1 == 2 && op2 == 1) || (op1 == 3 && op2 == 2))
    {
        return 1;
    }

    return -1;
}
string traducir(short op)
{
    switch(op)
    {
        case 1: return "()";  
        case 2: return "[]";   
        case 3: return "8<";   
        default: return "Opcion Invalida.........";
    }
}
void imprimir(Jugador j1, Jugador j2, short resp)
{
    string jug1 = traducir(j1.getJugada());
    string jug2 = traducir(j2.getJugada());
    cout << endl;
    cout << jug1 << " VS " << jug2 << endl;

    if(resp == 0){
        cout << "EMPATE" << endl;
    }
    else if(resp == 1){
        cout << "GANO EL JUGADOR 1" << endl;
    }
    else{
        cout << "GANO EL JUGADOR 2" << endl;
    }
    cout << endl;
    cout << "[ESTADO ACTUAL]" << endl;
    cout << "Puntaje J1: " << j1.puntaje << endl;
    cout << "Puntaje J2: " << j2.puntaje << endl;
}

int main(){

    Jugador j1;
    Jugador j2;
    short resp;

    j1.puntaje = 0;
    j2.puntaje = 0;

    leerJugada(j1, "P1");
    leerJugada(j2, "P2");

    resp = evaluar(j1.getJugada(), j2.getJugada());

    if(resp == 1){
        j1.puntaje++;
    }
    else if(resp == -1){
        j2.puntaje++;
    }

    imprimir(j1, j2, resp);

    return 0;
}

