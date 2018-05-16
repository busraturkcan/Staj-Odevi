#include <stdio.h>
using namespace std;
//Fibonacci
int main()
{
	int a,b,c,sayici,toplam=0;
	printf("fibonacci sayisi kactan baslasin:"); scanf("%d",&a);
	printf("kac tane fibonacci sayisi yazilsin:"); scanf("%d",&b);
	
	printf("%d\n",a);
	c=a;
	
	if(a==0){
		a++;
	}
	printf("%d\n",a);
	
	for(sayici=2;sayici<=b;sayici++)
	{
		toplam = c + a;
		c=a;
		a=toplam;
		printf("%d\n",a);
	}
	scanf("%d",&a);
	
	
	return 0;
}
