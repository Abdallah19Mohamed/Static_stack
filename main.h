#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"
#include "static_stack.h"

typedef enum {
		
	RET_NOK,
	RET_OK,
	}state_t;

	typedef struct
	{
	u32 arr[STACK_MAX];
	s32 Head;
	}StaticStack_t;
	
	#endif
	