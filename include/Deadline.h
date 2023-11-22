#ifndef DEADLINE_H
#define DEADLINE_H

#include <ctime>
#include <string>

class Deadline
{
private:
    struct tm* ddl; //store local time

public:
    Deadline();
    Deadline(struct tm*);
    ~Deadline();
    std::string getDdl();
    void editDdl(struct tm* newTime);
};

#endif
