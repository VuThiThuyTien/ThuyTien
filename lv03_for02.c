#include<stdio.h>
#include<math.h>
main()
{
    int i;
    for(i=100;i<=999;i++)
        if(((i/100)*(i/100)*(i/100)+((i%100)/10)*((i%100)/10)*((i%100)/10)+((i%100)%10)*((i%100)%10)*((i%100)%10))==i)
        printf("%d\n",i);
}
