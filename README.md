Released under the terms of the GNU General Public Licence version 2 or later

#Mission
Has this ever happened to youuuuuu? You're maintaining your server and you realize you need a file from your personal device. How does scp work again??
Woudln't it be easier if there were just an easier way???? 

pgsty ( read pigsty ) is a simple tool that sends a file from one of your computers to another. Hence, sty: Send To Yourself.

#Why pgsty?
pgsty is fast. What makes it fast?

1) Instead of using SSH, it uses the unencrypted protocol FTP. ( the faster protocol )
2) pgsty encrypts your file symmetrically. ( faster than asymmetric )

Is the speed noticble? Idk probably not, but there's only one way to find out.

"But wait", I hear you saying, "These files I'm sending are private" , they need to be encrypted. And even if I have files that I don't need encrypted, why wouldn't I just use ftp and send it myself?
Well, the protocol pgsty uses isn't encrypted, but the file being sent will be, with symmetrical PGP encryption ( PGP is where we get the pg in pgsty btw ).
The hard part of symmetrical cryptography is getting the key from Bob to Alice. Becuase without an encrypted channel, how do you ensure it stays secret.
This problem is circumvented by you being both Bob and Alice *mindblown* I mean it when I say this is meant to send files to yourself.
pgsty really hits a nitche market of being useful only to people sending themselves files.


#Project Overview:

Tools:
C language
Makefile
cUnit
GnuPG
Valgrind

#Developer
Andrew Hollands     holandre@sheridancollege.ca

#Code Base

Encryption
    GnuPG implementation
        Asymmetric cryptography


Networking
    TCP socket programming
        Socket:
        portNumber
        socketIsOpen
        isListening
        isSending

File I/O
    File:
    fileIsOpen
    canReadFile
    canWriteToFile
    toWrite
    filePosition
    fileDescriptor
    

Error Handling 

Testing
    Designing Test Suites
    FileClassTestSuite

Multi Threading

User Interface

