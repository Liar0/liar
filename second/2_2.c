#include"2_2_1.h"
#include<iostream>
using namespace std;

int main(){
//	int A[200];
//	int C[200];
//	int B[200];
//	int len = 200;
//	int na = 0,nb = 0;
//	int nc = 0;
//
//	Input(A, len, na);
//	Input(B, len, nb);
//	
//	
//	for(int i = 0; i < na;i++){
//		cout<< "A:" <<A[i]<<"\t";
//	}
//	cout<<endl;
//
//	Add(A, na, B, nb, C, nc,len);
//
//	for(int i = nc - 1; i >= 0;i--){
//		cout<< C[i]<<"\t";
//	}
//	cout<<endl;

	int A[12] = {1,2,3,4,5,6,7,8,9,10};

	int b = 3;
	int c = 7;
	Change(A, 12, b, c);
	for(int i = 0; i < b + c;i++)
		cout<<A[i]<<"\t";
	cout<<endl;



	return 0;
}
