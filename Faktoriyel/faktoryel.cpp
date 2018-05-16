#include <stdio.h>
//Factoriyel

int main()
{
	int a,b,fact=1;
	printf("Bir sayi giriniz : ");
	scanf("%d",&b);
	if(b==0)
	{
        return fact;
    }
    else
    {
        for(a=1;a<=b;a++)
	    {
		    fact=fact*a;	
	    }
    }
	
	printf("%d 'nin faktoryeli %d dir.",b,fact);
	scanf("%d",&a);
	
	
	return 0;

}

