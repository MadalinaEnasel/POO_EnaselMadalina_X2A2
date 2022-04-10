#include "NumberList.h"
#include <iostream>
#include <algorithm>

void NumberList::Init(){
    count = 0;
}

bool NumberList::Add(int x){

    numbers[count] = x;
    count++;

    if (count >= 10) return false;
    return true;
}

void NumberList::Sort(){
    int i, j, aux;
    for (i = 0; i < count - 1; i++)
        for (j = i + 1; j < count; j++)
            if (numbers[i] > numbers[j])
            {
                aux = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = aux;
            }
}

void NumberList::Print(){
    int i;
    printf("This is the current vector: ");
    for (i = 0; i < count; i++)
        printf("%d ", numbers[i]);
    printf("\n");
}
