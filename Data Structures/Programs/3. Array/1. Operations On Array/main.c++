#include <iostream>

using namespace std;

typedef struct array{
    int * arr;
    int capacity;
    int size;
} array;

array * createArray(){
    int cap;
    cout<<"Enter capacity of the array: ";
    cin>>cap;
    int * arr = new int[cap];
    array * p = new array;
    p->arr = arr;
    p->capacity = cap;
    p->size = 0;
    return p;
}

void search(array * darr, int key){
    for (int i = 0; i < darr->size; i++)
    {
        if(darr->arr[i] == key) {
            cout<<key<<" found at index "<<i<<"\n";
            return;
        }
    }
    cout<<key<<" not found!!!\n";
}

void insertEnd(array * darr, int key){
    if(darr->capacity == darr->size){
        cout<<"Arrray is full..\n";
        return;
    }
    darr->arr[darr->size++] = key;
    cout<<"Element inserted at end.\n";
}

void insertPos(array * darr, int key, int pos){
    if(darr->capacity == darr->size){
        cout<<"Arrray is full..\n";
        return;
    }
    if(pos >= darr->size){
        insertEnd(darr, key);
        return;
    }
    int idx = pos - 1;
    for (int i = darr->size - 1; i >= idx; i--)
    {
        darr->arr[i + 1] = darr->arr[i];
    }
    darr->arr[idx] = key;
    darr->size++;
    cout<<"Element inserted.\n";
}

void del(array * darr, int key){
    int idx = -1;
    for (int i = 0; i < darr->size; i++)
    {
        if(darr->arr[i] == key){
            idx = i;
            break;
        }
    }
    if (idx == -1)
    {
        cout<<"Element not present...\n";
    }
    for (int i = idx; i < darr->size - 1; i++)
    {
        darr->arr[i] = darr->arr[i + 1];
    }
    cout<<"Element deleted...\n";
    darr->size--;
}

void printArray(array * darr){
    cout<<"Elements in the array: ";
    for (int i = 0; i < darr->size; i++)
    {
        cout<<darr->arr[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    array * a = createArray();
    insertEnd(a, 12);
    insertEnd(a, 23);
    insertEnd(a, 43);
    insertEnd(a, 122);
    insertEnd(a, 11);
    insertEnd(a, 22);
    printArray(a);
    del(a, 12);
    printArray(a);
    insertPos(a, 32, 100);
    printArray(a);
    
    return 0;
}