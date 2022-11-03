#include <iostream>
#include "Lab3/ReadArray.h"

int main() {

    ReadArray r = new ReadArray("~/CLionProjects/Labs/Lab3/Data.dat");
    for(int* it = &r.array[0]; it!=&r.array[sizeof(r.array)]; ++it)
    {
        cout<<*it<<endl;
    }

    std::cout << r.array;

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
