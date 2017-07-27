/*
 ============================================================================
 Name        : chapterfive.c
 Author      : grace_bao
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
	int num;
	int odd_count=0;
	int even_count=0;
	int sum=0;
	double avg=0;
	setvbuf (stdout, NULL, _IONBF, 0);
	printf("please input non-zero number,0 to quit");
	scanf("%d",&num);
	while(num!=0)
	{
		sum+=num;
		if ((num%2)!=0)
			odd_count++;
		else
			even_count++;
		setvbuf (stdout, NULL, _IONBF, 0);
		printf("please input non-zero number,0 to quit");
			scanf("%d",&num);
	}
	avg=sum/(odd_count+even_count);
	setvbuf (stdout, NULL, _IONBF, 0);
	printf("the sum is %d\n",sum);
	printf("the odd count is %d\n",odd_count);
	printf("the even count is %d\n",even_count);
	printf("the total count is %d\n",odd_count+even_count);
	printf("the average is %.2f\n",avg);
	return 0;
}
