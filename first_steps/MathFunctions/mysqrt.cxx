#include "Table.h"

float mysqrt(float _val)
{
	/* automatic variables */
	double result;

	/* executable statements */
	result = _val;
	if (_val >= 1 && _val < 10) {
		result = sqrtTable[static_cast<int>(_val)];
	}	

	return result;
}
