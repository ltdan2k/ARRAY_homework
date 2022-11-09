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



int USCLN (int n, int m)
{
    while (n != 0 && m != 0)
        if (n>m)
            n -= m;
        else
            m -= n;
    if (n == 0)
        return m;
    else
        return n;
}
int uocchungcuamang(int b[],int m)
{
    int uc=b[0];
    for (int i=1;i<m;i++)
        uc = USCLN(uc,b[i]);
    return uc;
}

void main(int argc, char const *argv[])
{
    Array value;
    CreateArray(&value);
    
    
    printf("UCLN = :%d\n", uocchungcuamang(value.ptr,value.size));

   
    
}
