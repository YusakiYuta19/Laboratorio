#include <iostream>
#include "OSWindows.h"
#include "OSLinux.h"
#include "OSOSx.h"

using namespace std;

int main()
{
    int opcion;
    cout << "Seleccione el sistema operativo a mostrar:" << endl;
    cout << "1. Windows" << endl;
    cout << "2. Linux" << endl;
    cout << "3. macOS" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1: {
            OSWindows _win;
            _win.PintarWindow();
            break;
        }
        case 2: {
            OSLinux linuxOS;
            linuxOS.PintarLinux();
            break;
        }
        case 3: {
            OSOSx macOs;
            macOs.PintarOsx();
            break;
        }
        default: {
            cout << "Opción no válida." << endl;
            break;
        }
    }

    return 0;
}

