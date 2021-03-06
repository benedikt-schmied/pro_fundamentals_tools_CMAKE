/**
 * \addtogroup itg_lib2_spc
 * \{
 * \file itg_lib2_spc.h
 *
 */

#ifndef __itg_lib2_spc_H__
#define __itg_lib2_spc_H__

////////////////////////////////////////////////////////////////////////////////
/// Includes
////////////////////////////////////////////////////////////////////////////////

/* c - runtime */
#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>

/* system */

/* own libs */

/* project */


#ifdef __cplusplus
extern "C" {
#endif

////////////////////////////////////////////////////////////////////////////////
/// Macros
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
// type definitions, unions, structures
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
// interface function
////////////////////////////////////////////////////////////////////////////////

/**************************************************************************//**
 * @brief  itg_lib2_spc__init
 *
 * @param [in,out]   _p         description
 * @return     0, if successful or < 0, if failed
 *             + '-1', initialization has failed
 * ****************************************************************************/
int itg_lib2_spc__init(void *_p);

/**************************************************************************//**
 * @brief  itg_lib2_spc__cleanup
 *
 * @param [in,out]   _p         description
 * @return     0, if successful or < 0, if failed
 *             + '-1', initialization has failed
 * ****************************************************************************/
int itg_lib2_spc__cleanup(void *_p);

/**************************************************************************//**
 * @brief  itg_lib2_spc__reinit
 *
 * @param [in,out]   _p         description
 * @return     0, if successful or < 0, if failed
 *             + '-1', initialization has failed
 * ****************************************************************************/
int itg_lib2_spc__reinit(void *_p);

#ifdef __cplusplus
}
#endif

#endif

/** \} */
