#include <stdio.h>
#include <stlib.h>
#include <string.h>
#include <time.h>
int main()
{
    int choice = 0;
    char password[16];
    char words[68] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%&";
    do{
    srand((unsigned) time(&t));
    printf("Press 1 to start generating a password");
    scanf("%s", &choice);
    return 0;
}while(choice == 0 || choice == 1)

}
