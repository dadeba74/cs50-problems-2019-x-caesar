#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

// one command-line argument only - digit only, no text
// 
 
int main(int argc, string argv[])
{
    // check for 2 arguments only - ie program + 1 command line argument - if (argc != 2 || isdigit(argv[1]) != true)
    if (argc != 2)
    {
        printf("Please insert one command line argument\n");
        return 1;
    }
    
    // transform argv1-command line argument- into integer
    int k = atoi(argv[1]);

    // check integer is positive
    if (k < 0)
    {
        printf("Negative\n");
        return 1;
    }
    else
    {
        // prompt user for plaintext
        string plaintext = get_string("Plaintext: ");
        
        printf("ciphertext: ");
        for (int i = 0, n = strlen(plaintext); i < n; i++)
        {
            // check if upper or lowercase and then convert
            
            if islower(plaintext[i])
            {   
                printf("%c", (((plaintext[i] + k) - 97) % 26) + 97);
                
            }
            else if isupper(plaintext[i])
            {
                printf("%c", (((plaintext[i] + k) - 65) % 26) + 65);
                
            }
//if neither then just print it
            else
            {
                printf("%c", plaintext[i]);
                
            }
        }
        printf("\n");
        return 0;
    }
}
