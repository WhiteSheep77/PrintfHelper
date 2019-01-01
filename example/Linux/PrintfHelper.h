
#ifndef PrintfHelper_HHHH_20190101 
#define PrintfHelper_HHHH_20190101
#include <stdio.h>

#define ErrorPrintf(format, ...) \
								{	\
									printf("!!!!!!!!!!!!!!!!!!!!![Error]!!!!!!!!!!!!!!!!!!!!!\n"); \
									printf("%s:%s: at Line%d:",__FILE__,__func__,__LINE__);  \
									printf(format, ##__VA_ARGS__);\
									printf("\n"); \
								}

#define WaringPrintf(format, ...)\
								{	\
									printf("--------------------[Waring]--------------------\n"); \
									printf("%s:%s: at Line%d:",__FILE__,__func__,__LINE__);  printf(format, ##__VA_ARGS__);\
									printf("\n"); \
								}

#define MessagePrintf(format, ...) {printf("%s:%s: at Line%d:",__FILE__,__func__,__LINE__);  printf(format, ##__VA_ARGS__);printf("\n"); }

#define LogPrintf(format, ...) {printf("%s:%s: at Line%d:",__FILE__,__func__,__LINE__);  printf(format, ##__VA_ARGS__);printf("\n"); }


#endif 


