#include<stdio.h>

static char input[2048];

int main(int argc, char** argv) {
  printf("Welcome to Morpheus 0.1");
  puts("Press Ctrl+C to Exit\n");

  while(1) {
    fputs("morpheus> ", stdout);
    fgets(input, 2048, stdin);
    printf("No you're a %s", input);
  }

  return 0;
}
