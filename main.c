#include <stdio.h>
 
int main()
{
  int i, a = 50, count; 
  

  while(a <= 200)
  {
    count = 0;
    i = 2;
    while(i <= a/2)
    {
      if(a%i == 0)
      {
        count++;
      }
      i++;	
    }	
    if(count == 0)
    {
	printf(" %d \n", a);
    }
    a++; 
  }
	
  return 0;
}
