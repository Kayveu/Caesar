#include <cs50.h>
#include <stdio.h>
#include <string.h>
 
int main(int argc, string argv[])
{
    int x, k = 0;
    
    if (argc != 2)
    {
        printf("Error, too many/little command line arguments.\n");
        return 1;
    }
   
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        // ascii for 0 is 48 so ascii for 6 is 54 which is 6 away from 0
        x = (int) argv[1][i] - '0';
        //if k is 0, then it simply returns x
        //if we are looking for 11, then k = 10 + (ascii difference from 0)
        k = k * 10 + x;
    }
   
    printf("plaintext:");
    string pt = get_string();
    
    printf("ciphertext:");
    
    for (int i = 0, n = strlen(pt); i < n; i++)
    {
        int g = (int) pt[i];
        if (g >= 65 && g <= 90)
        {
            int l = (int) pt[i] - 65;
            int c = (l + k) % 26;
            int j = c + 65;
            printf("%c", (char) j);
        }
        else if (g >= 97 && g <= 122)
        {
            int l = (int) pt[i] - 97;
            int c = (l + k) % 26;
            int j = c + 97;
            printf("%c", (char) j);
        }
        else
        {
            printf("%c", g);
        }
    }
    
    printf("\n");
    
}