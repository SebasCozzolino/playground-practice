#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc == 2) // 2 command line inputs (call to file and data)
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++) // strlen = siempre 1 por que agv[i] siempre es 1 elemento del string - Seleccionador de data a analizar
        {
            if (isdigit(argv[1][i]) == 0)  // si el segundo command input es un bool - Ej:. ./caesar zero || false
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }        
            else if (isdigit(argv[1][i]) > 0) //IF ASCCI VALUE > 0
            {       
                string text = get_string("plaintext: ");
                printf("ciphertext: ");
                for (i = 0; i <= strlen(text); i++) // por cada letra que tenga la palabra, lo siguiente
                {
                    int key = atoi(argv[1]);
                    
                    if (isalpha(text[i]))
                    {
                        if (text[i] >= 'A' && text[i] <= 'Z')
                        {
                            int toCipher = ((text[i] + key - 'A') % 26) + 'A'; // 26 son la cantidad de letras en el abc
                            printf("%c", toCipher); 
                        }
                        else if (text[i] >= 'a' && text[i] <= 'z') 
                        {
                            int toCipher = ((text[i] + key - 'a') % 26) + 'a';
                            printf("%c", toCipher);  
                        }  
                        else if (isalpha(i) == 0) //imprime cada letra por iteracion
                        {
                            printf("%c", text[i]);
                        }
                    }
                }
                printf("\n");          
            }
        }   
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    return 0;   
}