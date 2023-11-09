#ifndef DEADLINE_H
#define DEADLINE_H

#include <ctime>
#include <string>

class DeadLine
{
private:
    struct tm* ddl; //store local time

public:
    DeadLine();
    DeadLine(struct tm*);
    ~DeadLine();
    std::string getDdl();
    void editDdl(struct tm* newTime);
};

#endif