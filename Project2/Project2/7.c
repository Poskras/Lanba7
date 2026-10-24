#include <stdio.h>
#include <locale.h>
#include <windows.h>

int dzdayTask();
int calculatorTask2();
int symbolTask1();

float percent(float number, float percentValue);
float module(float number);

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

int dzdayTask()
{
    int day;
    int daysToSunday;

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
        printf("Ошибка: неверный номер дня!\n\n");
        return 0;
    }

    daysToSunday = 7 - day;

    printf("Осталось дней до воскресенья: %d\n\n", daysToSunday);

    return 0;
}

int calculatorTask2()
{
    float number1;
    float number2;
    char operation;

    printf("калькулятор\n");
    printf("введите число, знак операции и второе число\n");
    printf("операции: +, -, *, /, %%, m\n");
    printf("пример: 289 - 19\n\n");

    scanf_s("%f %c %f", &number1, &operation, 1, &number2);

    switch (operation)
    {
    case '+':
        printf("результат: %f + %f = %f\n",
            number1, number2, number1 + number2);
        break;

    case '-':
        printf("результат: %f - %f = %f\n",
            number1, number2, number1 - number2);
        break;

    case '*':
        printf("результат: %f * %f = %f\n",
            number1, number2, number1 * number2);
        break;

    case '/':
        if (number2 != 0)
        {
            printf("результат: %f / %f = %f\n",
                number1, number2, number1 / number2);
        }
        else
        {
            printf("ошибка: на ноль делить нельзя!\n");
        }
        break;

    case '%':
        printf("результат: %f процентов от %f = %f\n",
            number2, number1, percent(number1, number2));
        break;

    case 'm':
        printf("модуль числа %f = %f\n",
            number1, module(number1));
        break;

    default:
        printf("ошибка: неизвестная операция!\n");
        break;
    }

    printf("\n");

    return 0;
}

float percent(float number, float percentValue)
{
    return number * percentValue / 100;
}

float module(float number)
{
    if (number < 0)
    {
        return -number;
    }
    else
    {
        return number;
    }
}

int symbolTask1()
{
    char symbol;

    printf("Введите символ: ");
    scanf_s(" %c", &symbol, 1);

    switch (symbol)
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
        printf("Это буква латинского алфавита\n");
        break;

    default:
        printf("Неизвестный символ\n");
        break;
    }

    return 0;
}
