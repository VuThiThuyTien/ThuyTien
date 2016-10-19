#include<stdio.h>
#include<math.h>
main()
{
    int n,i;
    float s;
    printf("Nhap n so dau tien: ");
    scanf("%d",&n);
    s=0;
    for(i=1;i<=n;i++)
        s=s+(float)1/i;
    printf("S=%0.2f",s);

}
