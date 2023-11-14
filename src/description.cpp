#include "../include/Description.h"
#include <string>

Description::Description()
{
    descrip="";
}

Description::~Description()
{
    
}
std::string Description::getDescription()
{
    return descrip;
}

void Description::editDescription(std::string newDescription)
{
    descrip = newDescription;
}