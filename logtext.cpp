#include "logtext.h"

LogText::LogText()
{
LogInput.open("/Users/kist/Downloads/PSI/LogData.txt");
}

void LogText::Input(std::string text){

    LogInput << &text;
    LogInput << std::endl;

}
void LogText::OutPut(){

}
