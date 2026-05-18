#pragma once
#include "Empleado.h"
class Medico : public Empleado {
private:
	std::string especialidad;
	int n_consultas;
	

public:
	Medico(std::string nombre, int id,int h_trabajadas ,  std::string especialidad, int n_consultas ) : Empleado(nombre, id , h_trabajadas), especialidad(especialidad), n_consultas(n_consultas)  {

	}
	std::string getEspecialidad() const { // geters 
		return especialidad;
	}

	int getNconsultas() const {  
		return n_consultas;
	}
	

	void setNconsultas(int n_consultas) { // setters 
		this->n_consultas = n_consultas;
	}

	void setEspecialidad(std::string especialidad) {
		this->especialidad = especialidad;
	}
	

	double calcularSalario() const override { // Funcion virtual pura con override 

		return h_trabajadas * 35 + n_consultas * 50;
		
	}
	~Medico() override; // destructor

	Medico operator + (const Medico& otros) { // operator +, el cual crea a un nuevo medico con las mismos parametros, exepto el nombre y las nuevas consultas 
		std::string nuevo_nombre = this->nombre + otros.nombre;
		int nuevo_n_consultas = this->n_consultas  + otros.n_consultas;

		return Medico(nuevo_nombre, this->id, this->h_trabajadas, this->especialidad, nuevo_n_consultas);

	}

};


