#include<stdlib.h>
#include<stdio.h>

int compar(void *pa ,void *pb)
{
	int a =*((int*)pa);
	int b=*((int*)pb);
	int ret=0;
	if(a<b)
		ret=-1;
	else if (a>b)
		ret=1;
	return ret ;
}

 int main()
{
	 printf("Array before sorting = ");
    int myarr[] = {75,101,58,77,99,47,1,0,6,8,4,0};

    size_t L=sizeof(myarr)/sizeof(int);

    for (int n = 0 ; n < sizeof(myarr)/sizeof(int); n++)
            printf ("%d  ", myarr[n]);

    printf("\n");

    printf("Array after sort =");

    qsort (myarr,L, sizeof(int),compar);
    for (int i = 0 ; i < sizeof(myarr)/sizeof(int); i++)
        printf ("%d ", myarr[i]);

    return 0;
}
