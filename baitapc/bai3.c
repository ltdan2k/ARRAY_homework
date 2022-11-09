#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
    int *ptr;
    int size;
}Array;

void CreateArray(Array *value){

    srand(time(NULL));
    value->size = 20 + rand() % (30 +1 - 20);
    int temp;
    printf("Kich thuoc cua array: %d\n", value->size);

    value->ptr = (int *)malloc(value->size * sizeof(int));

    for(int i = 0; i < value->size; i++){
        temp = rand() %6;
        value->ptr[i] = temp;
        printf("arr[%d]=%d\n",i,value->ptr[i]);
    }
}
int SoNguyenTo(int n)
{
     if (n<=1)
         return 0;
     for (int i=2; i<n; i++)
         if(n%i==0)
             return 0;
     return 1;
 }
int SNTCuoiCung(int a[],int n)
{
   for(int i=n-1; i>=0; i--)
       if(SoNguyenTo(a[i])==1)
           return a[i];
   return -1;
}

void main(int argc, char const *argv[])
{
    Array value;
    CreateArray(&value);
    
    
    printf("so nguyen to cuoi la :%d\n",SNTCuoiCung(value.ptr,value.size));

   
    
}
