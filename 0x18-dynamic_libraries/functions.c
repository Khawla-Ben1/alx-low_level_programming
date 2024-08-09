#include "main.h"
#include <stdio.h>
#include <unistd.h>

int _putchar(char c) {
    return write(1, &c, 1);
}

int _islower(int c) {
    return (c >= 'a' && c <= 'z');
}

int _isalpha(int c) {
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int _abs(int n) {
    return (n < 0) ? -n : n;
}

int _isupper(int c) {
    return (c >= 'A' && c <= 'Z');
}

int _isdigit(int c) {
    return (c >= '0' && c <= '9');
}

int _strlen(char *s) {
    int len = 0;
    while (s[len] != '\0')
        len++;
    return len;
}

void _puts(char *s) {
    while (*s)
        _putchar(*s++);
}

char *_strcpy(char *dest, char *src) {
    char *ptr = dest;
    while (*src)
        *dest++ = *src++;
    *dest = '\0';
    return ptr;
}

int _atoi(char *s) {
    int num = 0, sign = 1;

    if (*s == '-') {
        sign = -1;
        s++;
    }

    while (*s) {
        if (*s >= '0' && *s <= '9') {
            num = num * 10 + (*s - '0');
        } else {
            break;
        }
        s++;
    }

    return num * sign;
}

char *_strcat(char *dest, char *src) {
    char *ptr = dest;
    while (*dest)
        dest++;
    while (*src)
        *dest++ = *src++;
    *dest = '\0';
    return ptr;
}

char *_strncat(char *dest, char *src, int n) {
    char *ptr = dest;
    while (*dest)
        dest++;
    while (n-- && *src)
        *dest++ = *src++;
    *dest = '\0';
    return ptr;
}

char *_strncpy(char *dest, char *src, int n) {
    char *ptr = dest;
    while (n-- && *src)
        *dest++ = *src++;
    while (n-- > 0)
        *dest++ = '\0';
    return ptr;
}

int _strcmp(char *s1, char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

char *_memset(char *s, char b, unsigned int n) {
    char *ptr = s;
    while (n--)
        *s++ = b;
    return ptr;
}

char *_memcpy(char *dest, char *src, unsigned int n) {
    char *ptr = dest;
    while (n--)
        *dest++ = *src++;
    return ptr;
}

char *_strchr(char *s, char c) {
    while (*s && *s != c)
        s++;
    return (*s == c) ? s : NULL;
}

unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0;
    while (*s) {
        char *a = accept;
        while (*a && *a != *s)
            a++;
        if (*a == '\0')
            break;
        count++;
        s++;
    }
    return count;
}

char *_strpbrk(char *s, char *accept) {
    while (*s) {
        char *a = accept;
        while (*a) {
            if (*a == *s)
                return s;
            a++;
        }
        s++;
    }
    return NULL;
}

char *_strstr(char *haystack, char *needle) {
    char *h = haystack;
    char *n = needle;

    if (!*n)
        return haystack;

    while (*h) {
        char *h1 = h;
        n = needle;
        while (*h1 && *n && *h1 == *n) {
            h1++;
            n++;
        }
        if (!*n)
            return h;
        h++;
    }
    return NULL;
}
