#include <stdio.h>

int main()
{
    double celsius, fahrenheit;
    int choice = 0;
    int result;
    
    do{
    printf("Choose Conversation format:\n");
    printf("Press 1 to choose  format From Celsium to Fahrenheit\n");
    printf("Press 2 to choose  format From Fahrenheit to Celsium");
    printf("Press 0 to stop the programm");
    result = scanf("%d", &choice);
    
        if(choice == 1){
            printf("Enter the temperature in Celsium: ");
            result = scanf("%lf", &celsius);
            fahrenheit = (celsius * 9 / 5) + 32;
            printf("%.2lf°C equals %.2lf°F\n", celsius, fahrenheit);
            }
        else if(choice == 2){
            printf("Enter the temperature in Fahrenheit: ");
            result = scanf("%lf", &fahrenheit);
            fahrenheit = (fahrenheit - 32) * 5 / 9;
            printf("%.2lf°F equals %.2lf°C\n", fahrenheit, celsius);
        }
        else if(choice == 0){
            printf("The programm has stopped");
            break;
        }
        else{
            printf("Incorrect input");
            break;
        }
        
        }while(choice == 0 || choice == 1 || choice == 2);

    return 0;
}

