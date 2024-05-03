#include <stdio.h>

int main() {
    double celsius, fahrenheit;
    int choice;

    printf("Выберите режим конвертации:\n");
    printf("1: Цельсий -> Фаренгейт\n");
    printf("2: Фаренгейт -> Цельсий\n");
    printf("Введите ваш выбор (1 или 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Введите температуру в градусах Цельсия: ");
        scanf("%lf", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("%.2lf°C равно %.2lf°F\n", celsius, fahrenheit);
    } else if (choice == 2) {
        printf("Введите температуру в градусах Фаренгейта: ");
        scanf("%lf", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("%.2lf°F равно %.2lf°C\n", fahrenheit, celsius);
    } else {
        printf("Некорректный выбор. Пожалуйста, выберите 1 или 2.\n");
    }

    return 0;
}