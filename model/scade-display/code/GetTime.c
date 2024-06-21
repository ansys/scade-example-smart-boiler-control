
#include "sgl.h"
#include "sdy_imported.h"
#include <stdio.h>      /* puts, printf */
#include <time.h>       /* time_t, struct tm, time, gmtime, localtime */

char targetTime[6] = "00:00";

void GetTime(SGLbyte (*vartime)[6]){
	int i=0;
	time_t now;
	struct tm *ptm;
	now = time(NULL);
	ptm = localtime(&now);
	sprintf(targetTime, "%2d:%02d", (ptm->tm_hour)%24, ptm->tm_min);
	for (i=0;i<6;i++) {
		(*vartime)[i] = targetTime[i];
	}	
}

