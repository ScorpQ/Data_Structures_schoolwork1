#include <iostream>
#include <ctime>
#include <cstdlib>
#include <chrono>

using namespace std;

void printArray(int A[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << A[i] << " ";
	}

}

void fillTheArray(int A[], int size)
{
	int between = size + 100; 
		for (int i = 0; i < size; i++)
		{
			A[i] = rand() % between; 
		}
}

int main()
{
	const int Q = 10;
	int UnsortedA[Q];
	fillTheArray(UnsortedA, Q);
	int temp;
	clock_t baslangic = clock(), bitis;
	for (int i = 1; i < Q; i++)
	{
		for (int j = i; j > 0 && UnsortedA[j] < UnsortedA[j - 1]; j--)
		{
			temp = UnsortedA[j];
			UnsortedA[j] = UnsortedA[j - 1];
			UnsortedA[j - 1] = temp;
		}
	}
	
	printArray(UnsortedA, Q);
	bitis = clock();
	cout << (float)(bitis - baslangic) / (double)CLOCKS_PER_SEC;
}

/*
int UnsortedA[8] = { 4,1,8,3,11,6,13,21 };
int temp;

for (int i = 1; i < 8; i++)
{
	for (int j = i; j > 0 && UnsortedA[j] < UnsortedA[j - 1]; j--)
	{
		temp = UnsortedA[j];
		UnsortedA[j] = UnsortedA[j - 1];
		UnsortedA[j - 1] = temp;
	}


}*/
