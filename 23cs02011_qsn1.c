#include <stdio.h>

int main() {
    char str[100];
    char ch;
    int frequency = 0;

   
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

 
    printf("Enter a character: ");
    scanf("%c", &ch);

  
    for (int i = 0; str[i] != '\0'; i++) {
        if (ch == str[i])
            frequency++;
    }

    
    printf("Frequency of %c is: %d\n", ch, frequency);

    return 0;
}
