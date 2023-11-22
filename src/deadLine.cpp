#include "../include/DeadLine.h"
#include <ctime>

deadLine::deadLine()
{
    ddl = nullptr;
}

//use localtime() to get the correct value.
deadLine::deadLine(struct tm *ddlTime)
{
    ddl = ddlTime;
}
deadLine::~deadLine()
{
}

// we don't need to delete cause localtime() uses stack
void DeadLine::editDdl(struct tm *newTime)
{
    // struct tm *temp = ddl;
    // delete temp;
    ddl = newTime;
}

std::string deadLine::getDdl()
{
    return asctime(ddl);
}
