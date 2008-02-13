// $Id: ESMC_GridToMesh.h,v 1.2 2008/02/13 00:28:47 dneckels Exp $
//
// Earth System Modeling Framework
// Copyright 2002-2007, University Corporation for Atmospheric Research, 
// Massachusetts Institute of Technology, Geophysical Fluid Dynamics 
// Laboratory, University of Michigan, National Centers for Environmental 
// Prediction, Los Alamos National Laboratory, Argonne National Laboratory, 
// NASA Goddard Space Flight Center.
// Licensed under the University of Illinois-NCSA License.

// ESMF GridToMesh C++ declaration include file
//
// (all lines below between the !BOP and !EOP markers will be included in 
//  the automated document petessing.)
//-----------------------------------------------------------------------------
//
#ifndef ESMC_GridToMesh_h
#define ESMC_GridToMesh_h

//-----------------------------------------------------------------------------

#include <vector>

namespace ESMC {
class Mesh;
}

namespace ESMCI {

class Grid;
class Array;

// Create a mesh from the given grid.
void GridToMesh(const ESMCI::Grid &grid, int staggerLoc, ESMC::Mesh &mesh, const std::vector<ESMCI::Array*> &arrays);

} // namespace


#endif
