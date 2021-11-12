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
  printf("There are %d elements\n",counter);
  return returnThis;
}

int main(){
  char *test = "HELLO WORLD IDK WHAT I'M DOING";
  char ** good = parse_args(test);

}
