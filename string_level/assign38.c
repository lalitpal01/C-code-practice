/*string and functions*/

//write a function to check whether a given string is palindrome or not
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char * strrevers(char str[],int len){
    int i;
    char *string;
    string=(char *)calloc(len+1,sizeof(char));

    for(i=0;i<len;i++){
        string[i]=str[len-i-1];
    }
    string[i]='\0';
    return string;

}

void checkpalindrom(char str[]){
    int len=strlen(str),i;
    char *string;
    string=strrevers(str,len);
    for( i=0;i<len;i++){
        if(str[i]!=string[i]){
            printf("string is not a palindrome!");
            free(string);
            return;
        }
    }
    if(i==len){
        printf("\nstring is palindrome!");
        free(string);
        return;
    }
}

int main(){
    char str[50];
    printf("enter a string ");
    fgets(str,50,stdin);
    if(str[strlen(str)-1]=='\n'){
        str[strlen(str)-1]='\0';
    }
    checkpalindrom(str);
    return 0;

}