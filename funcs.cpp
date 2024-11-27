#include "funcs.h"

int my_strlen(const char* str)
{
    int len = 0;
    while (*str != '\0')
    {
        len++;
        str++;
    }
    return len;
}

char* mystrcpy(char* str1, const char* str2)
{
    char* start = str1;
    while (*str2 != '\0')
    {
        *str1 = *str2;
        str1++, str2++;
    }
    *str1 = '\0';
    return start;
}

char* mystrcat(char* str1, const char* str2)
{
    char* start = str1;
    for (int i = my_strlen(str1), j = 0; i < my_strlen(str1) + my_strlen(str2) && j < my_strlen(str2); i++, j++)
    {
        *(str1 + i) = *(str2 + j);
    }
    return start;
}

char* mystrchr(char* str, char s)
{
    for (char* c = str; *c != '\0'; c++) { 
        if (*c == s) {                   
            return c;                     
        }
    }
    return nullptr;
}

char* mystrstr(char* str1, char* str2)
{
    for (char* i = str1; *i != '\0'; ++i) {
        char* start = i;
        char* sub = str2;
        while (*start != '\0' && *sub != '\0' && *start == *sub) {
            ++start;
            ++sub;
        }
        if (*sub == '\0') {
            return i;
        }
    }
    return 0;
}

int mystrcmp(const char* str1, const char* str2) {
    /*int sum_1, sum_2, i;
    i = sum_1 = sum_2 = 0;
    do
    {
        sum_1 += str1[i];
        i++;
    } while (str1[i] != '\0');
    i = 0;
    do
    {
        sum_2 += str2[i];
        i++;
    } while (str2[i] != '\0');
    if (sum_1 > sum_2)
    {
        return -1;
    }
    else if (sum_1 < sum_2)
    {
        return 1;
    }
    else
    {
        return 0;
    }*/
    if (my_strlen(str1) == my_strlen(str2))
        return 0;
    else if (my_strlen(str1) > my_strlen(str2))
        return 1;
    else 
        return -1;
}

int StringToNumber(const char* str)
{
    size_t number;
    int i = 1;
    number = str[0] - '0';
    do
    {
        if (str[i] == ' ')
        {
            i++;
            continue;
        }
        number *= 10;
        number += str[i] - '0';
        if (str[i] < '0' || str[i] > '9')
        {
            cout << "Invalid sign: the sign is not number" << endl;
            return -1;
        }
        i++;
    } while (str[i] != '\0');
    if (number > INT_MAX)
    {
        cout << "Number is too big (out of range int max)" << endl;
        return INT_MAX;
    }
    else
    {
        return static_cast<int>(number);
    }
}

char* NumberToString(int number)
{
    char* str = new char[12];
    int n;
    int index = 0;
    if (number == 0) {
        str[index++] = '0';
        str[index] = '\0';
        return str;
    }
    bool isNegative = (number < 0);
    if (isNegative) 
        number = -number;
    while (number != 0) {
        n = number % 10;
        str[index++] = n + '0'; 
        number /= 10;
    }
    if (isNegative) 
        str[index++] = '-';
    str[index] = '\0';
    for (int i = 0; i < index / 2; ++i) {
        char temp = str[i];
        str[i] = str[index - i - 1];
        str[index - i - 1] = temp;
    }
    return str;
}

char* Uppercase(char* str1)
{
    char* start = str1;
    while (*start != '\0') { 
        if (*start >= 'a' && *start <= 'z')
            *start = *start - 32; 
        start++; 
    }
    return str1;
}

char* Lowercase(char* str1)
{
    char* start = str1;
    while (*start != '\0') {
        if (*start >= 'A' && *start <= 'Z')
            *start = *start + 32;
        start++;
    }
    return str1;
}

char* mystrrev(char* str)
{
    char* start = str;
    char* end = str;
    while (*end != '\0') {
        end++;
    }
    end--; 
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    return str;
}