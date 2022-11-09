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
int dautientrongdoan(int a[], int n, int x, int y)
{
    int dem =0;
    int i=0;
    for(i=0; i<n;i++)
    {
         if ( a[i]>=x && a[i]<=y )
         {
              dem++;
              break;
         }
    }
    if (dem == 0)
           return x;
    return a[i];
}

void main(int argc, char const *argv[])
{
    Array value;
    CreateArray(&value);
    
    
    printf("SO CAN TIM LA :%d\n",dautientrongdoan(value.ptr, value.size,2, 3));

   
    
}
