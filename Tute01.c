/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  float marks1 , marks2 , average ;
	
	printf("Enter marks 1 : ");
	scanf("%f",&marks1 );
	
	printf("Enter marks 2 : ");
	scanf("%f",&marks2 );
	
	average  = ( marks1  + marks2 ) / 2.0 ;//calculate the average 
	
	printf("Average : %.2f" , average );
  
  return 0;
}

