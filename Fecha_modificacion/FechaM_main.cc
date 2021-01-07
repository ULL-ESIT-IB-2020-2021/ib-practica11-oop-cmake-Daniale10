/**
 * Universidad de La Laguna
 * Escuela Superior de Ingenieria y Tecnologia
 * Grado en Ingenieria Informatica
 * Asignatura: Informatica Basica 
 * Curso: 1
 * @title Practica 11 - Cmake
 * @file Desarrolle una clase Fecha que permita representar y gestionar fechas.
 *  Incorpore en la clase los miembros de datos y métodos que considere adecuados para la finalidad que se persigue en este ejercicio.
 *  Incluya un método que permita determinar si el año correspondiente a una fecha es un año bisiesto o no.
 * @author Daniel Alejandro Alvarez Casablanca <alu0101391731@ull.edu.es>
 * @copyright Daniel Alejandro Alvarez Casablanca
 * @see https://github.com/ULL-ESIT-IB-2020-2021/ib-practica11-oop-cmake-Daniale10
 * 
 */

#include <iostream>
#include <istream>
#include <ostream>
#include <string>
#include <vector>
#include <fstream>
#include "FechasM.h"



int main(int argc, char *argv[])
{
   if (argc != 6)
  {
    std::cout << "Modo de uso: debe poner una fecha un numero y un nombre de archivo txt de esta manera: dia mes anio numerodeinteracciones archivo.txt" <<std::endl;
    std::cout << "El número de argumentos debe ser 5." << std::endl;
    exit(-1);
  }else{
      std::ofstream file;
      file.open(argv[5], std::ios::out);

      int Ninteractions = std::stoi(argv[4]);
      Fecha Date_1(std::stoi(argv[1]), std::stoi(argv[2]), std::stoi(argv[3]));
      Date_1.setFecha(std::stoi(argv[1]), std::stoi(argv[2]), std::stoi(argv[3]));
      for(int i=0; i<=Ninteractions; i++){
          Date_1.nextDays();
          file << Date_1.getDay() << "/" << Date_1.getMonth() << "/" << Date_1.getYear() << std::endl;
      }
    
     file.close();
    }
    

}