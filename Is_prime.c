#include <stdio.h>
int isprime(int a,int i)
{
  if (i==1)
  {
    return 1;
  }
  if (a%i==0)
  {
    return 0;
  }
  else
     return isprime(a, i-1);
}
int main()
{
  int n, prime;
  printf("Enter a number\n");
  scanf("%d",&n);
  prime=isprime(n, n/2);
  if(prime==1)
  {
    printf("%d is a Prime Number",n);
  }
  else
  {
    printf("%d is not a Prime Number",n);
  }
  
  return 0;
}

