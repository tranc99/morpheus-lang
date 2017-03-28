#include<stdio.h>
#include <stdlib.h>
#include "mpc.h"

// If on Windows, compile these functions
#ifdef _WIN32
#include <string.h>

static char buffer[2048];

char* readline(char* prompt) {
  fputs(prompt, stdout);
  fgets(buffer, 2048, stdin);
  char* cpy = malloc(strlen(buffer)+1);
  strcpy(cpy, buffer);
  cpy[strlen(cpy)-1] = '\0';
  return cpy;
}

void add_history(char* unused) {

}

#else
#include <editline/readline.h>
#include <editline/history.h>
#endif

int main(int argc, char** argv) {

  // parsers for different parts of the grammar
  mpc_parser_t* Number = mpc_new("number");
  mpc_parser_t* Operator = mpc_new("operator");
  mpc_parser_t* Expr = mpc_new("expr");
  mpc_parser_t* Lispy = mpc_new("lispy");

  // define the parsers with the following Language
  mpca_lang(MPCA_LANG_DEFAULT,
    "                                                  \
      number  : /-?[0-9]+/ ;                            \
      operator : '+' | '-' | '*' | '/' ;               \
      expr : <number> | '(' <operator> <expr>+ ')' ;   \
      lispy: /^/ <operator> <expr>+ /$/;               \
    ",
  Number, Operator, Expr, Lispy);

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
