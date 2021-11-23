#include <iostream>
#include <ctime>
#include <cstdlib>
#include <chrono>
using namespace std;

void PrintTheArray(int A[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
}



void FillTheArray(int A[], int size)
{
    int between = size + 100;
    for (int i = 0; i < size; i++)
        {
        A[i] = rand() % between;
        }
}

void FindMaxElement(int A[], int size)
{
    int max = A[0];
    for (int i = 0; i < size; i++)
    {
        if (max < A[i])
            max = A[i];
    }

    cout << max;
}

int main()
{
    int start_s = clock();
    const int sizeA = 100000;
    int UnsortedA[sizeA];
    FillTheArray(UnsortedA, sizeA);
    FindMaxElement(UnsortedA, sizeA);
    
     int ToCount[32768], Sorted[sizeA];
 
    for (int i = 0; i < sizeof(ToCount) / sizeof(int); i++)
    {
       ToCount[i] = 0;
    }

    for (int i = 0; i < sizeA; i++)
    {
        ToCount[UnsortedA[i]]++;
    }
    
    for (int i = 1; i < sizeof(ToCount) / sizeof(int); i++)
    {
        ToCount[i] = ToCount[i] + ToCount[i - 1];
    }

    for (int i = 0; i < sizeA; i++)
    {
        Sorted[ToCount[UnsortedA[i]] - 1] = UnsortedA[i];
        ToCount[UnsortedA[i]]--;
    }
   
    int stop_s = clock();
  
    cout << (stop_s - start_s) / (double(CLOCKS_PER_SEC));

 
    
}


