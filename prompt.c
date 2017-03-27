#include<stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
#include <editline/history.h>

int main(int argc, char** argv) {
  printf("Welcome to Morpheus 0.1");
  puts("Press Ctrl+C to Exit\n");

  while(1) {
    char* input = readline("morpheus> ");
    add_history(input);
    printf("No you're a %s\n", input);
    free(input);
  }

  return 0;
}
