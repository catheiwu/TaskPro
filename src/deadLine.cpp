#include "../include/Deadline.h"
#include <ctime>

Deadline::Deadline()
{
    ddl = nullptr;
}

//use localtime() to get the correct value.
Deadline::Deadline(struct tm *ddlTime)
{
    ddl = ddlTime;
}
Deadline::~Deadline()
{
}

// we don't need to delete cause localtime() uses stack
void Deadline::editDdl(struct tm *newTime)
{
    // struct tm *temp = ddl;
    // delete temp;
    ddl = newTime;
}

std::string Deadline::getDdl()
{
    return asctime(ddl);
}
