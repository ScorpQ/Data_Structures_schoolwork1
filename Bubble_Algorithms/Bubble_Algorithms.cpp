#include <iostream>
using namespace std;




int main()
{
	int UnsortedA[7] = { 4,3,16,7,11,23,8};
	bool IsNotSorted = true;
	int array_size = sizeof(UnsortedA) / sizeof(int);
	int temp;

	while (IsNotSorted)
	{
		for (int index = 0; index < array_size; index++)
		{
			IsNotSorted = false;
			if (UnsortedA[index] > UnsortedA[index + 1])
			{
				temp = UnsortedA[index];
				UnsortedA[index] = UnsortedA[index + 1];
				UnsortedA[index + 1] = temp;
				IsNotSorted = true;
			}
		}

	}

	for (int i = 0; i < array_size; i++)
		cout << UnsortedA[i] << " ";













	/*
	int temp, Unsorted[6] = { 15,20,5,1,9,13 };
	int l = sizeof(Unsorted[6]) / sizeof(int);

	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5 - i; j++)
			if (Unsorted[j] > Unsorted[j + 1])
			{
				temp = Unsorted[j];
				Unsorted[j] = Unsorted[j + 1];
				Unsorted[j + 1] = temp;
			}

	for (int i = 0; i < 6; i++)
	{
		cout << Unsorted[i] << " ";
	}


//**********************************************************************************************************
	

 int temp, Unsorted[6] = { 15,20,5,1,9,13 };
 bool iterationComplete = true;

 while (iterationComplete)
 {
	 iterationComplete = false;
	 for (int i = 0; i < 5; i++)
	 {
		 if (Unsorted[i] > Unsorted[i + 1])
		 {
			 temp = Unsorted[i];
			 Unsorted[i] = Unsorted[i + 1];
			 Unsorted[i + 1] = temp;
			 iterationComplete = true;
		 }
	 }

 }				*/
  

}

