#pragma once 
#include "Empleado.h"
#include <stdexcept>
#include <iostream>

class Administrativo : public Empleado {

private :
	std::string departamento;
	int nivel_acceso;

public:
	Administrativo(std::string nombre, int id, int h_trabajadas, std::string departamento, int nivel_acceso) : Empleado(nombre, id, h_trabajadas), departamento(departamento), nivel_acceso(nivel_acceso) {
		if (nivel_acceso > 3) {
			throw std::runtime_error("Error");
		}
	}

	std::string getDepartamento() const {
		return departamento;
	}

	int getNivelAcceso() const {
		return nivel_acceso;
	}

	void setDepartamento(std::string departamento) {
		this->departamento = departamento;
	}

	void setNivelAcceso(int nivel_acceso) {
		if (nivel_acceso > 3) {
			throw std::runtime_error("Error");

		}
		this->nivel_acceso = nivel_acceso;
	}
	double calcularSalario() const override {
		return h_trabajadas * 18 * nivel_acceso;
	}






};


