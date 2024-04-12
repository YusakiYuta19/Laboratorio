#include "OSOSx.h"
#include <iostream>

OSOSx::OSOSx() {
    _osx_titulo = "macOS Catalina";
    _osx_area_trabajo = "No hay nada en el area de trabajo";
    _osx_estado = "macOS activado";
}

OSOSx::~OSOSx() {
}

void OSOSx::PintarOsx() {
    DibujarSimboloOSX('#', 80, true);
    DibujarSimboloOSX('#', 1, false);
    CentrarTextOSX(_osx_titulo);
    DibujarSimboloOSX('#', 1, true);
    DibujarSimboloOSX('#', 80, true);

    for (int e = 0; e < 6; e++) {
        DibujarSimboloOSX('#', 1, false);
        DibujarSimboloOSX(' ', 78, false);
        DibujarSimboloOSX('#', 1, true);

        if (e == 2) {
            DibujarSimboloOSX('#', 1, false);
            CentrarTextOSX(_osx_area_trabajo);
            DibujarSimboloOSX('#', 1, true);
        }
    }

    DibujarSimboloOSX('#', 80, true);
    DibujarSimboloOSX('#', 1, false);
    CentrarTextOSX(_osx_estado);
    DibujarSimboloOSX('#', 1, true);
    DibujarSimboloOSX('#', 80, true);
}

void OSOSx::DibujarSimboloOSX(char simbolo, int limite, bool saltarLinea) {
    for (int i = 0; i < limite; i++) {
        std::cout << simbolo;
    }

    if (saltarLinea) {
        std::cout << std::endl;
    }
}

void OSOSx::CentrarTextOSX(std::string texto) {
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




