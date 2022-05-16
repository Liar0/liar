#ifndef _CSORT_H_
#define _CSORT_H_
#include<iostream>	
	bool FuncSort(int a,int b);
	void ChangeSort(int &a,int &b);
	void BubbleSort(int num[],int len,bool (*func)(int a,int b) = NULL);

#endif
