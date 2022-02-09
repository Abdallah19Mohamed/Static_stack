#include "main.h"


int main(void)
{
	u16 buffer =0;
	struct stack stack_1;
	stack_1.Head=0;
	pushtostack(&stack_1,5);
	pushtostack(&stack_1,6);
	pushtostack(&stack_1,7);
	pushtostack(&stack_1,8);
	pushtostack(&stack_1,9);
	pushtostack(&stack_1,10);
	pushtostack(&stack_1,11);
	pushtostack(&stack_1,12);
	
	buffer=popfromstack(&stack_1);
	printf("%d\n",buffer);
	buffer=popfromstack(&stack_1);
	printf("%d\n",buffer);
	buffer=popfromstack(&stack_1);
	printf("%d\n",buffer);
	buffer=popfromstack(&stack_1);
	printf("%d\n",buffer);
	buffer=popfromstack(&stack_1);
	printf("%d\n",buffer);
	buffer=popfromstack(&stack_1);
	printf("%d\n",buffer);
	buffer=popfromstack(&stack_1);
	printf("%d\n",buffer);
	buffer=popfromstack(&stack_1);
	printf("%d\n",buffer);
	buffer=popfromstack(&stack_1);
	printf("%d\n",buffer);
	return 0;
}	