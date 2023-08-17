#include "main.h"

/**
  * sume_them_all - sum args
  * @n: dfdf
  * @...: dgd
  *
  * Return: djdj
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum = 0;
	if (n == 0)
		return (0);
	va_start(ap, n)
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);

}
