#include <stdio.h>

int main(void) 
{
  int val;
  int age;
  scanf("%d",&val);
  scanf("%d",&age);
  printf("%d", val+age);
  printf(" %d", val-age);
  printf(" %d", val*age);
  printf(" %d", val/age);
  printf(" %d", val%age);
  return (0);
}