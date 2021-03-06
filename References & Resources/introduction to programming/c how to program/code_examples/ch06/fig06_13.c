// Fig. 6.13: fig06_13.c
// Passing arrays and individual array elements to functions.
#include <stdio.h>
#define SIZE 5

// function prototypes
void modifyArray( int b[], size_t size );
void modifyElement( int e );               

// function main begins program execution
int main( void )
{
   int a[ SIZE ] = { 0, 1, 2, 3, 4 }; // initialize array a
   size_t i; // counter

   puts( "Effects of passing entire array by reference:\n\nThe "
      "values of the original array are:" );

   // output original array
   for ( i = 0; i < SIZE; ++i ) { 
      printf( "%3d", a[ i ] );
   } // end for

   puts( "" );

   // pass array a to modifyArray by reference
   modifyArray( a, SIZE );                           

   puts( "The values of the modified array are:" );

   // output modified array
   for ( i = 0; i < SIZE; ++i ) {
      printf( "%3d", a[ i ] );
   } // end for

   // output value of a[ 3 ]
   printf( "\n\n\nEffects of passing array element "
      "by value:\n\nThe value of a[3] is %d\n", a[ 3 ] );
   
   modifyElement( a[ 3 ] ); // pass array element a[ 3 ] by value

   // output value of a[ 3 ]
   printf( "The value of a[ 3 ] is %d\n", a[ 3 ] );
} // end main

// in function modifyArray, "b" points to the original array "a" 
// in memory                                                     
void modifyArray( int b[], size_t size )                               
{                                                                   
   size_t j; // counter                                       
                                                                  
   // multiply each array element by 2                         
   for ( j = 0; j < size; ++j ) {                                 
      b[ j ] *= 2; // actually modifies original array               
   } // end for                                                
} // end function modifyArray                                  

// in function modifyElement, "e" is a local copy of array element
// a[ 3 ] passed from main                                     
void modifyElement( int e )                                       
{                                                                 
   // multiply parameter by 2                                  
   printf( "Value in modifyElement is %d\n", e *= 2 );            
} // end function modifyElement                                
                            




/**************************************************************************
 * (C) Copyright 1992-2013 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/

