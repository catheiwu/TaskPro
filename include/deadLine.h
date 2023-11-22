#ifndef DEADLINE_H
#define DEADLINE_H

#include <ctime>
#include <string>

class deadLine
{
private:
    struct tm* ddl; //store local time

public:
    deadLine();
    deadLine(struct tm*);
    ~deadLine();
    std::string getDdl();
    void editDdl(struct tm* newTime);
};

#endif
