#ifndef _AHRSAUX_H_
#define _AHRSAUX_H_

#include "mathTool.h"

typedef struct{
	Vector3f_t angle;	
	Vector3f_t vectorRollPitch;
	Vector3f_t vectorRollPitchError;
    Vector3f_t accEf;
}AHRSAUX_t;


#endif


