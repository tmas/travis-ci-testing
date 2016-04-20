#include<stdio.h>

int main()
{
  int year = 400;
  printf("int year = 400;\n");
  printf("year%%100 is equal to %d\n", year%100);
  printf("%d evalates to %d\n", year%100, !((year%100)==0));
  printf("!(year%%100) evalates to %d\n", !(year%100));
  return 0;
}
