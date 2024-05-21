#ifndef EZOLOGGER_H
#define EZOLOGGER_H

#include <stdio.h>
#include <stdlib.h>

#define EZO_RESET "\033[0m"
#define EZO_RED "\033[31m"
#define EZO_BLUE "\033[34m"
#define EZO_GREEN "\033[32m"
#define EZO_YELLOW "\033[33m"
#define EZO_PURPLE "\033[35m"
#define EZO_CYAN "\033[36m"

#define EZO_INFO(...)  {printf("%s[INFO]%s  ", EZO_GREEN, EZO_RESET);  printf(__VA_ARGS__); printf("\n");}
#define EZO_FATAL(...) {printf("%s[FATAL]%s ", EZO_RED, EZO_RESET);    printf(__VA_ARGS__); printf("\n"); exit(1);}
#define EZO_WARN(...)  {printf("%s[WARN]%s  ", EZO_YELLOW, EZO_RESET); printf(__VA_ARGS__); printf("\n");}
#define EZO_DEBUG(...) {printf("%s[DEBUG]%s ", EZO_BLUE, EZO_RESET);   printf(__VA_ARGS__); printf("\n");}
#define EZO_CUSTOM(precursor, ...) {printf("%s[%s]%s  ", EZO_CYAN, precursor, EZO_RESET);   printf(__VA_ARGS__); printf("\n");}
#define EZO_SCAN(...)  {printf("%s[INPUT]%s ", EZO_PURPLE, EZO_RESET); scanf(__VA_ARGS__);}
#define EZO_ASSERT(check, ...) {if (!check) EZO_FATAL(__VA_ARGS__);}

#endif
