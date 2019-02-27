//* This is a simple c program which shows a simple dialogue calculate girl's age and comparing girl's age with user. */
#include <stdio.h>
#include <string.h>
 int main(void)
{
	int year;
	int birthyear;

	int num;
//	num = 19;
	int age;
	char select[30];

	int Dvalue;
//	Dvalue = num - age;

//	printf("the age is %d.\n",num);


//	char letter[30];
//	letter = 'Y';

	printf("Which year is this year?\n");
	scanf("%d",&year);
	printf("Than, in which year did she born?\n");
	scanf("%d",&birthyear);
//	printf("Please chack out you input %d & %d, right? \n",year,birthyear);
	

	printf("Wow, she is already a %d girl.\n",year - birthyear);
	num = year - birthyear;
	
	printf("How about you?\n");
	scanf("%d",&age);
	printf("You are %d right?(Y/N)\n",age);
	scanf("%s",select);
	if(strcmp(select,"Y") == 0)
{
		printf("Ahuh!Gotcha!");
		if(age >19)
			printf("You are elder than her!\n");
		else if(age<19)
			printf("You still need %d years to get to her age!\n",num - age);
		else if(age ==19)
			printf("You're the same age as her!\n");
}
	return 0;
}

// 问题记录：行数16 算式的差是固定值？为什么？
//错误1: string 与 charactor 不能相比较。
