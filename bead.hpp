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
 * @file   Bead.hpp
 * @brief  Class BEAD to define the proprietes of monomere/bead
 *         read/store xyz and r value
 * @author Annaël Brunet on CollasLab (University of Oslo)
 * @bug
 */

#ifndef BEAD_HPP
#define BEAD_HPP

#include <string>
#include <iostream>
#include <math.h>
#include <vector>

class Bead {
public:
// ----------------------/*Constructor*/-----------------------
	Bead();                       /**Default constructor*/
	Bead(double, double, double); /**Spe constructor with argus*/
	~Bead();

	void setCoord_Bead(double Newx, double Newy, double Newz);
	double getRadius() const;

	double getX() const;
	double getY() const;
	double getZ() const;

private:
	double m_x;
	double m_y;
	double m_z;
	bool m_hasBeadCoord;
	double m_radius;

}; /* class Bead */

#endif
