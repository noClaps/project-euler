#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strrev(char string[]) {
  int len = strlen(string);
  char *reversed = (char *)malloc(len + 1);
  if (reversed == NULL) {
    printf("Memory allocation failed\n");
    return NULL;
  }

  for (int i = 0, j = len - 1; i < len; i++, j--) {
    reversed[i] = string[j];
  }

  reversed[len] = '\0';

  return reversed;
}

int main() {
  int pal = 0;

  for (int a = 999; a >= 100; a--) {
    for (int b = 999; b >= 100; b--) {
      char string[7];
      sprintf(string, "%d", a * b);
      char *revStr = strrev(string);

      if (revStr != NULL) {
        if (strcmp(revStr, string) == 0 && a * b > pal) {
          pal = a * b;
        }

        free(revStr);
      }
    }
  }

  printf("%d\n", pal);

  return 0;
}
// 906609
