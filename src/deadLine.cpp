#include "../include/DeadLine.h"

void DeadLine::editDdl(struct tm *newTime)
{
    struct tm *temp = ddl;
    delete temp;
    ddl = newTime;
}

std::string DeadLine::getDdl()
{
    return (asctime(ddl));
}