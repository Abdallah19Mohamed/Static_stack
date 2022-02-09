#include "static_stack.h"

	void pushtostack(struct stack *sptr, u32 value)
	{
		if (NULL == sptr)
		{
			printf("Error : you enter Null \n");
		}
		else
		{
			if((sptr->Head)>=STACK_MAX)
			{
				printf ("SORRY !! THE STACK IS FULL \n");
			}
				else
				{
					sptr->arr[sptr->Head]=value;
					printf("sptr-> arr[%d] SUCCESSFULY STORED = %d \n",sptr->Head,value);
					sptr->Head++;
				}
			
		}
	}
	
	u32 popfromstack(struct stack *sptr)
	{
		if (NULL==sptr)
		{
			printf("Error : you enter Null \n");
		}
		else 
		{
			sptr-> Head--;
			if(sptr-> Head >=0)
			{
				return sptr->arr[sptr->Head];
			}
				else 
				{
				printf ("SORRY !! THE STACK IS EMPTY and returned value is ");
				sptr-> Head >=0;     // sptr->Head=0;    dh 3lshan hwa empty fa arg3o llzero b ++ aw b deh
				return 0;
				}
		}
	}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	