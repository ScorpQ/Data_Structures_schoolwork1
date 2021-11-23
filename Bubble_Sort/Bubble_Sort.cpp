#include <iostream>
#include <ctime>
#include <cstdlib>
#include <chrono>
using namespace std;
 
void fillTheArray(int A[],int size)
{
	int between = size + 100; 
	for (int i = 0; i <size; i++)
	{
		A[i] = rand() % between; 
	}
}

void printArray(int A[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << A[i] << " ";
	}

}


int main()
{
	const int Q = 10; // to change our inputs
	int UnsortedA[Q]; // our main unsorted array
	fillTheArray(UnsortedA, Q); // fill the array with random numbers.
	int start_s = clock(); // not about the sorting algortihm, calculating the time.
	int temp; // temporary variable
	int array_size = sizeof(UnsortedA) / sizeof(int); // Array size's our main unsorted array.

	for ( int  i = 0; i < array_size; i++) 
	{
	
		for (int index = 0; index < array_size-1; index++)
		{                         
			
			if (UnsortedA[index] > UnsortedA[index + 1] )
			{
				temp = UnsortedA[index];
				UnsortedA[index] = UnsortedA[index + 1]; 
				UnsortedA[index + 1] = temp;
				
			}
		}
	}

	printArray(UnsortedA, array_size);
	int stop_s = clock(); 
	cout << (stop_s - start_s) / (double(CLOCKS_PER_SEC)); // it's showing the runing time.
}


/*

										// THIS PART IS WITHOUT RANDOM INPUTS.
srand(time(NULL));
int start_s = clock();
//**********************************************

int UnsortedA[10], temp;
bool IsNotSorted = true;
fillTheArray(UnsortedA, 10);

while (IsNotSorted)
{
	for (int i = 0; i < 9; i++)
	{
		IsNotSorted = false;
		if (UnsortedA[i] > UnsortedA[i + 1])
		{
			temp = UnsortedA[i];
			UnsortedA[i] = UnsortedA[i + 1];
			UnsortedA[i + 1] = temp;
			IsNotSorted = true;
		}
	}


}

//**********************************************
printArray(UnsortedA, 10);
int stop_s = clock();
cout << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000;
}

*/