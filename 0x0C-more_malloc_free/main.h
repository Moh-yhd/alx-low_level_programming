#ifndef MAIN_H
#define MAIN_H

void *malloc_checked(unsigned int);
char *string_nconcat(char *, char *, unsigned int);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
