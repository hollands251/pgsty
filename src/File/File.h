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


// In:  Takes the name of the file and optionally the path up to it
// Do:  Open the file, if it exists, otherwise make a file with the name supplied
// Out: Returns a pointer to the new File on success. On failure, return NULL and set errno
File * file_constructor( char * filePath )
{
    int fileOpenErrorNumber = NULL;

    File * newlyConstructedFile = ( File * ) malloc( sizeof(File) );
    newlyConstructedFile -> filePosition = NULL;
    newlyConstructedFile -> fileDescriptor = NULL;
    newlyConstructedFile -> sizeOfFileInBytes = NULL;

    newlyConstructedFile -> fileDescriptor = open( filePath , O_RDWR | O_CREAT );

    if ( newlyConstructedFile -> fileDescriptor == -1 )
        return NULL;
    else
    {

    }

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
// Do:
// Out:
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


// ------------------ internal helper functions ------------------


File * _set_filePosition( File * fileToSearch )
{
    fileToSearch -> filePosition = lseek( fileToSearch -> fileDescriptor , 0L , SEEK_CUR );
    rewind( fileToSearch -> fileDescriptor );

    if ( fileToSearch -> filePosition == -1 )
        return NULL;
    else
        return fileToSearch;
}


// In:  Takes a File datatype
// Do:  Seeks to the end of the file, subtracts the fd from that number leaving the number of bytes the
//      File takes up. Set sizeOfFileInBytes in the File datatype.
// Out: Returns the File datatype on success and NULL on failure. Sets errno for debugging
File * _set_sizeOfFileInBytes( File * fileToGetSizeOf )
{
    int endOfFile;
    int startOfFile;
    
    startOfFile = fileToGetSizeOf -> fileDescriptor;
    endOfFile = lseek( fileToGetSizeOf -> fileDescriptor , 0L , SEEK_END );
    rewind( fileToGetSizeOf -> fileDescriptor );

    int numberOfBytesInFile = startOfFile - endOfFile;

    if ( endOfFile == -1 )
        return NULL;
    else
        fileToGetSizeOf -> sizeOfFileInBytes = numberOfBytesInFile;

    return fileToGetSizeOf;
}


