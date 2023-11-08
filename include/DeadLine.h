#ifndef DEADLINE_H
#define DEADLINE_H

#include<ctime>
#include <string>

class DeadLine
{
private:
    struct tm* ddl;

public:
    string getDdl();
    void editDdl(struct tm* newTime);
};

#endif