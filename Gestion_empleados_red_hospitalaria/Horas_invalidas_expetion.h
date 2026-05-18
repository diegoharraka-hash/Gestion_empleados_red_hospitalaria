#pragma once
#include <stdexcept>

class Horas_invalidas_expetion : public std:: exception
{
protected :
	std::string mensaje;

public:

	Horas_invalidas_expetion(std::string mensaje) : mensaje(mensaje) {

	}

	const char* what() const noexcept override {
		return mensaje.c_str(); // transforma el string a constchar*
	}




};

