#ifndef LOGTEXT_H
#define LOGTEXT_H
#include<iostream>
#include<fstream>

class LogText
{
public:
    LogText();
    void Input(std::string text);
    void OutPut();
private:
    std::ofstream LogInput;
    std::ifstream LogOutPut;

};

#endif // LOGTEXT_H
