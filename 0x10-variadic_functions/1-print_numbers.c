#include "variadic_functions.h"

/**
  * print_numbers - sum args
  * @n: dfdf
  * @separator: dhfd
  * @...: dgd
  *
  * Return: djdj
  */
int print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i = n, sum = 0;

	if (!n)
	{
		printf("\n");
		return (0);
	}
	va_start(ap, n);
	while (i--)
		printf("%d%s", va_arg(ap, int), i ? (separator ? separator : "") : "\n");
	va_end(ap);
	return (sum);

}
