#include "../include/DeadLine.h"
#include <ctime>

DeadLine::DeadLine()
{
    ddl = nullptr;
}
DeadLine::DeadLine(struct tm *ddlTime)
{
    ddl = ddlTime;
}
DeadLine::~DeadLine()
{
}

void DeadLine::editDdl(struct tm *newTime)
{
    // struct tm *temp = ddl;
    // delete temp;
    ddl = newTime;
}

std::string DeadLine::getDdl()
{
    return (asctime(ddl));
}