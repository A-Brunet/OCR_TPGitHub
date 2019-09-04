// Copyright (C) 2019  CollasLab
//
// This file is part of Local3D
//
// Coworker on this project : Annaël Brunet(main), Nicolas Destainville
//
// The programme aim to probe the influence of interactions of chromosomes
// with the nuclear periphery in the form of lamin-associated domains (LADs)
//
////////////////////////////////////////////////////////////////////////
/** 
 * @file   Bead.cpp
 * @brief  Class BEAD to define the proprietes of monomere/bead
 *         read/store xyz value and read r value
 * @author Annaël Brunet on CollasLab (University of Oslo)
 * @bug
 */
 
#include "bead.hpp"

#include <vector>
#include <ostream>

// ----------------------------------------------------------- 
// ----------------------/*Constructor/Destructor*/----------------------
// -----------------------------------------------------------	

// -----------------/*constructor Default*/------------------- 
/**
 * @brief Constructor(default) : built a 3D object bead 
 * @param x,y,z position parameters and radius
 */
// ----------------------------------------------------------- 
Bead::Bead() {
	m_x = 0;
	m_y = 0;
	m_z = 0;
	m_radius=15;
	m_hasBeadCoord = false;
}


// ----------------/*constructor specific */------------------- 
/**
 * @brief Constructor(default) : built a 3D object bead 
 * @param x,y,z position parameters and radius
 */
// ----------------------------------------------------------- 
Bead::Bead(double Newx, double Newy, double Newz) {
	m_x = Newx;
	m_y = Newy;
	m_z = Newz;
	m_radius=15;
	m_hasBeadCoord = true;  
}

// -----------------/*destructor */------------------- 
/**
 * @brief Destructor : destruction of Bead;
 */
Bead::~Bead() {
}



// -------------------------/*get&set fn*/-------------------------
/** set (: modification des parametres de O.)
 * */
void Bead::setCoord_Bead(double Newx, double Newy, double Newz) {
	m_x = Newx;
	m_y = Newy;
	m_z = Newz;
}

double Bead::getRadius() const {
	return this->m_radius;
}

double Bead::getX() const {
	return this->m_x;
}

double Bead::getY() const {
	return this->m_y;
}

double Bead::getZ() const {
	return this->m_z;
}





