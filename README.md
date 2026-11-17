# Gestión de empleados de una red hospitalaria (C++)

Proyecto académico de programación orientada a objetos en C++. Modela al personal de un hospital (médicos, enfermeros y administrativos), sus turnos y el cálculo de salarios.

**Estado:** en desarrollo. Las clases de empleados están hechas; faltan completar la clase `Hospital` y el programa principal.

## Qué practica

- **Herencia y polimorfismo:** clase abstracta `Empleado` con el método virtual puro `calcularSalario()`, implementado de forma distinta en `Medico`, `Enfermero` y `Administrativo`.
- **Plantillas:** clase genérica `Turno<T>` para emparejar dos empleados, con una especialización completa para `Turno<Administrativo>`.
- **Sobrecarga de operadores:** `<<` para imprimir, `+` para combinar médicos y `>` para comparar salarios.
- **Punteros inteligentes:** el hospital guarda su plantilla como `std::vector<std::shared_ptr<Empleado>>`.
- **Excepciones:** validación de horas y niveles de acceso, y una excepción propia (`Horas_invalidas_expetion`).

## Estructura

| Archivo | Contenido |
| --- | --- |
| `Empleado.h` | Clase base abstracta |
| `Medico.h`, `Enfermero.h`, `Administrativo.h` | Tipos de empleado y su cálculo de salario |
| `Turno.h`, `Turno_Administrativo.h` | Plantilla de turnos y su especialización |
| `Hospital.h` | Gestión de la plantilla (en desarrollo) |
| `Horas_invalidas_expetion.h` | Excepción propia |

Proyecto de Visual Studio (`.slnx`). Autor: Diego Harraka, Universidad Nebrija.
