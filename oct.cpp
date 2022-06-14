#include <iostream>
#include <sys/time.h>

//command to compile: gcc oct.cpp -o oct -lstdc++

int main () {
        unsigned long int cur = time(NULL);
        unsigned long int past = cur - 1633060800;
        unsigned long int days = past / 86400;
        std::cout << "its october " << days << "\n";
        return 0;
}
