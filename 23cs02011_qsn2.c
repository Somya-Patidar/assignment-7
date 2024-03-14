#include <stdio.h>

int ischaracter(char ch){
    
        if((ch>'a'&& ch<'z')|| (ch>'A' && ch<'Z')){
            return 1;
        }
        return 0;
}
int main() {
    char str[100],ans[100];
    printf("Enter a string: ");
    scanf("%s",&str);
    int j=0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (ischaracter(str[i])) {
            ans[j]=str[i];
            j++;
        }
    }
    ans[j] = '\0';
   
    printf("String after removing non-alphabetic characters: %s\n", ans);

    return 0;
}
