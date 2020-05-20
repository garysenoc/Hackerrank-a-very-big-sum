#include<stdio.h>


int sumArray(int numSize);

int main(void)
{
int num;

sumArray(num);

return 0;
}

int sumArray(int numSize)
{
    unsigned long long int sum=0;

    scanf("%d",&numSize);
    unsigned long long int num[numSize];

    for(int i =0;i<=numSize-1;i++)
    {
        scanf("%llu",&num[i]);
        sum = sum + num[i];
    }
   
   printf("%llu",sum);
   
   return 0;
}
