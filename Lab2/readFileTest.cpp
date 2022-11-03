#include <iostream>
#include <fstream>  // This includes the interface texts for file io

using namespace std;

/**
 * Main program to read numbers from a file,
 * sum them, and find the smallest.
 * @param args : command line C strings, not used.
 */
int main(int argc, char *argv[])
{   const char *filename = "Data.txt";
    ifstream f(filename);
    // the ifstream class has a constructor which take a C-string as an argument
    // this is the name of the file to be opened

    // when a file stream is used as the operand of the ! operator
    // the value true will be obtained if the file
    // could not be opened succesfully
    if (!f)
    {   cout << "could not open " << filename << endl;
        return 1;      // indicates to the environment that the porgram
        // terminated without success
    }

    float sum=0.0;  // place to accumulate the sum.
    float total=0.0;
    //int smallest = 100000; // place to store the smallest
    // initializing it with a big negative number
    // is a bad idea. Why?
    int counter = 0;

    int n;  // temp to read into
    bool reading = true;  // loop control
    while (reading)  // loop until we run out of file.
    {   f >> n;      // we can input a data item from a stream using >>
        sum += n;    // this approach treats white space (spaces, newlines etc)
        counter++;   // as separators
        // so it's no good if spaces in the input are significant
        // also will not behave correctly if the data item is not
        // of the right type
        if (!f.eof())     //  test to see if we've gone past the end of the file
        {
            //CALCULATE THE AVERAGE HERE
            total = sum/counter;
        } else { // done - terminate the loop, and close the file.
            reading = false;
            f.close();  // dont forget to do this!
        }
    }

    // DISPLAY THE AVERAGE HERE
    cout << total << endl;

    return 0; // return 0 which means everything is ok.
}

