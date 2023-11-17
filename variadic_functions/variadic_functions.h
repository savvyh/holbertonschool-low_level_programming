#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct format_type - ccreate a structure for the format type
 * @format_identifier: format of type of argument
 * @function_ptr: function pointer
*/
typedef struct format_type
{
    char *format_identifier;
    void (*function_ptr)(char *separator, va_list arguments);
} format_t;

void print_a_caracter(char *separator, va_list arguments);
void print_an_integer(char *separator, va_list arguments);
void print_a_float(char *separator, va_list arguments);
void print_a_string_ptr(char *separator, va_list arguments);

#endif
