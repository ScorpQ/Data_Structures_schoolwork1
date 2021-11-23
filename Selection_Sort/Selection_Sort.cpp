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

//5,7,2,9,6,1,3,7;

int main()
{
    const int Q = 100000;
    clock_t baslangic = clock(), bitis;
    int UnsortedA[Q];
    fillTheArray(UnsortedA, Q);
    int min_index,temp;
    int size = sizeof(UnsortedA) / sizeof(int);
    for (int i = 0; i < size-1; i++)
    {
        min_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (UnsortedA[min_index] > UnsortedA[j])
                min_index = j;
        }
        
        temp = UnsortedA[i];
        UnsortedA[i] = UnsortedA[min_index];
        UnsortedA[min_index] = temp;
 
    }

    printArray(UnsortedA,size);
    bitis = clock();
    cout << (float)(bitis - baslangic) / CLOCKS_PER_SEC;

}

  //
  //sorted[ToCount[UnsortedA[0]]-1] ======== Unsorted[0];
  //
 