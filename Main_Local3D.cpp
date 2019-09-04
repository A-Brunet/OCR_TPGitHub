// Copyright (C) 2016  CollasLab
//
// This file is part of Local3D
//
// Coworker on this project : Annaël Brunet
//
// The programme aim to probe the influence of interactions between
// lamin-associated domains (LADs) and the nuclear periphery.
//
////////////////////////////////////////////////////////////////////////
//g++ -g -Wall -std=c++11 bead.cpp -lm Main_Local3D.cpp -o a.out

#include "bead.hpp"

#include <vector>
#include <iostream>
#include <math.h>

int main()
{
std::cout<<"@author:A.Brunet" << std::endl;
std::cout <<"=================================================================="<< std::endl;
std::cout <<"========================= Start Local3D =========================="<< std::endl;
std::cout <<"=================================================================="<< std::endl;
	
int vecLength=10;
double radius;

Bead *BeadToBuilt= new Bead();
radius=BeadToBuilt->getRadius();

std::vector<Bead> vecChromF_Init;


for (int i=0; i<=(vecLength-1); i++) {
	BeadToBuilt->setCoord_Bead(0,0,(radius*(2*i+1)));/**< Bead coordonates*/	
	vecChromF_Init.push_back(*BeadToBuilt);/**< construction of CF : a vector of Bead*/
}




//Check
std::cout <<"Check initialisation"<< std::endl; 
std::cout << "X: " <<vecChromF_Init[5].getX() << ", Y: " << vecChromF_Init[5].getY() << ", Z: "<<vecChromF_Init[5].getZ() << std::endl;


std::cout <<"============================ End Main ============================="<< std::endl; 
}






