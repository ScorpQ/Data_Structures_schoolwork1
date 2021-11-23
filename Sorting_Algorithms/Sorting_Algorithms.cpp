#include <iostream>



using namespace std;

int main()
{
	
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

	/*
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

 }*/
}

