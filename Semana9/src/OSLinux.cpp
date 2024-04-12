#include "OSLinux.h"
#include <iostream>

OSLinux::OSLinux() {
    _lin_titulo = "Ubuntu Linux 20.04 LTS";
    _lin_area_trabajo = "No hay nada en el area de trabajo";
    _lin_estado = "Sistema operativo Linux activado";
}

OSLinux::~OSLinux() {
}

void OSLinux::PintarLinux() {
    DibujarSimboloLX('#', 80, true);
    DibujarSimboloLX('#', 1);
    CentrarTextoLX(_lin_titulo);
    DibujarSimboloLX('#', 1, true);
    DibujarSimboloLX('#', 80, true);

    for (int e = 0; e < 6; e++) {
        DibujarSimboloLX('#', 1);
        DibujarSimboloLX(' ', 78);
        DibujarSimboloLX('#', 1, true);

        if (e == 2) {
            DibujarSimboloLX('#', 1);
            CentrarTextoLX(_lin_area_trabajo);
            DibujarSimboloLX('#', 1, true);
        }
    }

    DibujarSimboloLX('#', 80, true);
    DibujarSimboloLX('#', 1);
    CentrarTextoLX(_lin_estado);
    DibujarSimboloLX('#', 1, true);
    DibujarSimboloLX('#', 80, true);
}

void OSLinux::DibujarSimboloX(char simbolo, int limite, bool saltarLinea) {
    for (int i = 0; i < limite; i++) {
        std::cout << simbolo;
    }

    if (saltarLinea) {
        std::cout << std::endl;
    }
}

void OSLinux::DibujarSimboloLX(char simbolo, int limite, bool _saltarlineaLX) {
    for (int i = 0; i < limite; i++) {
        std::cout << simbolo;
    }

    if (_saltarlineaLX) {
        std::cout << std::endl;
    }
}

void OSLinux::CentrarTextoLX(std::string texto) {
    int longitudTexto = texto.length();
    int espacio = (78 - longitudTexto) / 2;
    int residuo = (78 - longitudTexto) % 2;

    for (int i = 0; i < espacio; i++) {
        std::cout << " ";
    }

    std::cout << texto;

    for (int i = 0; i < espacio + residuo; i++) {
        std::cout << " ";
    }
}
