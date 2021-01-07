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


#include "Complejo.h"
#include <iostream>

Complejo::Complejo(int complejo_real, int complejo_imaginario){
   
   complejo_real_ = complejo_real;
   complejo_imaginario_ = complejo_imaginario;
    
}

void Complejo::Print(){
      
      
      std::cout << complejo_real_  << "+" << complejo_imaginario_ << "i" << std::endl;

}

void Complejo::Add(int r1, int i1, int r2, int i2){
   
      std::cout << "Suma: " << r1 + r2 << "+" << i1 + i2 << "i" << std::endl;
  
}

void Complejo::Sub(int r1, int i1, int r2, int i2){
    
     std::cout << "Resta: " << r1 - r2 << i1 - i2 << "i" << std::endl;
}

void Complejo::Pro(int r1, int i1, int r2, int i2){
 
     std::cout << "Multiplicación: " << (r1 * r2) + (i1*i2) << "+" << (i1 * r2) + (r1*i2) << "i" << std::endl;

}
