#include <iostream>
#include<stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
int n,temp,k;
scanf("%d",&k);
for(int i=0;i<k;i++){
scanf("%d",&n);
n*=567;
n/=9;
n+=7492;
n*=235;
n/=47;
n-=498;
temp=n%10;
n-=temp;
n%=100;
printf("%d\n",abs(n/10));
}
return 0;
}
