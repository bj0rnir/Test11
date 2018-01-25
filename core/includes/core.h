#ifndef _CORE_H
#define _CORE_H
extern struct sysinfo SYSTEM_INFO;
__attribute__((constructor)) void core_init();
#endif
