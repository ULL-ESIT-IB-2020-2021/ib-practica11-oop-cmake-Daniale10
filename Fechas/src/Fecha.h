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

#ifndef FECHA_H
#define FECHA_H
#include <iostream>
#include <vector>
#include <ostream>
#include <string>
#include <vector>
#include <fstream>


class Fecha{
    private:
      int day_ = 0;                
      int month_ = 0;
      int year_ = 0;

    public: 
      Fecha() = default; 
      Fecha(int , int , int);
      void ShowDate();
      void Leap_year();
      void nextDays();
      int getDay() { return day_; }
      int getMonth() { return month_; }
      int getYear() { return year_; }

};
#endif

const std::string kHelpText = "para ejecutar el programa debe poner el fecha un numero y un archivo txt de esta manera:./Fecha dia mes anio numerodeinteracciones archivo.txt.";

void Usage(int argc, char *argv[]);