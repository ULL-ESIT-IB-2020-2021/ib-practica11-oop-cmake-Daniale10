/**
 * Universidad de La Laguna
 * Escuela Superior de Ingenieria y Tecnologia
 * Grado en Ingenieria Informatica
 * Asignatura: Informatica Basica 
 * Curso: 1
 * @title Practica 11 - Cmake
 * @file Desarrolle un programa cliente racionales.cc que permita operar con números racionales y haga uso de la clase Racional.
 * @author Daniel Alejandro Alvarez Casablanca <alu0101391731@ull.edu.es>
 * @copyright Daniel Alejandro Alvarez Casablanca
 * @see https://github.com/ULL-ESIT-IB-2020-2021/ib-practica11-oop-cmake-Daniale10
 * 
 */

#include "Racional.h"
#include <iostream>
#include <fstream>
#include <ostream>
#include <vector>
#include <string>




int main(int argc, char* argv[]){

   if (argc != 3)
  {
    std::cout << "Modo de uso: ./racionales fichero_entrada fichero_salida" <<std::endl;
    std::cout << "El número de argumentos debe ser 2." << std::endl;
    exit(-1);
  }
  std::string escritura = "fichero_salida.txt";
  std::string lectura = "fichero_entrada.txt";
  std::ifstream archivo(lectura);
  std::ofstream file(escritura);
  std::string argumen1;
  std::string argumen2;

  
  
  

     while(archivo >> argumen1 >> argumen2){
       Racional racional1(argumen1);
       Racional racional2(argumen2);
       Racional resultado;
    
     resultado.Add(racional1.getNumerador(),racional1.getDenominador(),racional2.getNumerador(),racional2.getDenominador(),escritura);
     resultado.Sub(racional1.getNumerador(),racional1.getDenominador(),racional2.getNumerador(),racional2.getDenominador(),escritura);
     resultado.Pro(racional1.getNumerador(),racional1.getDenominador(),racional2.getNumerador(),racional2.getDenominador(),escritura); 
     resultado.Div(racional1.getNumerador(),racional1.getDenominador(),racional2.getNumerador(),racional2.getDenominador(),escritura); 

     
    
     }
   
   file.close();
}




