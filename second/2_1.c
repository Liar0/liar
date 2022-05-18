#include"2_1_3.h"
#include<iostream>
using namespace std;

int main(){	

	//	int A[20] = {1,3,5,7,9};
	//	int B[20] = {2,4,5,8,10};
	//	int a = 5;
	//	int b = 5;
	//	MergeArray(A,a,B,b);
	//	for(int i = 0; i < 10; i++)
	//		cout<<A[i]<<endl;
	//	cout<<endl;

	//	const char *a = "12345";
	//	const char *b = "12345";
	//	const char *c = "1234";
	//	cout<<Compare(a,5,b,5)<<endl;
	//	cout<<Compare(a,5,c,4)<<endl;
	//	cout<<Compare(c,4,b,5)<<endl;
	//
	//int A[4][20] = { 
	//	{1,3,5,7,9},
	//	{2,4,6,8,9},
	//	{11,22,33,44,55}
	//};
	//int a = 5;
	//int b = 5;
	//for(int i = 0;i < 2;i++){
	//	MergeArray(A[0],a,A[i + 1],b);
	//	a = a + b;

	//}
	////MergeArray(A,a,B,b);
	//for(int i = 0; i < 15; i++)
	//	cout<<A[0][i]<<endl;
	//cout<<endl;
//	int A[] = { 1,2,3,4,5,6,7,8};
//	int B[] = { 1,2,5,9,10,12};
//	int  c = 20;
//	int C[20];
//	MergeOther(A,8,B,6,C,c);
//
//	for(int i = 0; i < c; i++)
//		cout<<C[i]<<endl;
//	cout<<endl;
	

	struct List *heap = CreateList(1);
      	InsertHeapNode(heap,2);	
      	InsertHeapNode(heap,3);	
      	InsertHeapNode(heap,4);	
      	InsertHeapNode(heap,5);	
      	InsertHeapNode(heap,6);
	PrintList(heap);	
	
	ReserveListU(heap);
	PrintList(heap);

	return 0;
}
