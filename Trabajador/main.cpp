#include <iostream>
using namespace std;
#include <stdlib.h>
#include "Trabajador.h"
#define TAM 5
int menu(){
    int op;
    cout << "MENU DE OPCIONES" << endl;
    cout << "Agregar empleado\n" << endl;
    cout << "Mostrar planilla\n" << endl;
    cout << "Salir\n" << endl;
    cin >> op;
    return op;

}
Tabajador agregarEmpleado(){
    int c;
    string n,a;
    float sm;
    cout << "Digite el codigo: " << endl;
    cin >> c;
    cout << "Digite el Nombre: " << endl;
    cin >> n;
    cout >> "Digite el Apellido: " << endl;
    cin >> a;
    cout << "Digite el Sueldo Mensual: " << endl;
    cin >> sm;
    Tabajador tb(c,n,a,sm);
    return tb;
}
void mostrarPlantilla(Trabajador lst[], int c){
    if(c==0)
        cout << "La plantilla esta vacia\n" << endl;
        else{
            cout << "Cod\tNombre\tApellido\tSueldoM\tTotal Pagar\n" << endl;
            for (int x=0; x<c; x++){
                cout << lst[x].getCodigo() << "\t" << endl;
                cout << lst[x].getNombre() << "\t" << endl;
                cout << lst[x].getApellido() << "\t\t" << endl;
                cout << lst[x].getSueldoMensual() << "\t" << endl;
                cout << lst[x].getTotalPagar() << "\n" << endl;
            }
        }
}
int main()
{
    int opc;
    Trabajador Planilla[TAM];
    int cont = 0;
    do {
        system("cls");
        opc = menu();
        switch(opc) {
        case 1:
            if (cont < TAM){
                Planilla[cont] = agregarEmpleado();
                cont++;
                cout << "El empleado se agrego con exito\n" << endl;
            }
            else{
                cout << "la planilla esta llena\n" << endl;
            }
            break;
        case 2:
            mostrarPlantilla(Planilla, cont);
            break;
        case 3:
            cout << "Saliendo del programa\n" << endl;
            break;
        default:
            cout << "Opción no válida. Por favor, seleccione una opción válida." << endl;
            break;
        }
    }
    system ("pause");
    while (opc!=3);
    return 0;
}
