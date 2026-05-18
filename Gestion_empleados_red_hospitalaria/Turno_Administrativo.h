#pragma once
#include <iostream>
#include "Administrativo.h"
#include "Turno.h"

template <>
class Turno<Administrativo> {
private:
    Administrativo empleado1;
    Administrativo empleado2;

public:
    Turno(Administrativo empleado1, Administrativo empleado2)
        : empleado1(empleado1), empleado2(empleado2) {
    }

    Administrativo getEmpleado1() const { return empleado1; }
    Administrativo getEmpleado2() const { return empleado2; }

    void setEmpleado1(Administrativo e) { this->empleado1 = e; }
    void setEmpleado2(Administrativo e) { this->empleado2 = e; }

    void asignar(Administrativo e1, Administrativo e2) {
        this->empleado1 = e1;
        this->empleado2 = e2;
    }

    void mostrarTurno() const {
        std::cout << *this << std::endl;
    }

    void intercambiar() {
        std::swap(this->empleado1, this->empleado2);
    }

    // Advertencia si tienen el mismo nivel de acceso
    void verificarNivelAcceso() const {
        if (empleado1.getNivelAcceso() == empleado2.getNivelAcceso()) {
            std::cout << "Advertencia: ambos administrativos tienen el mismo nivel de acceso.\n";
        }
    }

    friend std::ostream& operator<<(std::ostream& os, const Turno<Administrativo>& e) {
        os << " " << e.Empleado1;
        os << e.empleado2 << " ";
        return os;
    }
};