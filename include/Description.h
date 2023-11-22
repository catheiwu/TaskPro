#ifndef DESCRIPTION_H
#define DESCRIPTION_H

#include <string>

class Description
{
private:
    std::string descrip;
public:

    Description();
    ~Description();
    std::string getDescription();
    void editDescription(std::string newDescription);
};


#endif
