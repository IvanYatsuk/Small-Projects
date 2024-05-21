#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main()
{
    int length;
    char *password = malloc(length + 1);
    char *pool = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%&";
    int pool_size = strlen(pool);
    srand(time(NULL));
    do{
    printf("Enter the length of password");
    scanf("%d", &length);
    if(length < 48){
        for (int i = 0; i < length; i++){
            int index = rand() % pool_size; // Генерация случайного индекса
            password[i] = pool[index]; // Выбор символа из пула и добавление в пароль
        }
        password[length] = '\0';
        printf("Generated password: %s\n", password);
        free(password);
    }else if(length > 48){
        printf("The length of password is too big.");
        break;
    }else if(password == NULL){
        printf("Memory Error");
        return 1;
    }else{
        printf("Incorrect input");
        break;
    }
    return 0;
}while(length < 48);

}
