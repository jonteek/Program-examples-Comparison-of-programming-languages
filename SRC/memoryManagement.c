


#include<stdio.h>
#include<stdlib.h> //innehåller funktioner för minneshantering
int main()
{
  

  int *p; // Variabeln p är en pekare
  p = malloc(sizeof(int) * 10); //p pekar till första adressen i ett block av data som håller 10 heltal
  free(p); //blocket som p pekar till avfärdas
  p = calloc(10,sizeof(int)); // p pekar till första adressen i ett block av data som håller 10 heltal
  p = realloc(p,sizeof(int) * 5); //Blocket som p pekar till minskar till storleken 5
  free(p); //blocket som p pekar till avfärdas
  return 0;
}

/*
int five = 5;
  int *pointer; // variablen pointer är en pekare till ett heltal
  pointer = &five; //pointer pekar till adressen där värdet i variablen 5 är lagrat
  int dereference = *pointer; // variablen dereference tilldelas värdet i adressen till variabeln five
  return 0;
*/
