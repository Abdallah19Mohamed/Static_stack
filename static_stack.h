#ifndef _STATIC_STACK_DS
#define _STATIC_STACK_DS

#include <stdio.h>
#include "STD_TYPES.h"

#define STACK_MAX 6

struct stack {
				u32 arr[STACK_MAX];
				s32 Head;
				};
	
	void pushtostack(struct stack *sptr, u32 value); 
	u32 popfromstack(struct stack *sptr);
	


	#endif	