#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

int _isdigit(char *c);
void errors(void);
int _puts(char *str);
int _atoi(char *s);
int main(int argc, char **argv[]);
int mul(int num1, int num2);

#endif
