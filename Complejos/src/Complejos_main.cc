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

#include <iostream>
#include "Complejo.h"


int main(){
    
    Complejo complejo1={4,5};
    Complejo complejo2={7, 8};
    Complejo resultado;
    complejo1.Print();
    complejo2.Print();
    
    
    resultado.Add(complejo1.getComplejo_real(),complejo1.getComplejo_imaginario(),complejo2.getComplejo_real(), complejo2.getComplejo_imaginario());
   
    
    
    resultado.Sub(complejo1.getComplejo_real(),complejo1.getComplejo_imaginario(),complejo2.getComplejo_real(),complejo2.getComplejo_imaginario());

    
    
    resultado.Pro(complejo1.getComplejo_real(),complejo1.getComplejo_imaginario(),complejo2.getComplejo_real(),complejo2.getComplejo_imaginario());
   
    
    
}