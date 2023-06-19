This directory contains code files on dynamic libraries

How to create a Dynamic Library

gcc -c -fPIC *.c

Next, we are going to put together those objects files into one library.
To do this as a Dynamic Library we also use gcc but with the -shared option.
The -o is to specify the name of the file you want it to have.

gcc -shared -o liball.so *.o

This way you must have your library created. To verify that you did it
and have the right functions as dynamic symbols you can use:

nm -D liball.so
Great! at this point, you have your Dynamic Library created!
