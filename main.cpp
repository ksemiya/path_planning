#include <QCoreApplication>
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
    QCoreApplication app(argc, argv);
    std::string name_of_file = argv[1];
    XMLDocument xmlDoc;

    std::cout << "Hello, world" << std::endl;
    return 0;
}
