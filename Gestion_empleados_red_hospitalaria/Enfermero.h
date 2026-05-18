#pragma once
#include "Empleado.h"
#include <iostream>
class Enfermero : public Empleado
{
private:
	std::string planta_asignada;
	bool turno_noche;

public:
	Enfermero(std::string nombre, int id, int horas_trabajadas, std::string planta_asignada, bool turno_noche) : Empleado(nombre, id, horas_trabajadas), planta_asignada(planta_asignada), turno_noche(turno_noche) {

	}

	std::string getPlantaA() const {
		return planta_asignada;

	}
	bool getTurnonoche() const {
		return turno_noche;
	}

	void setPlantaA(std::string planta_asignada) {
		this->planta_asignada = planta_asignada;
	}

	void setTurnoNoche(bool turno_noche) {
		this->turno_noche = turno_noche;
	}
	double  calcularSalario() const override {
		return h_trabajadas * 22 + (turno_noche ? 300 : 0);
	}
};

