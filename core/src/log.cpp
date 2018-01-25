#include "log.h"
std::ofstream LOG_FD;
__attribute__((constructor)) void init(){   //  Opens the log file for reading and writing at runtime
  LOG_FD.open("arsenal.log", std::ofstream::out | std::ofstream::app);
}
