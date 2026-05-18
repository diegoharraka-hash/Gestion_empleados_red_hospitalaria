#pragma once
#include <iostream>
#include "Empleado.h"
#include "Turno.h"
#include <vector>

class Hospital
{
private:
	std::vector <std::shared_ptr<Empleado>> plantilla;

public:
	Hospital(std::vector <std::shared_ptr<Empleado>> plantilla) : plantilla(plantilla) {

	}

	void contratar(std::shared_ptr<Empleado> e) {
		plantilla.push_back(e);
	}
	void mostarPlantilla() {
		for (int i = 0; i< plantilla.size(); i++) {
			plantilla[i];
		}


	}
	friend std::ostream& operator << (std::ostream& os, const Hospital& e) {
		os << e.plantilla << 

	}
};

