#include<stdio.h>
#include<iostream>
#include"CSort.h"
using namespace std;
int main()
{	
	int num[] = { 1,3,5,7,5,4};
	int len = sizeof(num) / sizeof(int);
	BubbleSort(num,len);

	for(int i = 0;i < len;i++){
		cout<<num[i]<<"\t";
	}
	cout<<endl;


	return 0;
}
