#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be used
 *
<<<<<<< HEAD
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(0, n));
=======
 * Return: square root of @n or -1
*/
int isqrt_rec(int k, int n) {
	int next_k = (k + n/k) / 2;
	if (k*k <= n && (k+1)*(k+1) > n)
		return k;
	else
		return isqrt_rec(next_k, n);
>>>>>>> d9b58ced31c95006497882d9ce8eba93e7874b22
}

/**
 * _sqrt - returns the square root of a number
 * @n: test number
 * @x: squared number
 *
 * Return: the square root of n
 */
int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}
