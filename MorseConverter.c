#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *WordsInMorse;
    printf("Enter the text in Morse language: ");
    scanf("%s", WordsInMorse);
    int length = strlen(WordsInMorse);
    
    while(length  < 2048){
        if(length > 2048){
            printf("Too much words");
            break;
        }else{
            WordsInMorse = (char *)malloc(length * sizeof(char));
            
            if(WordsInMorse == NULL){
                printf("Memory allocation failed!\n");
                return 1;
            }else{
                
            }
        }
    }
}

