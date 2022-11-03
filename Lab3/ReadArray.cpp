//
// Created by averagejoe on 10/31/22.
//

#include "ReadArray.h"

ReadArray::ReadArray(const char *filename) {

    std::cout << "Hello!!!!!!!!!!!!"

    //start ifstream on filename
    this->f.open(filename);

    if (this->f.fail()){
        this->f.close();
        count = 0;
        std::cout << "file not found/does not exist\n";
        exit(1);
    }

    //utility variables
    count = 0;

    //reader variable
    float n;

    while(this->f >> n){
        array[count++] = n;
    }
    f.close();

    //alt: we can get the length of the file
    /*
     *          //array we read into (a.k.a. buffer)
     *     std::vector<char> buf;
     *          //open the file to read into
     *     std::ifstream in(file);
     *          //seek the 0th position of the eofbit (or the offset of it)
     *          //this is an iterator so essentially this is beyond the end of the file
     *     in.seekg(0, std::ios::end);
     *          //now we have offset of the eof, we can resize our array to the length of the offset (a.k.a. filesize)
     *     buf.resize(in.tellg());
     *          //reset the pointer reading position.
     *     in.seekg(0, std::ios::beg);
     *          //open and read the file.
     *     in.read(&buf[0], buf.size());
     */

}

void ReadArray::inputArray() {

    float fSum = 0.0f;
    float fTotal = 0.0f;

    count = 0;

    for (int i = 0; i < array.size(); ++i) {
        fSum += n;
        counter++;
    }
    fTotal = fSum/counter;

}

