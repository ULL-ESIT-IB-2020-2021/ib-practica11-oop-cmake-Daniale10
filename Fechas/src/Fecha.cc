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


#include "Fecha.h"

Fecha::Fecha(int day, int month, int year){
    day_ = day;
    month_ = month;
    year_ = year;
}

void Fecha::ShowDate(){
   std::cout << "Es el dia" << day_ << "Del mes" << month_ << "Del anio" << year_ << std::endl;
}

void Fecha::nextDays(){ //esta función tiene la función de pasar de mes si el día es 31, 30, 29 o 28.
    ++day_;
    if(day_ > 31 && (month_ == 1 || month_ == 3 || month_ == 5 || month_ == 7 || month_ == 10 || month_ == 12)){
        day_ =1;
        ++month_;
    }
    if(day_ > 30 && (month_ == 4 || month_ == 6 || month_ == 9 || month_ == 11)){
        day_ = 1;
        ++month_;
    }
    if(day_ > 29 && month_ == 2 && ((year_ % 4 == 0 && year_ % 100 !=0) || year_ % 400 ==0)){
        day_ = 1;
        ++month_;
    }
    if(day_ > 28 && month_ == 2 && (year_ % 4 != 0 || (year_ % 400 != 0 && year_ % 100 == 0))){
        day_ = 1;
        ++month_;
    }
    if(month_ > 12){
        month_ =1;
        ++year_;
    }
}

void Fecha::Leap_year(){
    if(year_%4 == 0 && year_%100 !=0 || year_%400 == 0) {
        std::cout << "This year is a leap-year" << std::endl;
    }else{
        std::cout << "This year is not a leap-year" <<std::endl;
    }
 return;
}

void Usage(int argc, char *argv[]){
  if (argc != 2) {
     std::cout << argv[0] << "Puebe con './fehas 20 06 2002'" <<std::endl;
     std::cout << "Pruebe" << argv[0] << "--help para más información" <<std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

   