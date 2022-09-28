/**
 * _sqrt_recursion_wrapper - a wrapper that does the recursion bit
 *
 * @n : input number
 * @k: minimum number to guess
 *
 * Return: square root of @n or -1
*/
int isqrt_rec(int k, int n) {
	int next_k = (k + n/k) / 2;
	if (k*k <= n && (k+1)*(k+1) > n)
		return k;
	else
		return isqrt_rec(next_k, n);
}

/**
 * _sqrt_recursion - a function that returns the natural
 *                   square root of a number
 *
 * @n: input number
 *
 * Return: square root
*/
int _sqrt_recursion(int n)
{
	return isqrt_rec(1, n);
}
