#include <stdio.h>
#include <string.h>
#include <string>
#include <ios>


const int maxStrLen=30;
char *createString(){
    char constStr[101];
    puts("enter string less than 30");
    //puts((maxStrLen));
    fgets(constStr, 100, stdin);
    constStr[strlen(constStr)-1] = constStr[strlen(constStr)];
    char *str = new char[strlen(constStr)+1];
    memcpy(str, constStr, sizeof(char)*(strlen(constStr)+1));
    return str;
}
int chooseMin(int a, int b){
    if (a>b)
        return b;
    return a;
}


void sort(char arr[][maxStrLen], int size){
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if (strcmp(arr[i], arr[j])>0){
                char *temp= new char[strlen(arr[i])+1];
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
                delete[] temp;
            }
        }
    }
}

int main(){
    puts("enter number of strings to enter\n");
    const int n = 5;
    char arr[n][maxStrLen];
    for(int i = 0; i < n; i++)
    {
        strcpy(arr[i], createString());
    }
    puts("output:");
    for(int i = 0; i < n; i++)
    {
        puts(arr[i]);
    }
    sort(arr, n);
    puts("sort output:");
    for(int i = 0; i < n; i++)
    {
        puts(arr[i]);
    }
    
    return 0;
}