

#ifndef __Customer__ 
#define __Customer__

#include <stdio.h>
typedef struct Customer{
	int EntryTime; 
	int serviceTime;
} Customer;


void CustDestroy(Customer * target);
void CustSetEntryTime(Customer * target, int t);
void CustSetServiseTime(Customer * target, int t);
void CustAssign(Customer * target, Customer * source);
void CustInitialize(Customer * target);
void CustWriteValue(FILE * stream, Customer * source);
int CustGetServiseTime(Customer * source);
int CustGetEntryTime(Customer * source);

#endif
