int add(int i, int k);
int sub(int i, int k);
int mul(int i, int k);
int div(int i, int k);
int mod(int i, int k);

/**
* add - a function that adds two integers
* @i: first integer to add
* @k: second integer to add
* Return: the sum
*/

int add(int i, int k)
{
	return (i + k);
}

/**
* sub - a fucntion that subtracts two integers
* @i: first integer to add
* @k: second integer to add
* Return: the subtract
*/

int sub(int i, int k)
{
	return (i - k);
}

/**
* mul - a function that multiplies two integers
* @i: first integer to add
* @k: second integer to add
* Return: the multiple
*/

int mul(int i, int k)
{
	return (i * k);
}

/**
* div - a function divideds two integers
* @i: first integer to add
* @k: second integer to add
* Return: the dividend integer
*/

int div(int i, int k)
{
	return (i / k);
}

/**
 *  mod - a function that finds the modulus of two integers
 *  @i: first integer to add
 * @k: second integer to add
 * Return: the modulus
*/

int mod(int i, int k)
{
	return (i % k);
}
