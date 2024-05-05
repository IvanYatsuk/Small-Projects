#include <stdio.h>

int main() {
    double celsius, fahrenheit;
    int choice;
    int result;

    printf("Выберите режим конвертации:\n");
    printf("1: Цельсий -> Фаренгейт\n");
    printf("2: Фаренгейт -> Цельсий\n");
    printf("Введите ваш выбор (1 или 2): ");
    result = scanf("%d", &choice);

    if (result != 1) {
        printf("Ошибка ввода.\n");
        return 1; // Возвращает ненулевой код ошибки
    }

    if (choice == 1) {
        printf("Введите температуру в градусах Цельсия: ");
        result = scanf("%lf", &celsius);
        if (result != 1) {
            printf("Ошибка ввода.\n");
            return 1;
        }
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("%.2lf°C равно %.2lf°F\n", celsius, fahrenheit);
    } else if (choice == 2) {
        printf("Введите температуру в градусах Фаренгейта: ");
        result = scanf("%lf", &fahrenheit);
        if (result != 1) {
            printf("Ошибка ввода.\n");
            return 1;
        }
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("%.2lf°F равно %.2lf°C\n", fahrenheit, celsius);
    } else {
        printf("Некорректный выбор. Пожалуйста, выберите 1 или 2.\n");
    }

    return 0;
}
