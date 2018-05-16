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
        //Her iterasyonda elemanlar� kar��la�t�racak olan i� d�ng�
        for( j = (SIZE-1); j > i; j--)
        {
            if(x[j-1] > x[j]) //�ayet buraya girmiyorsak dizi s�ral� demektir
            {
               sirali=0; //�ayet giriyorsak s�ral� de�il demektir
               tmp=x[j-1];
               x[j-1]=x[j];
               x[j]=tmp;      
            }    
        }
        if(sirali)//�ayet dizinin �st�nden ge�ti�imiz halde 
                 //hi� bir de�er yer de�i�tirmiyorsa
                // dizi s�ral�d�r d�ng�den ��k�labilir
         break;
    }
}
//dizimizin elemanlar�n� ekrana basan fonksiyon
void printSorted()
{
    int i;
    for( i = 0; i < SIZE; i++)
    {
        printf("%d\n", myArray[i]);
    }
}
//Program� �al��t�raca��m�zda random olarak dizi elemanlar�n� �reten fonksiyon.
void init()
{
    int i;
    for( i = 0; i < SIZE ; i++)
    {
        myArray[i] = rand()%100;
    }
}
//ilgili fonksiyonlar� �a��rd���m�z main fonksiyonu
int main()
{
    init();
    bubbleSort(myArray);
    printSorted();
    system("PAUSE");
    return 0;
}
