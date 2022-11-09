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



int maxposition(int a[],int  n)
{
    int temp = a[0];
    int x;
    for (int i = 0; i < n-1; i++)
    {
        
        if(a[i]> temp)
        {
          temp = a[i];  
          x=i;
        }
    }
    
    return x;
}

int minposition(int a[],int  n)
{
    int temp = a[0];
    int y;
    for (int i = 0; i < n-1; i++)
    {
        
        if(a[i]< temp)
        {
          temp = a[i];  
          y=i;
        }
    }
    return y;
    
}


void main(int argc, char const *argv[])
{
    Array value;
    CreateArray(&value);
    
    
    printf("max dau tien tai vi tri a[%d]\n", maxposition(value.ptr,value.size));
    printf("min dau tien tai vi tri a[%d]\n", minposition(value.ptr,value.size));

   
    
}
