/**
 * Universidad de La Laguna
 * Escuela Superior de Ingenieria y Tecnologia
 * Grado en Ingenieria Informatica
 * Asignatura: Informatica Basica 
 * Curso: 1
 * @title Practica 11 - Cmake
 * @file Desarrolle un programa cliente complejos.cc que permita operar con números complejos y haga uso de la clase Complejo que diseñe.
 *  La clase Complejo ha de contener al menos métodos que permitan (print()) imprimir un número complejo así como sumar (Add()) y restar (Sub()) números complejos.
 * @author Daniel Alejandro Alvarez Casablanca <alu0101391731@ull.edu.es>
 * @copyright Daniel Alejandro Alvarez Casablanca
 * @see https://github.com/ULL-ESIT-IB-2020-2021/ib-practica11-oop-cmake-Daniale10
 * 
 */

#ifndef COMPLEJO_H
#define COMPLEJO_H
#include <iostream>

class Complejo{
  private: //Atributos
     int complejo_real_; 
     int complejo_imaginario_;

   public: //Metodos 
     Complejo() = default;
     Complejo(int,int);
     void Print();
     void Add(int,int,int,int);
     void Sub(int,int,int,int);
     void Pro(int,int,int,int);
     int getComplejo_real() {return complejo_real_;}
     int getComplejo_imaginario() {return complejo_imaginario_;}
};
#endif