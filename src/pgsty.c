// External Libraries
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <stdarg.h>

// Internal Header Files 
#include "File/File.h"

int main ()
{
    File * file = file_constructor( NULL );
    int fileWasClosed = file_deconstructor( file );
    printf( "%d\n" , fileWasClosed );

    return 0;
}
