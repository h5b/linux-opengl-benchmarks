#ifndef _CPUIDH32_H_
#define _CPUIDH32_H_

#ifdef __cplusplus
extern "C" {
#endif

extern char    configdata[10][200];
extern char    timeday[30];
extern double  theseSecs;
extern double  startSecs;
extern double  secs;
extern double  ramGB;
extern int     megaHz;
extern int     pagesize;
extern int     CPUconf;
extern int     CPUavail;

extern int     hasMMX;
extern int     hasSSE;
extern int     hasSSE2;
extern int     hasSSE3;
extern int     has3DNow;

void start_time();
void end_time();
void local_time();
int getDetails();

#ifdef __cplusplus
};
#endif

#endif

