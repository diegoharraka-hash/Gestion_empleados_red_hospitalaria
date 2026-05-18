#pragma once
#include <iostream>
template <typename T>

class Turno {
private:
	T empleado1;
	T empleado2;

public:
	Turno(T empleado1, T empleado2) : empleado1(empleado1), empleado2(empleado2) {

	 }

	T getEmpleado1() const {
		return empleado1;
	}
	T getEmpleado2() const {
		return empleado2;
	}
	void setEmpleado1(T empleado1) {
		this->empleado1 = empleado1;
	}
	void setEmpleado2(T empleado2) {
		this->empleado2 = empleado2;
	}

	void asignar(T empleado1 , T empleado2) { // metodo asignar 
		this->empleado1 = empleado1;
		this->empleado2 = empleado2;

	}
	void mostrar() { // utilizamos el metodo mostrar atravez del puntero * el cual accede al contenido de esos atributos 
		std::cout << *this << std::endl;
	}
	void intercambiar() { // con swap intercambiamos la posicion de los empleados 
		std::swap(this->empleado1, this->empleado2);
	}

};