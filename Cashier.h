
#ifndef __cashier__ 
#define __cashier__

#include <stdio.h>


typedef struct
{
	int tBusy;		
	int tInactive;	
	int customers;	
	int tRemaining; 
} Cashier;

void CashCreate(Cashier * c);
void CashNewCust(Cashier * c);
void CashSetRemTime(Cashier * c, int duration);
void CashInactive(Cashier * c);
void CashBusy(Cashier * c);
int CashFree(Cashier * c);
int CashGetNoCustomers(Cashier * c);
int CashGetRemTime(Cashier * c);
int CashGetInactiveTime(Cashier * c);
int CashGetBusyTime(Cashier * c);
#endif