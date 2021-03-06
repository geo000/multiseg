/*  Copyright (C) 2014 National Institute For Space Research (INPE) - Brazil.

    MultiSeg is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License,
    or (at your option) any later version.

    MultiSeg is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with MultiSeg. See COPYING.
 */

/*!
  \file OpticalCartoonMerger.h

  \brief This class implements the merger to optical cartoon images.

  \author Douglas Uba <douglas@dpi.inpe.br>
*/

#ifndef __MULTISEG_INTERNAL_OPTICALCARTOONMERGER_H
#define __MULTISEG_INTERNAL_OPTICALCARTOONMERGER_H

// MutiSeg
#include "Config.h"
#include "EuclideanMerger.h"

/*!
  \class OpticalCartoonMerger

  \brief This class implements the merger to optical cartoon images.

  \sa AbstractMerger, EuclideanMerger, RadarCartoonMerger, CompositeMerger
*/
class MSEGEXPORT OpticalCartoonMerger : public EuclideanMerger
{
  public:

    /*! \brief Default constructor. */
    OpticalCartoonMerger();

    /*! \brief Destructor. */
    ~OpticalCartoonMerger();

  protected:

    bool predicate(Region* r1, Region* r2, const std::size_t& band) const;

    double getDissimilarity(const std::vector<double>& p, Region* r, const std::size_t& band) const;
};

#endif // __MULTISEG_INTERNAL_OPTICALCARTOONMERGER_H
