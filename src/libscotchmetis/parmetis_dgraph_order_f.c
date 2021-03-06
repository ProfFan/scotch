/* Copyright 2007,2010,2012,2015 IPB, Universite de Bordeaux, INRIA & CNRS
**
** This file is part of the Scotch software package for static mapping,
** graph partitioning and sparse matrix ordering.
**
** This software is governed by the CeCILL-C license under French law
** and abiding by the rules of distribution of free software. You can
** use, modify and/or redistribute the software under the terms of the
** CeCILL-C license as circulated by CEA, CNRS and INRIA at the following
** URL: "http://www.cecill.info".
**
** As a counterpart to the access to the source code and rights to copy,
** modify and redistribute granted by the license, users are provided
** only with a limited warranty and the software's author, the holder of
** the economic rights, and the successive licensors have only limited
** liability.
**
** In this respect, the user's attention is drawn to the risks associated
** with loading, using, modifying and/or developing or reproducing the
** software by the user in light of its specific status of free software,
** that may mean that it is complicated to manipulate, and that also
** therefore means that it is reserved for developers and experienced
** professionals having in-depth computer knowledge. Users are therefore
** encouraged to load and test the software's suitability as regards
** their requirements in conditions enabling the security of their
** systems and/or data to be ensured and, more generally, to use and
** operate it in the same conditions as regards security.
**
** The fact that you are presently reading this means that you have had
** knowledge of the CeCILL-C license and that you accept its terms.
*/
/************************************************************/
/**                                                        **/
/**   NAME       : parmetis_dgraph_order_f.c               **/
/**                                                        **/
/**   AUTHOR     : Francois PELLEGRINI                     **/
/**                                                        **/
/**   FUNCTION   : This file contains the Fortran API of   **/
/**                the compatibility library for the       **/
/**                ParMeTiS ordering routine.              **/
/**                                                        **/
/**   DATES      : # Version 5.0  : from : 17 oct 2007     **/
/**                                 to     17 oct 2007     **/
/**                # Version 5.1  : from : 30 jun 2010     **/
/**                                 to     30 jun 2010     **/
/**                # Version 6.0  : from : 13 sep 2012     **/
/**                                 to     27 apr 2015     **/
/**                                                        **/
/************************************************************/

/*
**  The defines and includes.
*/

#define LIBRARY

#include "module.h"
#include "common.h"
#include "ptscotch.h"
#include "parmetis.h" /* Our "parmetis.h" file */

/**************************************/
/*                                    */
/* These routines are the Fortran API */
/* for the distributed graph ordering */
/* routines.                          */
/*                                    */
/**************************************/

/*
**
*/

FORTRAN(METISNAMEU(PARMETIS_V3_NODEND), METISNAMEL(parmetis_v3_nodend),
        (const SCOTCH_Num *const vtxdist, SCOTCH_Num *const xadj,
         SCOTCH_Num *const adjncy, const SCOTCH_Num *const numflag,
         const SCOTCH_Num *const options, SCOTCH_Num *const order,
         SCOTCH_Num *const sizes, MPI_Comm *const commptr),
        (vtxdist, xadj, adjncy, numflag, options, order, sizes, commptr)) {
  METISNAMEU(ParMETIS_V3_NodeND)
  (vtxdist, xadj, adjncy, numflag, options, order, sizes, commptr);
}
