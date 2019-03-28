#include <stdio.h>
#include <string.h>
#include <ios>

using namespace std;

char **createArr(int n) {
     
    char **arr = new char*[n];
    return arr;
}

char *createString(){
    char constStr[101];
    puts("enter string less than 100 characters");
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



void sort(char **arr, int size){
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if (strcmp(arr[i], arr[j])>0){
                char *temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int main(){
    puts("enter number of strings to enter\n");
    char number[8];
    int n;
    fgets(number, 7, stdin);
    number[strlen(number)-1]=number[strlen(number)];
    n = atoi(number);
    char **arr=createArr(n);
    for(int i = 0; i < n; i++)
    {
        arr[i] = createString();
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