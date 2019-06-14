#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


#define MAX_SIZE 101
char A[MAX_SIZE];
int top = -1;

void Push(char);
char Pop();
char Top();
bool IsEmpty();
void Print();

int main()
{
    int length = 0;
    char* name = "maged";
    char reversed[10];
    int i = 0;
    while(name[i] != '\0'){
        Push(name[i]);
        i++;
        length++;
    }
    i = 0;
    while(i <= length - 1){
        reversed[i] = Pop();
        i++;
    }
    printf("%s", reversed);

    return 0;
}

void Push(char data){
    if(top == MAX_SIZE - 1){
        printf("Error: stack overflow\n");
        return;
    }
    top++;
    A[top] = data;
}

char Pop(){
    if(IsEmpty()){
        printf("stack is empty\n");
        return;
    }
    char temp = A[top];
    top--;
    return temp;
}

char Top(){
    if(IsEmpty()){
        printf("stack is empty\n");
        return;
    }
    return A[top];
}

bool IsEmpty(){
    return top == -1;
}

void Print(){
     if(IsEmpty()){
        printf("stack is empty\n");
        return;
    }
    printf("Stack : ");
    int i = 0;
    for(i = 0; i <= top; i++){
        printf("%c\t", A[i]);
    }
    printf("\n");
}


