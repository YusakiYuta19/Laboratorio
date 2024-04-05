#include "OSWindows.h"
#include <iostream>
#include <cstring>

OSWindows::OSWindows() {
    // Inicializar las variables miembro en el constructor
    strcpy_s(_win_titulo, "Microsoft Windows 2016");
    strcpy_s(_win_area_trabajo, "No hay nada en el area de trabajo");
    strcpy_s(_win_estado, "Windows no ha sido activado todavia");
}

OSWindows::~OSWindows() {
    // Destructor, si es necesario
}

void OSWindows::PintarWindow() {
    // Dibujamos la barra de título
    DibujarSimbolo('*', 80, true);
    DibujarSimbolo('*', 1);
    CentrarTexto(_win_titulo);
    DibujarSimbolo('*', 1, true);
    DibujarSimbolo('*', 80, true);

    // Dibujamos el área de trabajo
    for (int e = 0; e < 10; e++) {
        DibujarSimbolo('*', 1);
        DibujarSimbolo(' ', 78);
        DibujarSimbolo('*', 1, true);
        // Cuando llegamos a la fila 5, escribimos el contenido del área de trabajo
        if (e == 5) {
            DibujarSimbolo('*', 1);
            CentrarTexto(_win_area_trabajo);
            DibujarSimbolo('*', 1, true);
        }
    }

    // Dibujamos la barra de estado
    DibujarSimbolo('*', 80, true);
    DibujarSimbolo('*', 1);
    CentrarTexto(_win_estado);
    DibujarSimbolo('*', 1, true);
    DibujarSimbolo('*', 80, true);
}

void OSWindows::DibujarSimbolo(char _simbolo, int _limite, bool _saltarlinea) {
    // Dibujamos el símbolo
    for (int e = 0; e < _limite; e++) {
        std::cout << _simbolo;
    }
    if (_saltarlinea) {
        std::cout << std::endl;
    }
}

void OSWindows::CentrarTexto(char* _ptexto) {
    // Centramos el texto
    int k, n, r;
    n = strlen(_ptexto);
    k = (78 - n) / 2;
    r = (78 - n) % 2;
    for (int i = 0; i < k; i++) {
        std::cout << ' ';
    }
    std::cout << _ptexto;

    for (int i = 0; i < k + r; i++) {
        std::cout << ' ';
    }
}

