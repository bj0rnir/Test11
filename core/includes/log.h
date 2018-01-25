#ifndef _LOG_H
#define _LOG_H
#include <fstream>
//  Definitions in /cpp/src/log.cpp
extern std::ofstream LOG_FD;
extern char CWD[1024];
__attribute__((constructor)) void init();   //  Opens the log file for reading and writing at runtime
#endif
