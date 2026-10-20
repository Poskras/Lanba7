#include <stdio.h>
#include <locale.h>
#include <windows.h>

void dzdayTask();
void calculatorTask2();
void symbolTask1();

float percent(float x, float y);
float module(float x);

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, ".UTF8");

    dzdayTask();
    calculatorTask2();
    symbolTask1();

    return 0;
}

void dzdayTask()
{
    int day; //ВАРИАНТ21

    printf("Введите номер дня недели (1-7): ");
    scanf_s("%d", &day);

    switch (day)
    {
    case 1:
        printf("Понедельник\n");
        break;
    case 2:
        printf("Вторник\n");
        break;
    case 3:
        printf("Среда\n");
        break;
    case 4:
        printf("Четверг\n");
        break;
    case 5:
        printf("Пятница\n");
        break;
    case 6:
        printf("Суббота\n");
        break;
    case 7:
        printf("Воскресенье\n");
        break;
    default:
        printf("Неверный номер дня!\n");
        return;
    }

    printf("Осталось дней до воскресенья: %d\n\n\n", 7 - day);
    return 0;
}

void calculatorTask2()
{
    float x, y;
    char c;
    printf("  Введите число -> знак операции -> второе число\n");
    printf("              (+, -, *, /, %%, m)\n");
    printf("               пример: 289 - 19 \n\n");

    scanf_s("%f %c %f", &x, &c, 1, &y);

    switch (c) {
    case '+':
        printf("Результат: %f + %f = %f", x, y, x + y);
        break;

    case '-':
        printf("Результат: %f - %f = %f", x, y, x - y);
        break;

    case '*':
        printf("Результат: %f * %f = %f", x, y, x * y);
        break;

    case '/':
        //проверка при делении на ноль
        if (y != 0)
            printf("Результат: %f / %f = %f", x, y, x / y);
        else
            printf("На ноль делить нельзя!!");
        break;
    case '%':
        printf("Результат: %f", percent(x, y));
        break;
    case 'm':
        printf("Результат: |%f| = %f", x, module(x));
        break;

    }

    return;
}
float percent(float x, float y)
{
    return x * y / 100;
}
float module(float x)
{
    if (x < 0)
        return -x;
    else
        return x;
}

void symbolTask1()
{
    char c;
    printf("Введите символ: ");
    scanf_s("%c", &c, 1);

    switch (c)
    {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        printf("Это цифра\n");
        break;

    case 'a':
    case 'b':
    case 'c':
    case 'd':
    case 'e':
    case 'f':
    case 'g':
    case 'h':
    case 'i':
    case 'j':
    case 'k':
    case 'l':
    case 'm':
    case 'n':
    case 'o':
    case 'p':
    case 'q':
    case 'r':
    case 's':
    case 't':
    case 'u':
    case 'v':
    case 'w':
    case 'x':
    case 'y':
    case 'z':

    case 'A':
    case 'B':
    case 'C':
    case 'D':
    case 'E':
    case 'F':
    case 'G':
    case 'H':
    case 'I':
    case 'J':
    case 'K':
    case 'L':
    case 'M':
    case 'N':
    case 'O':
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
    case 'T':
    case 'U':
    case 'V':
    case 'W':
    case 'X':
    case 'Y':
    case 'Z':
        printf("Это буква\n");
        break;

    default:
        printf("Неизвестный символ\n");
    }

    return;
}