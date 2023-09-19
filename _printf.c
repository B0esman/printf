#include "main.h"

void print_buffer(char buffer[], int *buff_ind);
<<<<<<< HEAD

=======
>>>>>>> ae3bae91795cdb56a7a485a49ac5c3647199780b
/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int i, printed = 0, printed_chars = 0;
<<<<<<< HEAD
=======
	int flags, width, precision, size, buff_ind = 0;
>>>>>>> ae3bae91795cdb56a7a485a49ac5c3647199780b
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
<<<<<<< HEAD
	return (-1);
=======
		return (-1);
>>>>>>> ae3bae91795cdb56a7a485a49ac5c3647199780b

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
<<<<<<< HEAD
	if (format[i] != '%')
	{
	buffer[buff_ind++] = format[i];
	if (buff_ind == BUFF_SIZE)
	print_buffer(buffer, &buff_ind);
	/* write(1, &format[i], 1);*/
	printed_chars++;
	}
	else
	{
	printed_chars += printed;
=======
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			/* write(1, &format[i], 1);*/
			printed_chars++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			flags = get_flags(format, &i);
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, list);
			size = get_size(format, &i);
			++i;
			printed = handle_print(format, &i, list, buffer,
				flags, width, precision, size);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
>>>>>>> ae3bae91795cdb56a7a485a49ac5c3647199780b
	}
	print_buffer(buffer, &buff_ind);

	va_end(list);

	return (printed_chars);
}
<<<<<<< HEAD

/**
 * print_buffer - Prints the contents of the buffer if it exist
 * @buffer: Array of chars
 * @buff_ind: Index at which to add next char, represents the length.
 */
void print_buffer(char buffer[], int *buff_ind)

	if (*buff_ind > 0)
	write(1, &buffer[0], *buff_ind);

=======
/**
 * print_buffer - Prints the contents of the buffer
 * @buffer: Array of charectors
 * @buff_ind: Index at which to add next char, represents the length.
 */
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);
  
>>>>>>> ae3bae91795cdb56a7a485a49ac5c3647199780b
	*buff_ind = 0;
}
