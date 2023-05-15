
/******************************************************************************
*****                       Make Squares                                  *****
******************************************************************************/
/*!
***     \file       Make_Squares.c
***
***     \author     Aditya Subramanian
***                 Email.. aditya.subramanian3005@gmail.com
***
***     \brief      This module is intended to act as the main file for the make square application
***     			
***     \par        File_description
***                 
***
***
*\n*/
/*****************************************************************************/

/*
NOTE: CONSIDER THE FOLLOWING QUESTION

Consider that you have a rectangular piece of paper of arbitrary dimensions N by M (where N and M are positive integers). 
You also have a pair of scissors which can cut perfectly straight with no loss of paper. 
You wish to reduce the original piece of paper into a series of perfect squares of paper, making the largest possible squares, and using all of the paper provided.
Write a function in C that takes the inputs N, and M, and returns the series of squares that can be made out of that piece of paper.
No fractional squares, i.e. no square should be less than 1 in length and width.

Some examples:
Input: N =6 , M = 5
Output: 5x5, 1x1, 1x1, 1x1, 1x1, 1x1

Input: N = 1, M = 1
Output: 1x1

Input: N = 9, M = 9
Output: 9x9

*/
/*=============================================================================
=======                            INCLUDES                             =======
=============================================================================*/
#include<stdio.h>
#include<stdint.h>
/*=============================================================================
=======               DEFINES & MACROS FOR GENERAL PURPOSE              =======
=============================================================================*/

/*=============================================================================
=======                       CONSTANTS  &  TYPES                       =======
=============================================================================*/

/*=============================================================================
=======                  PRIVATE FUNCTION DECLARATIONS                  =======
=============================================================================*/
void make_squares(int N, int M);

/*=============================================================================
=======                              METHODS                            =======
=============================================================================*/

/*---------------------------------------------------------------------------*/
/*     FUNCTION: main()
 */
/*!    \brief   Core Driver of the application
 *
 *
 *     \param   void
 *
 *     \returns  void
 *     \pre
 *     \post
 *
 *     \warning
 *//*------------------------------------------------------------------------*/
void main()
{
    int N,M;
    printf("Enter The Dimensions of the rectangle NxM\n");
    scanf("%d %d",&N,&M);
    printf("Entered Dimensions: %d %d\n",N,M);
    /* Pass it into Make_Squares to print out possible Squares! */
    make_squares(N,M);
}

/*---------------------------------------------------------------------------*/
/*     FUNCTION: make_squares()
 */
/*!    \brief   Create Greates number of squares given Dimensions. 
 *
 *
 *     \param   int N, int M
 *
 *     \returns  void
 *     \pre
 *     \post
 *
 *     \warning : Recursion Logic Used. 
 *//*------------------------------------------------------------------------*/

void make_squares(int N, int M)
{
    if((N <=0) || (M<=0))
    {
        /* Break out of recursive loop */
        return;
    }
    if( N == M )
    {
        printf("%dx%d, ",N,M);
    }
    else if(N>M)
    {
        printf("%dx%d, ",M,M);
        make_squares(N-M,M);
    }
    else
    {
        /* If M > N */
        printf("%dx%d, ",N,N);
        make_squares(N,M-N);
    }
}