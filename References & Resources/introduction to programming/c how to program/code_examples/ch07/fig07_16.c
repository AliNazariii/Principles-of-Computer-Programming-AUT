// Fig. 7.16: fig07_16.c
// Applying sizeof to an array name returns 
// the number of bytes in the array.
#include <stdio.h>
#define SIZE 20

size_t getSize( float *ptr ); // prototype

int main( void )
{
   float array[ SIZE ]; // create array

   printf( "The number of bytes in the array is %u"            
           "\nThe number of bytes returned by getSize is %u\n",
           sizeof( array ), getSize( array ) );                
} // end main

// return size of ptr
size_t getSize( float *ptr )
{
   return sizeof( ptr );
} // end function getSize


/**************************************************************************
 * (C) Copyright 1992-2010 by Deitel & Associates, Inc. and               *
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

