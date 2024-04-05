#ifndef TRABAJADOR_H_INCLUDED
#define TRABAJADOR_H_INCLUDED

#include <iostream>
#include <string>

class Trabajador {
private:
    int codigo;
    std::string nombre;
    std::string apellido;
    float sueldoMensual;
    float descuentoIsss;
    float descuentoAfp;
    float descuentoIsr;
    float totalPagar;

    void calcular() {

        (this->sueldoMensual > 0 && this->sueldoMensual <= 1000) ?
            this->descuentoIsss = this->sueldoMensual * 0.03 : this->descuentoIsss = 30;

        (this->sueldoMensual > 0 && this->sueldoMensual <= 7500) ?
            this->descuentoAfp = this->sueldoMensual * 0.0725 : this->descuentoAfp = 543.75;

        float ri = this->sueldoMensual - this->descuentoIsr - this->descuentoAfp;

        if (ri > 0 && ri <= 472) {
            this->descuentoIsr = 0;
        } else {
            if (ri > 472 && ri <= 895.24) {
                this->descuentoIsr = (ri - 472) * 0.1 + 17.67;
            } else {
                if (ri > 895.24 && ri <= 2038.1) {
                    this->descuentoIsr = (ri - 895.24) * 0.2 + 60;
                } else {
                    this->descuentoIsr = (ri - 2038.1) * 0.3 + 288.57;
                }
            }
        }

        this->totalPagar = this->sueldoMensual - (this->descuentoIsss + this->descuentoAfp + this->descuentoIsr);
    }

public:
    // Constructores
    Trabajador() {
        this->codigo = 0;
        this->sueldoMensual = 0;
        this->descuentoAfp = 0;
        this->descuentoIsss = 0;
        this->descuentoIsss = 0; // Corregido: debe ser descuentoIsr
        this->totalPagar = 0;
    }

    Trabajador(int c, std::string n, std::string a, float sm) {
        this->codigo = c;
        this->nombre = n;
        this->apellido = a;
        this->sueldoMensual = sm;
        this->calcular();
    }

    // Métodos de acceso
    int getCodigo() {
        return this->codigo;
    }

    std::string getNombre() {
        return this->nombre;
    }

    std::string getApellido() {
        return this->apellido;
    }

    float getSueldoMensual() {
        return this->sueldoMensual;
    }

    float getDescuentoIsss() {
        return this->descuentoIsss;
    }

    float getDescuentoAfp() {
        return this->descuentoAfp;
    }

    float getDescuentoIsr() {
        return this->descuentoIsr;
    }

    float getTotalPagar() {
        return this->totalPagar;
    }
};

#endif // TRABAJADOR_H_INCLUDED
