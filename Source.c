#include <stdio.h>

int main()
{
    char s[100], sym; //

    printf("Input string : ");
    gets(s); //читаем строку с gets() вместо scanf(), scanf() не считывает пробелы
    printf("Input symbol : ");
    sym = getchar(); //символ

    func(s, sym); //

    return 0;
}

float func(char s[100], char sym)
{
    int all = 0;
    float count = 0, prcnt;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == sym)
            count++;

        if (s[i] != ' ') {
            all++;
        }
    }

    printf("In string: \n");
    puts(s); //вывод строки s

    printf("Total letters: %d", all);

    printf("\nsymbol '");
    putchar(sym);
    printf("' is met %.00lf times\n", count);

    printf("percentage is: %.00f %%", (count * 100) / all);
    printf("\n");

    prcnt = ((count * 100) / all);

    return prcnt;
}