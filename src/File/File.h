// Andrew Hollands
// Released under the terms of the GNU General Public Licence version 2 or later


typdef struct
{
    int _fileIsOpen = NULL;
    int canReadFile = NULL;
    int canWriteToFile = NULL;
    int filePosition = NULL;
    int fileDescriptor = NULL;
} File;


File * file_Constructor()
{
    File * fileToReturn ( File * ) = malloc( sizeof(File) );
    return fileToReturn;
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
int file_Deconstructor( File * fileToDeconstruct )
{
    int fileIsDeconstructed = free ( fileToClose );
    
    return fileIsDeconstructed;
}
