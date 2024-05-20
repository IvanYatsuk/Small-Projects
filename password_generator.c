#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int choice;
    char password[16];
    char words[68] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%&";
    srand(time(NULL));
    do{
    printf("Press 1 to start generating a password, press 0 to stop the program");
    scanf("%d", &choice);
    if(choice == 1){
        
    }else if(choice == 0){
        printf("Stopping the Program");
        return 0;
    }else{
        printf("Incorrect input");
        break;
    }
    return 0;
}while(choice == 0 || choice == 1);

}
