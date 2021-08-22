(Inside Directory src)

1. File.cpp : This is the abstract base class for the file PpmToPgm.cpp. The pure virtual function process_file() is being implemented by the file PpmToPgm.cpp

2. PpmToPgm.cpp : This is the implementation of my Task 7 (which is .ppm to .pgm file conversion) of the Group Project. 

(Inside Directory include)

1. File.h : This is the Header file for File.cpp

2. PpmToPgm.h : This is the header file for PpmToPgm.cpp

(Directly in the zip file)

1. Main.cpp : Contains the code which invokes my function

2. blackbuck.ascii.ppm : A sample file which on which the code can be tested.

---------------------
Program Features
---------------------

The program has built in features for handling .ppm files with error. Depending on where the error has occurred, the program can either output a 10 x 10 black image, or an image which is partially black.

The program is robust, with a clean and easy-to-understand code. It also implements the powerful OOP features C++ provides : Inheritance and virtual function.

It also makes use of C++ method of handling files using fstream header.  

-----------------------
Running the Files
-----------------------

To run the program, firstly we extract the files. Then, from the directory containing the main file, we compile as follows:

g++ src/*.cpp Main.cpp

Then, the sample input file I am providing is blackbuck.ascii.ppm, so in Windows, we type:

a blackbuck.ascii.ppm

And for linux, we type:

./a.out blackbuck.ascii.ppm

This creates an output file named

output.ascii.pgm

This can be viewed in GIMP. 
