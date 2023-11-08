#include "../include/DeadLine.h"

void DeadLine::editDdl(struct tm *newTime)
{
    struct tm *temp = ddl;
    delete temp;
    ddl = newTime;
}

string DeadLine::getDdl()
{
    return (DeadLine::ddl);
}