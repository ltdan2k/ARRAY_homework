void SortMinToMax(Array *value){
    int temp;
    for (int i = 0; i < value->size -1; i++)
    {
        for (int j = i+1; j < value->size; j++)
        {
            if(value->ptr[i]> value->ptr[j]){
                temp = value->ptr[i];
                value->ptr[i] = value->ptr[j];
                value->ptr[j] = temp;
            }
        }
        
    }
}

void CreateArray(Array *value){

    srand(time(NULL));
    value->size = 20 + rand() % (30 +1 - 20);
    int temp;
    printf("Kich thuoc cua array: %d\n", value->size);

    value->ptr = (int *)malloc(value->size * sizeof(int));

    for(int i = 0; i < value->size; i++){
        temp = rand() %6;
        value->ptr[i] = temp;
    }
}