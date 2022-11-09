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



int evensum(int a[],int  n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if((a[i]%2) ==0 && a[i] !=0)
        {
            
            sum +=a[i];
        }
    }
    return sum;
}


void main(int argc, char const *argv[])
{
    Array value;
    CreateArray(&value);
    
    
    printf("even count = %d\n", evensum(value.ptr,value.size));

   
    
}
