/**
 * \addtogroup itg_lib1_gnc itg_lib1_gnc
 *
 * itg_lib1_gnc
 *
 *
 */

////////////////////////////////////////////////////////////////////////////////
// Includes
////////////////////////////////////////////////////////////////////////////////

/* c - runtime */
#include <stdint.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>
/* own libraries */

/* project */
#include "itg_lib1_gnc.h"

////////////////////////////////////////////////////////////////////////////////
// Macros
////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////
/// Typedefinitions, Unions, Structures
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
// Static variables
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
// Static function prototypes
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
// interface function
////////////////////////////////////////////////////////////////////////////////

/**
 * @brief  itg_lib1_gnc__init
 */
int itg_lib1_gnc__init(void *_p)
{
    /* automatic variables */
    int ret;

    printf("hello target, this is one of your libraries\n");

    /* executable statements */
    ret = 0;

    return ret;
}

/**
 * @brief  mw_module_control__cleanup
 */
int itg_lib1_gnc__cleanup(void *_p)
{
    /* automatic variables */
    int ret;

    /* executable statements */
    ret = 0;

    /* @TODO: insert your code here! */
    return ret;
}

/**
 * @brief  itg_lib1_gnc__init
 */
int itg_lib1_gnc__reinit(void *_p)
{
    /* automatic variables */
    int ret;

    /* executable statements */
    ret = 0;

    /* @TODO: insert your code here! */
    return ret;
}

/** \} */
