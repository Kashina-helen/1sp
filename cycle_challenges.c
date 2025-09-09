#include <stdio.h>

int main() {
    
    int hp;

    printf("Введите значение HP студента: ");
    scanf("%d", &hp);

    if (hp > 70) {
        printf("Студент в отличной форме \n");
    } else if (hp > 30) {
        printf("Студент устал \n");
    } else {
        printf("Студент в опасности \n");
    } // Проверяем HP студента

    int lection;
    char knowledge;

    printf("Введите количество лекций: ");
    scanf("%d", &lection);

    printf("Введите уровень знаний: ");
    scanf(" %c", &knowledge); // Пробел перед %c нужен для правильного чтения символа.
    
    if (lection >= 50 && knowledge == 'H') {
        printf("Можно купить знания \n");
    } else {
        printf("Недостаточно ресурсов \n");
    } // Проверяем лекции и знания

    if (lection >= 50 && knowledge != 'H') {
      printf("Студенту хватает знаний \n");
    }
    if (lection >= 50 && !(knowledge == 'H')) {
      printf("Студенту не хватает знаний \n");
    } // Проверяем отсутствие знаний с помощью логической операции !
    
    printf("Числа от 1 до 20, пропуская кратные 3:\n");
    for (int i = 1; i <= 20; i++) {
        if (i % 3 == 0) {
            continue; // Пропускаем числа, кратные 3, используя оператор continue
        }
        printf("%d ", i);
    }
    printf("\n"); // Цикл для вывода чисел от 1 до 20, пропуская кратные 3

    int factorial = 1;
    for (int i = 1; i <= 7; i++) {
        factorial *= i;
    }

    printf("Факториал числа 7: %d\n", factorial); // Вычисляем факториал числа 7 с циклом for

    return 0;
}
