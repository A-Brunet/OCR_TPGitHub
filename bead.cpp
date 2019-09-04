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
 
#include "Bead.hpp"
#include "GlobalData.hpp"

#include <vector>
#include <ostream>

// ----------------------------------------------------------- 
// ----------------------/*Constructor*/----------------------
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
	m_radius=GlobalData::R_1N_eff;
	hasBeadCoord = false;
}
