#include <stdio.h>
#include <string.h>

void reverse_word(char str[], int start, int end);

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0'; // remove newline character from input
    int i, start = 0, len = strlen(str);

    for (i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverse_word(str, start, i - 1);
            start = i + 1;
        }
    }
    
    printf("Reversed string: %s", str);
    return 0;
}

void reverse_word(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

	




