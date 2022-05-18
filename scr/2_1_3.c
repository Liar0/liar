#include"2_1_3.h"
#include<stdio.h>
#include<iostream>
using namespace std;

int MaxLenSize = 1000;

void MergeArray(int A[],int &Alen,int B[],int &Blen)
{
	if(Alen + Blen -1 > MaxLenSize)
		return;
	int i = Alen-1,j = Blen-1;
	while(i >= 0 && j >= 0){
		if(A[i] < B[j]){
			A[i + j + 1] = B[j];
		       j--;	
		}else{
		
			A[i + j + 1] = A[i];
		       i--;	
		}
	}
	while(i>=0){
		A[i + j + 1] = A[i];
		i--;	
	}

	while(j>=0){
		A[i + j + 1] = B[i];
		j--;	
	}
}


int Compare(const char *A,int Alen,const char *B,int Blen){
	if(A == NULL && B == NULL)
		return 0;
	else if(A == NULL)
		return -1;
	else if(B == NULL)
		return 1;

	//int  i = Alen,j = Blen;
	int k = 0;
	while(k <Alen && k < Blen){
		if(A[k] == B[k]){
			k++;
		}else if(A[k] < B[k]){
			return -1;
		}else{
			return 1;
		}
	}
	if(k == Alen && k == Blen )
		return 0;
	else if(Alen > Blen)
		return 1;
	else 
		return -1; 

}

void MergeOther(int A[],int alen,int B[],int blen,int C[],int &c){
	int arraylen =c;
	if(alen + blen > arraylen)
		return;
	int i = 0,j = 0;
	int k = 0;
	while(i < alen && j < blen){
		if(A[i] <= B[j]){
			if(k > 0){
				if(C[k - 1] >= A[i]){
					i++;
				}else{
					C[k++] = A[i++];
				}
			}else{

				C[k] = A[i];
				i++;
				k++;
			}
		}	
		else{
			if(k > 0){
				if(C[k - 1] >= B[j]){
					j++;
				}else{
					C[k++] = B[j++];
				}
			}else{

				C[k] = B[j];
				j++;
				k++;
			}
		}

	}

	while(i < alen){
			if(k > 0){
				if(C[k - 1] >= A[i]){
					i++;
				}else{
					C[k++] = A[i++];
				}
			}else{

				C[k] = A[i];
				i++;
				k++;
			}
	}
		
	while(j < blen){
			if(k > 0){
				if(C[k - 1] >= B[j]){
					j++;
				}else{
					C[k++] = B[j++];
				}
			}else{

				C[k] = B[i];
				i++;
				k++;
			}
	}
	c = k;

}

List *CreateList(int num){
	struct Node *node = (struct Node*)malloc(sizeof(struct Node));
	node->num = num;
	node->next =NULL;
	struct List *list = (struct List*)malloc(sizeof(struct List));
	list->heap = node;
	return list;
}

void InsertHeapNode(struct List*heap,int num){
	struct Node*node = (struct Node*)malloc(sizeof(struct Node));
	node->num = num;

	node->next =heap ->heap ;
	heap->heap = node;

}

void PrintList(struct List *heap){
	struct Node *node = heap->heap;
	while(node !=NULL){
		cout<<node->num<<"\t";
		node = node->next;
	}
	cout<<endl;
}

void ReserveListU(struct List *heap){	

	struct Node* node = heap->heap;

	struct Node *first = NULL;
	while(node != NULL){
		if(first ==NULL){
			struct Node *temp = node ->next;
			first = node;
			first -> next = NULL;
			node = temp;
		}else{
			struct Node* temp = node ->next;
			node->next = first;
			if(temp != NULL)
				node ->next = first;
			first = node;
		       node = temp;	

		}

	}
	heap ->heap = first;

}
