#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
    int *ptr;
    int size;
}Array;

//Array arr;



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




Array odddelete(int a[],int  n)
{
    int z;
    z=n/2;
    
    int x=0;
    Array arr;
    for (int i = 0; i < n; i++)
    {
        if(i %2 != 0)
        {
            
            arr.ptr[x]= a[i+1];
            x++;
        }
    }
    arr.size = z;
    return arr;
    
}

/*Tạo hàm xuất mảng 1 chiều trong C*/
void show_array(int array[], int length){
    for(short i = 0; i < length-1; i++)  printf("%d ", array[i]);  
    printf("\n");
}

void main(int argc, char const *argv[])
{
    
    Array value;
    CreateArray(&value);
    /*odddelete(value.ptr,value.size);
    
    show_array(arr.ptr, arr.size);
    for(int i = 0; i < arr.size-1; i++)  printf("%d ", arr.ptr[i]);  
    printf("\n");*/

    Array A = odddelete(value.ptr,value.size);
    for(int i = 0; i < A.size-1; i++)  printf("%d ", A.ptr[i]);  
    printf("\n");

    
    

   
    
}
