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


Racional::Racional(std::string longit){

int numerador = 0;
int denominador = 0;
int rango;

std::string n(""), d("");

 for(int i = 0; longit[i] != '/'; i++){
     n = n + longit[i];
      rango = i + 1;
 }

 for(int i = rango + 1 ; longit[i] != ' '; i++){ 
     d = d + longit[i];
 }   

  numerador = std::stoi(n);
  denominador = std::stoi(d);
  
      
}

void Racional::SetDatos(int numerador1, int denominador2){
         numerador_ = numerador1;
         denominador_ = denominador2;
 }

void Racional::Add(int n1, int d1, int n2, int d2, std::string wri){ 

    std::ofstream file1(wri);

    file1 << "Suma:" << (n1*d2 + n2*d1) << "/" << (d1*d2) << std::endl;



}

void Racional::Sub(int n1, int d1, int n2, int d2, std::string wri){

    std::ofstream file2(wri);

    file2 << "Resta:" <<(n1*d2 - n2*d1) << "/" << (d1*d2) << std::endl;

}

void Racional::Pro(int n1, int d1, int n2, int d2, std::string wri){

    std::ofstream file1(wri);

    file1 << "Multiplicación" << (n1*n2) << "/" << (d1*d2) << std::endl;

}

void Racional::Div(int n1, int d1, int n2, int d2, std::string wri){

    std::ofstream file1(wri);

    file1 << "Division:" << (n1 * d2) << "/" << (d1*n2) << std::endl;

}

void Usage(int argc, char *argv[]){
  if (argc != 2) {
     std::cout << argv[0] << "Puebe con './Racional '" <<std::endl;
     std::cout << "Pruebe" << argv[0] << "--help para más información" <<std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}