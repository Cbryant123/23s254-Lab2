#include "read.h"
#include<iostream>
#include<fstream>

int main() {

 std::ifstream readme;
 std::cout << "Enter name of file";
 std::string v;
 std::cin >> v;
 readme.open(v);
 char output[100];
 if (readme.is_open()) {
 while (!readme.eof()) {
    readme >> output;
    std::cout<<output;
 }
}
readme.close();
return 0;
}
