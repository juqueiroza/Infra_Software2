#include <stdio.h>
#include <unistd.h>

int main() {
   int pipefds[2];
   int status;
   int pid;
   char writemes[2][15] = {"Oi", "Ola"};
   char readmes[15];
   status = pipe(pipefds);
   if (status == -1) {
      printf("Unable to create pipe\n");
      return 1;
   }
   pid = fork();
   if (pid == 0) {
      read(pipefds[0], readmes, sizeof(readmes));
      printf("cd -> reading from pipe -> message 1 is %s\n", readmes);
      //cd = child process
      read(pipefds[0], readmes, sizeof(readmes));
      printf("cd -> reading from pipe -> message 2 is %s\n", readmes);
   } else { 
      printf("pp -> writing to pipe -> message 1 is %s\n", writemes[0]);
      //pp = parent process
      write(pipefds[1], writemes[0], sizeof(writemes[0]));
      printf("pp -> writing to pipe -> message 2 is %s\n", writemes[1]);
      write(pipefds[1], writemes[1], sizeof(writemes[1]));
   }
   return 0;
}
