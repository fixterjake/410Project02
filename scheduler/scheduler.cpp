/*
 * scheduler.cpp
 *
 *  Created on: Sep 8, 2019
 *      Author: keith
 */

#include "../includes/scheduler.h"

//holds jobs that are in memory and ready to run
//for this program they are leaded into memory at arrival time
//this is initialized from a reference, it cannot be null
std::queue<PCB> *ready_q;

//preemptive algorithm or not
bool preemptive;

//number of clock ticks a process can run before its switched out
int time_slice;

//add a process, either a new one or one that
//had been running on the CPU and has been preempted
void Scheduler::add(PCB p) {
	ready_q->push(p);
}

//get next process
PCB Scheduler::getNext() {
	PCB result = ready_q->front();
	ready_q->pop();
	return result;
}

//returns true if there are no jobs in the readyQ
//false otherwise
bool Scheduler::isEmpty() {
	return ready_q->empty();
}

//if process has completed (used all its remaining_cpu_time) or
//if we are using a preemptive scheduling algorithm and the
//timeslice is over then its time to switch processes
//returns:
//true - switch processes
//false - do not switch
bool Scheduler::time_to_switch_processes(int tick_count, PCB &p) {
	if (p.process_number == UNINITIALIZED || p.remaining_cpu_time == 0 || time_slice == 0) {
		return true;
	}
	return false;
}




