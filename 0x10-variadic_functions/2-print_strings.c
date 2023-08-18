
#include "variadic_functions.h"

/**
  * print_strings - sum args
  * @separator: dhdhf
  * @n: dfdf
  * @...: dgd
  *
  * Return: djdj
  */
void print_strings(const char *separator, const unsigned int n,  ...)
{
	va_list ap;
	int i = n;
	char *str;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
	{
		str = va_arg(ap, char *);
		printf("%s%s", str ? str : "(nil)", i ? (separator ? separator : "") : "\n");
	}
	va_end(ap);
}
