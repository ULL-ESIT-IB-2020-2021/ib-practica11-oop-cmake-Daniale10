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

#ifndef RACIONAL_H
#define RACIONAL_H
#include <iostream>
#include <vector>
#include <ostream>
#include <string>
#include <vector>
#include <fstream>

class Racional{
    
    
    private: //Atributos
    int numerador_;
    int denominador_;
    public: //Metodos
    Racional() = default;
    Racional(std::string longit);
    Racional(int, int);
    void SetDatos(int,int);
    void Write();
    void Print();
    void Add(int, int, int , int, std::string wri);
    void Sub(int, int, int, int, std::string wri);
    void Pro(int, int, int, int, std::string wri);
    void Div(int, int , int, int,std::string wri);
    int getNumerador() {return numerador_;}
    int getDenominador() {return denominador_;}

 
};
#endif

const std::string kHelpText = "para ejecutar el programa debe poner el fichero_entrada.txt fichero_salida.txt ";

void Usage(int argc, char *argv[]);