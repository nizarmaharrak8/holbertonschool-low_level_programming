#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to print
 */
void _print_rev_recursion(char *s)
{
    if (*s == '\0') /* نهاية السلسلة */
        return;

    _print_rev_recursion(s + 1); /* استدعاء الدالة على الحرف التالي */
    _putchar(*s); /* طباعة الحرف بعد الرجوع من الاستدعاء */
}

