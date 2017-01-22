#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main(int argc, string argv[])
{
    //variable declaration
    int x = 0, k = 0, y = 0, b = 0;
    //command line argument checks
    if (argc != 2)
    {
        printf("Error, too many/little command line arguments.\n");
        return 1;
    }
    else
    {
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            if (isalpha(argv[1][i]))
            {
                ;
            }
            else
            {
                printf("Error, alphabetical key only.\n");
                return 1;
            }
        }
    }
    
    // Encryption algorithm
    printf("plaintext:");
    string pt = get_string();
    int n = strlen(pt);
    int ar[n];
    printf("ciphertext:");
    
    do
    {
        // Vigenere
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            k = (int) argv[1][i];
            if (k >= 65 && k <= 90)
            {
                k = k - 65;
                ar[y] = k;
            }
            else if (k >= 97 && k <= 122)
            {
                k = k - 97;
                ar[y] = k;
            }
            y++;
            x++;
            if (x == n)
            {
                break;
            }
        }
    }
    while (x < n);
    
    //Caesar 
    for (int i = 0; i < n; i++)
    {
        int g = (int) pt[i];
        k = ar[b];
        if (g >= 65 && g <= 90)
        {
            int l = (int) pt[i] - 65;
            int c = (l + k) % 26;
            int j = c + 65;
            printf("%c", (char) j);
            b++;
        }
        else if (g >= 97 && g <= 122)
        {
            int l = (int) pt[i] - 97;
            int c = (l + k) % 26;
            int j = c + 97;
            printf("%c", (char) j);
            b++;
        }
        else
        {
            printf("%c", g);
        }
    }
    
    printf("\n");
    
}