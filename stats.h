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
 * @file stats.h 
 * @brief Header file for stats.c
 *
 * Report Analytics on Provided Data set
 *
 * @author Joji John Varghese
 * @date 15-06-2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief Print array to the screen
 *
 * Given an array of data and a length, print the array to the screen
 *
 * @param array pointer to the array
 * @param length length of the array
 * @return none
 */
void print_array(unsigned char * array, unsigned int length);

/**
 * @brief Print minimum value to the screen
 *
 * Given an array of data and a length, print the minimum value to the screen
 *
 * @param array pointer to the array
 * @param length length of the array
 * @return  minimum of the array
 */
unsigned char find_minimum(unsigned char * array, unsigned int length);

/**
 * @brief Print maximun value to the screen
 *
 * Given an array of data and a length, print the maximum value to the screen
 *
 * @param array pointer to the array
 * @param length length of the array
 * @return maximum of the array
 */
unsigned char find_maximum(unsigned char * array, unsigned int length);

/**
 * @brief Print mean value to the screen
 *
 * Given an array of data and a length, print the mean value to the screen
 *
 * @param array pointer to the array
 * @param length length of the array
 * @return mean of the array
 */
unsigned char find_mean(unsigned char * array, unsigned int length);

/**
 * @brief Print median value to the screen
 *
 * Given an array of data and a length, print the median value to the screen
 *
 * @param array pointer to the array
 * @param length length of the array
 * @return median of the array
 */
unsigned char find_median(unsigned char * array, unsigned int length);

/**
 * @brief Print array statistics to the screen
 *
 * Given an array of data and a length, print the array to the screen
 *
 * @param none
 * @return none
 */
void print_statistics();

/**
 * @brief Sort Array Function
 *
 * Given an array of data and a length, sorts the array from largest to smallest
 *
 * @param array pointer to the array
 * @param length length of the array
 * @return none
 */
void sort_array(unsigned char * array, unsigned int length);


#endif /* __STATS_H__ */
