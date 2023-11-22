#ifndef DESCRIPTION_H
#define DESCRIPTION_H

#include <string>

class description
{
private:
    std::string descrip;
public:

    description();
    ~description();
    std::string getDescription();
    void editDescription(std::string newDescription);
};


#endif
