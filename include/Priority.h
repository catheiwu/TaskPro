#ifndef PRIORITY_H
#define PRIORITY_H


class Priority
{
    private:
    int priority; 

    public:
    Priority();
    ~Priority();
    string getDescription();
    void editDescription(string newDescription);
};
#endif
