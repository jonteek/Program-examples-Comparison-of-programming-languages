

#include<stdio.h>
#include<time.h>
int main()
{
  int arr[10] = {1,2,3,4,5,6,7,8,9,10}; // Deklarerar en array med 10 platser. Den innehåller 1,2,3,4,5,6,7,8,9,10
  int *p = &arr[0]; //p pekar till adressen av första medlemmen i arrayen
  p = arr; // p pekar till adressen av första medlemmen i arrayen
  int firstValue = *p; //variabeln firstValue tilldelas första värdet i arrayen.
  int secondValue = *(p+1); //variabeln secondValue tilldelas andra värdet i arrayen
  secondValue = arr[1]; //variabeln secondValue tilldelas andra värdet i arrayen
  printf("%lu",clock());
  return 0;
}
  
  
