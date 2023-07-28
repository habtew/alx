#include <stdarg.h>
#include <string.h>
#include "main.h"

int _printf(char *format, ...)
{
    va_list args;
    int count;
    
    va_start(args, format);
    count = 0;

    while (*format != '\0') {
        if (*format == '%') {
            format++;
            if (*format != '\0') {
                switch (*format) {
                    case 'c':
                        _putchar(va_arg(args, int));
                        count++;
                        break;
                    case 's':
                        _puts(va_arg(args, char *));
                        count += strlen(va_arg(args, char *));
                        break;
                    case 'd':
		    case 'i':
                        _print_number(va_arg(args, int));
                        count++;
                        break;
                    case '%':
                        _putchar('%');
                        count++;
                        break;
                    default:
                        _putchar('%');
                        _putchar(*format);
                        count += 2;
                        break;
                }
            }
        } else {
            _putchar(*format);
            count++;
        }
        format++;
    }

    va_end(args);
    return count;
}
