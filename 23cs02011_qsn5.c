#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int isPalindrome(char str[]){
    int flag=1;
    int length=0;
    for(int i=0;str[i]!='\0';i++){
        length++;
    }
    for(int i=0;i<length;i++){
        if(str[i]!=str[length-1-i]){
            flag=0;
            return 0;
        }
    }
    if(flag==1){
        return 1;
    }
}
int main(){
    char str[50];
    printf("Enter a string: ");
    scanf("%s",&str);
    
    
    
    if(isPalindrome(str)){
        printf("the given string is palindrome");
    }
    else{
        printf("the given string is not a palindrome");
    }
}