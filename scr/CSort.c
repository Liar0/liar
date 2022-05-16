#include"CSort.h"
#include<iostream>
bool FuncSort(int a,int b){
	if(a < b)
	  return false;
	return true;
}

void ChangeSort(int &a,int &b){
	int temp = a;
	a = b;
	b = temp;
}

void BubbleSort(int num[],int len,bool (*func)(int a,int b))
{	
	for(int i = 0; i < len; i++){
		for(int j = i + 1;j < len; j++){
			if(func != NULL && func(num[i],num[j]) == true)
				ChangeSort(num[i],num[j]);
			else if(FuncSort(num[i],num[j]) == true)
				ChangeSort(num[i],num[j]);
		}
	}
}
