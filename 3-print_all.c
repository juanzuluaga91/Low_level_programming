#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  * print_char - Print a character.
  * @va_list: Number of arguments.
  * @c: character to print
  */
 void print_char(va_list,c)
 {
	printf("%c",va_arg(c,int));
 }
 /**
  * print_int - Print a Integer.
  * @va_list: Number of arguments.
  * @c: character to print