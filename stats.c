/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief Main File for the Program
 *
 * Report Analytics on provided data set array
 *
 * @author Joji John Varghese
 * @date 15-06-2020
 *
 */


#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

/* Data Set  Array */
 unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                                          114, 88,   45,  76, 123,  87,  25,  23,
                                        200, 122, 150, 90,   92,  87, 177, 244,
                                              201,   6,  12,  60,   8,   2,   5,  67,
                                             7,  87, 250, 230,  99,   3, 100,  90};
								
// main function
void main() 
{
  /* Statistics and Printing Functions Go Here */
  printf("\n");
  printf("Input Dataset Array : \n \n");
  print_array(test,SIZE);
  printf("Array after Sorting : \n \n");
  sort_array(test,SIZE);
  print_array(test,SIZE);
  print_statistics() ;
}

/* Function Definitions */

void print_array(unsigned char * array, unsigned int length) 
{
printf("Length of Array is : %d \n", SIZE);
printf("\n");
printf("Contents of Array are : \n");
printf("\n");
for(unsigned int i = 0; i < length; i++) 
  {
   printf(" %d \t", array[i]);
   }
printf("\n");
printf("\n");
}

unsigned char find_minimum(unsigned char * array, unsigned int length) 
{
unsigned char minimum = array[0];
for(unsigned int i = 1; i < length; i++) 
{
   if (array[i] < minimum)
    {
      minimum = array[i];
    }
   }
return minimum;
}

unsigned char find_maximum(unsigned char * array, unsigned int length)
 {
unsigned char maximum = array[0];
for(unsigned int i = 1; i < length; i++)
	{
   if (array[i] > maximum)
	 {
       maximum = array[i];
     }
   }
return maximum;
}

unsigned char find_mean(unsigned char * array, unsigned int length) 
{
int sum = 0;
int mean = 0;
for(unsigned int i = 0; i < length; i++) 
    {
     sum+= array[i];
     }
mean = sum/length;
return mean;
}

unsigned char find_median(unsigned char * array, unsigned int length) 
{
        sort_array(test,SIZE);
	int median = 0;
        if(length%2 == 0)
          median = (array[(length-1)/2] + array[length/2])/2.0;
	    else
          median = array[length/2];
	return median;
}

void print_statistics() 
{
  printf("Array Dataset Statistics\n");
  printf("\n");
  printf("Minimum  :  %d \n",  find_minimum(test,SIZE) );
  printf("\n");
  printf("Maximum  :  %d \n",  find_maximum(test,SIZE) );
  printf("\n");
  printf("Mean     :  %d \n",  find_mean(test,SIZE) );
  printf("\n");
  printf("Median   :  %d \n",  find_median(test,SIZE) );
  printf("\n");
}

void sort_array(unsigned char * array, unsigned int length) 
{
	// declare some local variables
    int i=0 , j=0 , temp=0;

    for(i=0 ; i<length ; i++)
	{
        for(j=0 ; j<length-1 ; j++)
        {
            if(array[j]<array[j+1])
            {
                temp        = array[j];
                array[j]    = array[j+1];
                array[j+1]  = temp;
            }
        }
    }
}
