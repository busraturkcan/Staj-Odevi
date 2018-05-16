//Bubble Sort
#include <stdio.h>
#include <stdlib.h>
 
#define SIZE 10
int myArray[SIZE];

void bubbleSort(int x[])
{
    int i, j,tmp;
    for(i = 0; i < SIZE; i++)
    {
         int sirali=1;
        //Her iterasyonda elemanlarý karþýlaþtýracak olan iç döngü
        for( j = (SIZE-1); j > i; j--)
        {
            if(x[j-1] > x[j]) //þayet buraya girmiyorsak dizi sýralý demektir
            {
               sirali=0; //þayet giriyorsak sýralý deðil demektir
               tmp=x[j-1];
               x[j-1]=x[j];
               x[j]=tmp;      
            }    
        }
        if(sirali)//þayet dizinin üstünden geçtiðimiz halde 
                 //hiç bir deðer yer deðiþtirmiyorsa
                // dizi sýralýdýr döngüden çýkýlabilir
         break;
    }
}
//dizimizin elemanlarýný ekrana basan fonksiyon
void printSorted()
{
    int i;
    for( i = 0; i < SIZE; i++)
    {
        printf("%d\n", myArray[i]);
    }
}
//Programý çalýþtýracaðýmýzda random olarak dizi elemanlarýný üreten fonksiyon.
void init()
{
    int i;
    for( i = 0; i < SIZE ; i++)
    {
        myArray[i] = rand()%100;
    }
}
//ilgili fonksiyonlarý çaðýrdýðýmýz main fonksiyonu
int main()
{
    init();
    bubbleSort(myArray);
    printSorted();
    system("PAUSE");
    return 0;
}
