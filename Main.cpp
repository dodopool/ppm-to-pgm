#include "include/File.h"
#include "include/PpmToPgm.h"

#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using namespace std;


int main(int argc, char ** argv)
{
    if(argc == 1 || argc == 0)      //If the number of arguments is 0 or 1, then file name has not been passed
    {
        cerr<<"Error : Input file name not passed, exiting program..."<<"\n";
    }
    else
    {
        string full_file_name = "";     //Stores the input file name

        //First we convert the file (which is array of characters) to a string object

        for(int j = 0 ; j < strlen(argv[1]); j++)       //Copy the file name as a string object
        {
            full_file_name.push_back(argv[1][j]);
        }

        //Now, we will extract the extension

        string extension = "";      //Stores the extension
        bool extension_found = false;       //Stores true if extension is found, otherwise false

        for(int j = 0 ; j < (int) full_file_name.size(); j++)       //We now find the extension
        {
            if(extension_found == false)        //If the extension is not found currently...
            {
                if(full_file_name[j] == '.')        //So we check if we find a '.', which indicates starting of extension
                {
                    extension_found = true;     //If found, we set extension_found to true
                    extension.push_back('.');       //We now start building the extension
                }
                else        //Otherwise, the extension has not been found yet, and we continue
                {
                    continue;
                }
            }
            else        //However, if we have already found the extension...
            {
                extension.push_back(full_file_name[j]);     //We further build our extension
            }
        }

        if(extension_found == false)        //If we cannot find the extension, we print the same
        {
            cerr<<"Error : File extension not found, exiting program"<<"\n";
        }
        else        //Otherwise we call relevant code
        {
            if(extension == ".ascii.ppm")      
            {
                File * Conversion_2 = new PpmToPgm(full_file_name, extension);
                Conversion_2->process_file();
            }
            else
            {
                cerr<<"The file extension does not match with any extension which the group is implementing, exiting program"<<"\n";
            }
        }
    }
    return 0;       //End of program
}
