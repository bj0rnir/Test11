#ifndef _LOG_H
#define _LOG_H
//  Definitions in /cpp/src/log.cpp
extern int LOG_FD;
__attribute__((constructor)) void init();   //  Opens the log file for reading and writing at runtime
#endif
