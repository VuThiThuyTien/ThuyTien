#include<stdio.h>
#include<math.h>
main()
{
    float a,chuVi,dienTich;
    printf("Nhap chu vi: ");
    scanf("%f",&chuVi);
    a=0;
    while(a<=chuVi/4)
    {
        a++;
        if(a==chuVi/4) dienTich=a*a;
    }

    printf("Dien tich lon nhat:%0.2f",dienTich);


}
