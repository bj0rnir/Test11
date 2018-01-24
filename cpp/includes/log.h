#ifndef _LOG_H
#define _LOG_H
//  Definitions in /cpp/src/log.cpp
extern std::ofstream LOG_FD;
__attribute__((constructor)) void init();   //  Opens the log file for reading and writing at runtime
#endif
