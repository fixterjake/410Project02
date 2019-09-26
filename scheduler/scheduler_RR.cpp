/*
 * SchedulerSTRR.cpp
 *
 *  Created on: Sep 7, 2019
 *      Author: keith
 *
 *      implements round robin scheduling algorithm
 *      pre-emptive
 */


#include "../includes/scheduler_RR.h"

void Scheduler_RR::sort() {
	for (int i = 0; i < Scheduler::time_slice; i++) {
		Scheduler::time_slice--;
	}
}

