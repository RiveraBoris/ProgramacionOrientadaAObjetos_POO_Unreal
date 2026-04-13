#include <iostream>
using namespace std;

class CuentaBancaria{

private:
    int id;
    string nroCuenta;
    double saldo;

public:
    string propietario;

    CuentaBancaria(int id, string nro, string prop)
    {
        this->id = id;
        this->nroCuenta = nro;
        this->propietario = prop;
        saldo = 0.0;
    }

    void depositar(double monto)
    {
        if(monto > 0.0)
        {
            saldo = saldo + monto;
            cout<<"Deposito realizado correctamente."<<endl;
        }
        else{
            cout<<"Error: No se procesan montos negativos o nulos"<<endl;
        }
    }

    bool retirar(double monto)
    {
        if(monto <= 0)
        {
            cout<<"Error: El monto debe ser positivo"<<endl;
            return false;
        }

        if(monto > saldo)
        {
            cout<<"Error: El monto excede el saldo disponible"<<endl;
            return false;
        }

        saldo = saldo - monto;
        cout<<"Retiro confirmado"<<endl;
        return true;
    }

    void transferir(CuentaBancaria &destino, double monto)
    {
        if(this == &destino)
        {
            cout<<"Error: No se puede transferir a la misma cuenta"<<endl;
            return;
        }

        if(retirar(monto))
        {
            destino.depositar(monto);
            cout<<"Transferencia completada con exito"<<endl;
        }
        else
        {
            cout<<"Transferencia cancelada"<<endl;
        }
    }

    void verEstado()
    {
        cout<<"Cuenta: "<<nroCuenta<<endl;
        cout<<"Titular: "<<propietario<<endl;
        cout<<"Saldo Actual: $"<<saldo<<endl;
        cout<<"-------------------------"<<endl;
    }
};

int main(){
 
    CuentaBancaria cuentaA(1,"001","Juan Perez");
    CuentaBancaria cuentaB(2,"002","Maria Lopez");

    cuentaA.depositar(1000);

    cuentaA.retirar(2000);

    cuentaA.transferir(cuentaB,450);

    cout<<endl<<"ESTADO FINAL"<<endl;

    cuentaA.verEstado();
    cuentaB.verEstado();

    return 0;
}