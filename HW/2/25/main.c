#include <stdio.h>


int main()
{

    printf("%d = 1 / 8 + 6 / 7 \n", 1 / 8 + 6 / 7);
    printf("%d = 1 + 8 / 6 / 7 \n", 1 + 8 / 6 / 7);
    printf("%d = ( 1 + 8 + 6 ) / 7 \n", ( 1 + 8 + 6 ) / 7);
    printf("%d = ( ( 1 + 8 ) mod 6 ) mod 7 \n", ( ( 1 + 8 ) % 6 ) % 7);
    printf("%d = - ( 1 + 8 - 6 - 7 ) \n", - ( 1 + 8 - 6 - 7 ));
    printf("%d = - ( 1 + ( 8 / 6 ) - 7 ) \n", - ( 1 + ( 8 / 6 ) - 7 ));
    printf("%d = ( 1 / 8 ) + ( 6 mod 7 ) \n", ( 1 / 8 ) + ( 6 % 7 ));
    printf("%d = ( 1 / 8 / 6 ) + 7 \n", ( 1 / 8 / 6 ) + 7);
    printf("%d = ( 1 + 8 + 6 ) - 7 \n", ( 1 + 8 + 6 ) - 7);
    printf("%d = ( 1 + 8 ) mod ( 6 + 7 )", ( 1 + 8 ) % ( 6 + 7 ));

    return 0;
}