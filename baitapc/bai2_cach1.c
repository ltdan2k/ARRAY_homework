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

void main(int argc, char const *argv[])
{
    Array value;
    CreateArray(&value);

    for(int i =value.size -1; i < value.size; i--)
    {
        if((value.ptr[i] % 2 ==0) &&(value.ptr[i] !=0) )
        {
        printf("so chan cuoi cung la :%d \n", value.ptr[i]);
        goto nhap;
        }

    }
    printf("-1");
    nhap:
    printf("---------");
    
}
