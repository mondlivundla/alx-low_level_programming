/**
 * print_name -> Prints a name.
 * @name: pointer to name.
 * @f: function pointer.
 * Return: void(nothing)
 */

void print_name(char *name, coid (*f)(char *))
{
	if (name && f)
		f(name);
}
