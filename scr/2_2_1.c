#include"2_2_1.h"
#include<iostream>
using namespace std;

void Swap(int &A, int &B){
	int temp = A;
	A = B;
	B =temp;
}


int Input(int A[],int &len, int &count){
	int i = 0;
	for(int j = 0;j < len; j++){
		A[j] = 0;
	}

	while(i < len){
		cin>>A[i];
		if(A[i] < 0){
			A[i] = 0;
			break;
		}
		i++;
	}

	for(int j = 0; j <=  i / 2 - 1; j++){
		Swap(A[i - 1 -j],A[j]);			
	}
	count = i;

	return 1;
}

void Add(int A[], int na, int B[], int nb, int C[],int &c, int clen){
	for(int i = 0;i < clen; i++){
		C[i] = 0;
	}
	int len = nb;
	if(na > nb)
		len = na;
	cout<<"len"<<len<<endl;
	int addNum = 0;
	for(int i = 0; i < len;i++ ){
		 addNum += A[i] + B[i];
		 C[i] = addNum % 10;
		 addNum /=10;
	}
	
	while(addNum > 0){
		C[len++] = addNum % 10;
		addNum /= 10;
	}
	c = len;
}

void Reserve(int A[], int start, int len){
	for( int i = start;i < len / 2 ;i++){
		Swap(A[len - 1 - i],A[i]);
	}
}
void Change(int A[],int Alen, int Blen,int Clen){
	if(Alen < Blen + Clen)
		return;

	Reserve(A, 0, Blen + Clen);

	Reserve(A, 0, Clen);
	
	Reserve(A, Clen, Clen + Blen);
}

int CoefficientAdd(int A[], int Alen, int B[], int Blen, int C[], int Clen){

	return -1;
	//if(Clen < Alen
}



