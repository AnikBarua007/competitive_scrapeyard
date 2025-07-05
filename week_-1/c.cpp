// 2008-07-14
#define CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

const int TABLE_SIZE = 101;
const int MAX_STRING_LENGTH = 16;

char hash_table[TABLE_SIZE][MAX_STRING_LENGTH];

int hash(char *str)
{
    int h = 0, i;
    for (i = 0; str[i]; i++)
        h += str[i] * (i + 1);
    return (19 * h) % TABLE_SIZE;
}

void add(char *str)
{
    int i;
    for (i = 0; i < TABLE_SIZE; i++)
        if (!strcmp(str, hash_table[i]))
            return;
    int h = hash(str);
    for (i = 0; i < TABLE_SIZE; i++)
        if (!hash_table[(h + i * i + 23 * i) % TABLE_SIZE][0])
        {
            strcpy(hash_table[(h + i * i + 23 * i) % TABLE_SIZE], str);
            return;
        }
}

void remove_entry(char *str)
{
    int i;
    for (i = 0; i < TABLE_SIZE; i++)
        if (!strcmp(str, hash_table[i]))
        {
            hash_table[i][0] = 0;
            return;
        }
}

int main()
{
    
    return 0;
}
