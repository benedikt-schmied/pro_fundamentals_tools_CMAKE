/**
 * some simple lines in order to get familiar with CMake
 */

/* c - runtime */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* project */
#include "TutorialConfig.h"

int main(int argc, char *argv[]) 
{
	/* automatic variables */
	double valinput, valoutput;	

	/* executable statements */

	/* check, wether we've got enough valid parameters */
	if (argc < 2) {
		fprintf(stdout, "%s Version %d.%d\n", 
			argv[0],
			Tutorial_VERSION_MAJOR,
			Tutorial_VERSION_MINOR);
		
		fprintf(stdout, "Usage: %s number \n", argv[0]);
		return 1;
	}
	
	/* fetch the input value and convert it to float */
	valinput = atof(argv[1]);

	/* write onto the output variable */
	valoutput = sqrt(valinput);

	/* write to stdout and return! */
	fprintf(stdout, "The square root of %g is %g\n", valinput, valoutput);
	return 0;	
}
