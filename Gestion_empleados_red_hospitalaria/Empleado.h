#pragma once
#include <iostream>
#include <stdexcept>
class Empleado
{
protected:
	std::string nombre;
	int id;
	int h_trabajadas;

public:
	Empleado(std::string nombre, int id , int h_trabajadas) : nombre(nombre), id(id) , h_trabajadas (h_trabajadas) {

	}

	std::string getNombre() const {
		return nombre;
	}

	int  getID() const {
		return id;
	}
	int getHoras() const {
		return h_trabajadas;
	}


	void setnombre(std::string nombre) {
		this->nombre = nombre;
	}

	void setID(int id) {
		this->id = id;
	}
	void setHoras(int h_trabajadas) {
		this->h_trabajadas = h_trabajadas;
	}
	friend std::ostream& operator << (std::ostream& os, const Empleado& miempleado ) {
		os << "Nombre" << miempleado.nombre;
		os << "ID" << miempleado.id;
		os << "Horas trabajadas" << miempleado.h_trabajadas;

		return os;


	}

	
	void registarHoras(int horas) {
		if (horas < 0 || horas > 300) {
			throw std::invalid_argument("Error");
		}
	}


	virtual double calcularSalario() const  = 0;

	virtual ~Empleado();

	

	



	



};
bool operator > (const std::shared_ptr<Empleado>& a, const std::shared_ptr<Empleado>& b) { // compara el salario de dos empelados haciendo el uso del shared_ptr

	return a->calcularSalario() >  b->calcularSalario();
}
