#include "core.h"
struct sysinfo SYSTEM_INFO
__attribute__((constructor)) void core_init(){
  sysinfo(&SYSTEM_INFO);
}
