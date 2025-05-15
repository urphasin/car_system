#include <fstream>
#include <bits/stdc++.h>


using namespace std;



int main() {

    std::ofstream outf("Sample.txt"); 
    if (!outf) {
        std::cerr << "Error opening file for writing" << std::endl;
        return 1;
    }

    printf(outf.is_open() ? "File is open\n" : "File is not open\n");

    outf << "Hello, World!" << std::endl;
    outf << "This is a test file." << std::endl;
    outf << "Writing to a file in C++." << std::endl;
    outf << "Goodbye!" << std::endl;
    outf.close();
    
}
