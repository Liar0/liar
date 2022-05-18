#ifndef _2_1_3_H_
#define _2_1_3_H_

struct Node{
	int num;
	Node *next;
};

struct List{
	Node *heap;
	int len;
};

void MergeArray(int A[],int &Alen,int B[],int &Blen);
int Compare(const char *A,int Alen,const char *B,int Blen);
void MergeOther(int A[],int alen,int B[],int blen,int C[],int &c);
void InsertHeapNode(struct List *heap,int num);
struct List* CreateList(int num);
void PrintList(struct List *heap);
void ReserveListU(struct List *heap);
#endif
