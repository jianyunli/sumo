//---------------------------------------------------------------------------//
//                        ROVehicleType.cpp -
//  Basic class for vehicle types
//                           -------------------
//  project              : SUMO - Simulation of Urban MObility
//  begin                : Sept 2002
//  copyright            : (C) 2002 by Daniel Krajzewicz
//  organisation         : IVF/DLR http://ivf.dlr.de
//  email                : Daniel.Krajzewicz@dlr.de
//---------------------------------------------------------------------------//

//---------------------------------------------------------------------------//
//
//   This program is free software; you can redistribute it and/or modify
//   it under the terms of the GNU General Public License as published by
//   the Free Software Foundation; either version 2 of the License, or
//   (at your option) any later version.
//
//---------------------------------------------------------------------------//
namespace
{
    const char rcsid[] =
    "$Id$";
}
// $Log$
// Revision 1.3  2003/07/16 15:36:50  dkrajzew
// vehicles and routes may now have colors
//
// Revision 1.2  2003/02/07 10:45:06  dkrajzew
// updated
//
//


/* =========================================================================
 * included modules
 * ======================================================================= */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif // HAVE_CONFIG_H

#include <iostream>
#include <string>
#include <utils/gfx/RGBColor.h>
#include "ReferencedItem.h"
#include "ROVehicleType.h"


/* =========================================================================
 * method definitions
 * ======================================================================= */
ROVehicleType::ROVehicleType(const std::string &id, const RGBColor &col,
                             double length)
    : ReferencedItem(), myID(id), myColor(col), myLength(length)
{
}

ROVehicleType::~ROVehicleType()
{
}

std::ostream &
ROVehicleType::xmlOut(std::ostream &os)
{
	return os;
}

std::string
ROVehicleType::getID() const {
    return myID;
}


/**************** DO NOT DEFINE ANYTHING AFTER THE INCLUDE *****************/
//#ifdef DISABLE_INLINE
//#include "ROVehicleType.icc"
//#endif

// Local Variables:
// mode:C++
// End:


