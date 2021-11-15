#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
char ** parse_args(char * line){
  char *sub;
  char *copyLine = malloc (strlen(line));
  char ** returnThis = malloc(48);
  strcpy(copyLine,line);
  int counter = 0;
  while( (sub = strsep(&copyLine," ")) != NULL){
    returnThis[counter] = sub;
    counter++;
  }
  //printf("There are %d elements\n",counter);
  return returnThis;
}

int main(){
  char *test = "ls -a -l";
  char ** good = parse_args(test);
  // for (int i = 0; i < 6; i++){
  //   printf("The thing at good is %s\n",good[i]);
  // }
  execvp(good[0], good);
}
