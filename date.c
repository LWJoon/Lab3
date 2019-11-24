#include <stdio.h> 
#include <time.h> 

void printTime(void) { 
	time_t timer; 
	struct tm* t; 

	timer = time(NULL); 
	t = localtime(&timer); 

	printf("UNIX Time : %ld [sec]\n\n", timer); 
	printf("year : %ld\n", t->tm_year + 1900); 
	printf("month : %ld\n", t->tm_mon + 1); 
	printf("days : %ld\n", t->tm_mday); 
	printf("hour : %ld\n", t->tm_hour); 
	printf("min : %ld\n", t->tm_min); 
	printf("sec : %ld\n", t->tm_sec); 
}


