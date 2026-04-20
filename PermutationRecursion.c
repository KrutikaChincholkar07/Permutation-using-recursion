#include <stdio.h>
#include <string.h>

// Function to swap characters
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// Recursive function to generate permutations
void permute(char str[], int l, int r)
{
    if (l == r)
        printf("%s\n", str);
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(&str[l], &str[i]);   // Swap characters
            permute(str, l + 1, r);   // Recursive call
            swap(&str[l], &str[i]);   // Backtrack
        }
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int n = strlen(str);

    printf("Permutations are:\n");
    permute(str, 0, n - 1);

    return 0;
}
