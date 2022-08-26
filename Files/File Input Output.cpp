/*
Author: Tuna Girişken
Program: File Input/Output
Reading from and writing to files is performed using file stream classes.
ifstream is used for reading (inputting) data from a file.
ofstream is used for writing (outputting) data to a file.
 These two class require the <fstream> header to be included.
File processing requires some basic actions:
- Stating the name of the file.
- Opening an existing file, or created a new one.
- Optionally stating the read/write mode.
- Optionally determining if a file is successfully open.
- Detecting the end of a file (when reading).
- Closing a file after is has been used.
These actions are provided by fstream functions…
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int i;

//This data type represents the output file stream and is used to create files and to write information to files.
    ofstream dosya("numbers.txt");

    for (i=1; i<=10; i++)
    {
        dosya << i << " " << i*i << endl;
    }

//.close() Closes the file.
    dosya.close();
}
