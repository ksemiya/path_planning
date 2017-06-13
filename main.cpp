#include <assert.h>
#include <cstdlib>
#include <iostream>
#include <string>
#include <tinyxml2.h>


using namespace tinyxml2;

#ifndef XMLCheckResult
    #define XMLCheckResult(a_eResult) if (a_eResult != XML_SUCCESS) { printf("Error: %i\n", a_eResult); return a_eResult;}
#endif


int main(int argc, char *argv[])
{
    XMLDocument xmlDoc;
    std::string file_name;
    std::cin >> file_name;
    XMLError eResult = xmlDoc.LoadFile(file_name.c_str());
    XMLCheckResult(eResult);
    std::cout << file_name << std::endl;
    std::cout << "Hello, world" << std::endl;
    return 0;
}

