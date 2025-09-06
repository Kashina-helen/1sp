#include <stdio.h>

int main() {
    char studentName[50]; // Создание массива для хранения имени студента 
    int hp; // Создание переменной для хранения HP
    float mana; // Создание переменной для хранения Маны

    printf("Привет, студент! Введи свое имя: "); // Запрос имени студента
    scanf("%49s", studentName); 
    
    printf("%s, введи свои HP: ", studentName); // Запрос значения HP 
    scanf("%d", &hp);

    printf("%s, введи свою ману: ", studentName); // Запрос значения Маны
    scanf("%f", &mana);

    printf("%s, у тебя HP = %d, Мана = %.2f\n", studentName, hp, mana);

    return 0;
}
