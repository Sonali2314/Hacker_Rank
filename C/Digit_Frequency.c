#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int digit_count[10]={0}; 

    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++) 
    {
        if (s[i] >= '0' && s[i] <= '9') 
        { 
            digit_count[s[i] - '0']++;
        }
    }

    for (int i = 0; i < 10; i++) 
    {
        printf("%d ", digit_count[i]);
    }

    return 0;
}
