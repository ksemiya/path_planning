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
    // TODO1
    std::string file_name;
    std::cin >> file_name;
    // <----CREATE DOC---->
    XMLDocument xmlDoc;
    XMLError eResult = xmlDoc.LoadFile(file_name.c_str());
    XMLCheckResult(eResult);
    XMLNode * pRoot = xmlDoc.FirstChild();
    if (pRoot == nullptr) return XML_ERROR_FILE_READ_ERROR;
    XMLElement * pElement = pRoot->FirstChildElement("element");
    if (pElement == nullptr) return XML_ERROR_PARSING_ELEMENT;
    std::string data;
    data = pElement->GetText();
    if (data.c_str() == NULL) return XML_ERROR_PARSING_ELEMENT;
    std::cout << data << std::endl;
    return 0;
}

