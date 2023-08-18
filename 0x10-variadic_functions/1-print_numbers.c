#include "variadic_functions.h"

/**
  * print_numbers - sum args
  * @n: dfdf
  * @separator: dhfd
  * @...: dgd
  *
  * Return: djdj
  */
void  print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i = n;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%d%s", va_arg(ap, int), i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
