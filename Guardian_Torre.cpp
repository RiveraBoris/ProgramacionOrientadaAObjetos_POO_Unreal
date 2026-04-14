#include <iostream>
using namespace std;

class Torre{
    private:

    int fila;
    int columna;
    bool esNegra;

    bool validarMovimiento(int nFila, int nCol)
    {
        if(fila == nFila || columna == nCol)
        {
            return true;
        }
        return false;
    }

    public:
    Torre(bool color, int f, int c){
        esNegra = color;
        fila = f;
        columna = c;

    }
    string dibujar(){
        if(esNegra){
            return "[##]";
        }
        else{
            return "[TT]";
        }
    }
    void mover(int nFila, int nCol){
        cout << "PROCESANDO.............." << endl;
        if(nFila < 1 || nFila >8 || nCol < 1 || nCol > 8){
            cout<<"Error: Movimiento fuera del tablero.....";
        }
        if(validarMovimiento(nFila, nCol))
        {
            fila = nFila;
            columna =nCol;
            cout<<"MOVIMIENTO EXITOSO: "<<dibujar()<<" se ha desplazado."<<endl;
        }
        else{
            cout<<"Error: Movimiento diagonal no permitido para la Torre......."<<endl;
        }
        
    }
    void imprimirEstado()
    {
        cout<<dibujar();
        if(esNegra)
        {
            cout<<"Negra ";
        }
        else{
            cout<<"Blnca ";
        }
        cout<<"en Fila: "<<fila<<", Columna: "<<columna<<endl;
    }   

};

int main (){

    int nFila, nCol;

    Torre t1(false, 1, 1);
    Torre t2(true, 8, 8);

    cout<<"================================================="<<endl;
    cout<<"           SISTEMA DE CONTROL: TORRE             "<<endl;
    cout<<"================================================="<<endl;

    cout<<"[ESTADO ACTUAL DEL TABLERO]"<<endl;

    cout<<"Pieza 1: ";
    t1.imprimirEstado();
    cout<<"Pieza 2: ";
    t2.imprimirEstado();

    cout<<"--------------------------------------------------"<<endl;
    cout<<"MOVIMIENTO: Torre Blanca [TT] "<<endl;
    cout<<"--------------------------------------------------"<<endl;

    cout<<"Imgrese nueva Fila: (1-8): ";
    cin>>nFila;
    cout<<"Imgrese nueva Columna: (1-8): ";
    cin>>nCol;

    t1.mover(nFila, nCol);
    cout<<"---------------------------------------------------"<<endl;
    cout<<"[NUEVO ESTADO DEL TABLERO]"<<endl;

    cout<<"Pieza 1: ";
    t1.imprimirEstado();
    cout<<"Pieza 2: ";
    t2.imprimirEstado();
    cout<<"===================================================="<<endl;

    return 0;
}