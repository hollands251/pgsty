// Andrew Hollands
// Released under the terms of the GNU General Public Licence version 2 or later
// OverView:
// The File is a datatype that is meant to simplify interacting with files.
// Files are not very complicated to work with but a layer of abstraction will help 
// with the simplicity and intuitiveness of the code.


typedef struct
{
    int filePosition;
    int fileDescriptor;
    int sizeOfFileInBytes;
} File;


File * file_constructor( char * filePath )
{
    File * fileToReturn = ( File * ) malloc( sizeof(File) );

    open

    return errno;
}




// In:  File for writing & the text to write in it
// Do:  Checks for write permission, takes the text from the buffer, 
//      gets its size in bytes, then gets the file descriptor and writes 
//      the text to the file
// Out: Returns status of the stdlib.h write function
int file_writeToFile( File * fileToWriteTo , char * textToWrite )
{
    int writeFunctionStatusCode;

    return writeFunctionStatusCode;
}


// In:  
char * file_readFromFile( File * fileToReadFrom , char * bufferToWriteText , int sizeOfBufferInBytes )
{

}

// Returns 0 on successful deconstruction
int file_deconstructor( File * fileToDeconstruct )
{
    int fileIsDeconstructed = 0;
    free ( fileToDeconstruct );
    
    return fileIsDeconstructed;
}


