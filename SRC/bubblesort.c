#include<stdio.h>
int isSorted(int *array, int arraySize);


int isSorted(int *array, int arraySize)
{
  for(int i = 0; i <= arraySize-2; i++)
    {
      if (array[i] > array[i + 1])
	return 0;
    }
  return 1;
}

int* bubbleSort(int *array, int arraySize)
{
  int temp;
  
  
  while(!isSorted(array,arraySize)) //Funktionen isSorted kontrollerar om en lista är sorterad. Koden nedan upprepas till listan är sorterad
    {
      for (int i = 0; i <=arraySize - 2; i++){ //Upprepning av processen som kontrollerar om föregående värde är större än efterföljande
	if(array[i] > array[i+1])
	  {
	  temp = array[i];
	  array[i] = array[i + 1];
	  array[i + 1] = temp;
	  }
      }
    }
  return array; //Den sorterade listan återges
}


int main(){
  int lst[10] = {10,9,8,7,6,5,4,3,2,1};
  int sizeOfArray = sizeof(lst) / sizeof(int);
  int* array = bubbleSort(lst,sizeOfArray);
  
  for (int i = 0; i<sizeOfArray; i++)
    printf("%d\n",array[i]);
  
}
