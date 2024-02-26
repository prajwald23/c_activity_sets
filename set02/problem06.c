#include <stdio.h>

void input_string(char *a) {
    printf("Enter a string: ");
    fgets(a, 100, stdin);
    a[strcspn(a, "\n")] = 0;
}

void str_reverse(char *str, char *rev_str) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        rev_str[i] = str[len - 1 - i];
    }
    rev_str[len] = '\0';
}

void output(char *a, char *reverse_a) {
    printf("Original string: %s\n", a);
    printf("Reversed string: %s\n", reverse_a);
}

int main() {
    char str[100], reverse_str[100];
    input_string(str);
    str_reverse(str, reverse_str);
    output(str, reverse_str);
    return 0;
}