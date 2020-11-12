#define _GNU_SOURCE
#include <sched.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>
#include <unistd.h>

int main() {
  
  char input[20];
  printf("==Enter the 'exit' to close the shell==\n");

  do {
    
    printf("Enter a command:");
    scanf("%s", input);

    if (strcmp(input, "pwd") == 0)
          system("pwd");

    else if (strcmp(input, "ls") == 0)
          system("ls");

    else if (strcmp(input, "help") == 0)
          system("help");

      else if (strcmp(input, "top") == 0)
          system("top");

    else if (strcmp(input, "pstree") == 0)
          system("pstree");

    else if (strcmp(input, "ps") == 0)
          system("ps");

    else if (strcmp(input, "exit") == 0)
          printf("==Shell is closed==\n");

    else printf("\nThere is no such command\n");
    } while (strcmp(input, "exit") != 0);

  return EXIT_SUCCESS;
}
