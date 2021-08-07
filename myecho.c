#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[], char **envp)
{
    int i;
    printf("start printing command line arguemnets:\n");
    for ( i = 0; i < argc; i++){
        printf("argv[%d]: %s\n ",i,argv[i]);
    }
    printf("\n");
    printf("start printing envronment arguements:\n");
    for (i = 0; envp[i] != NULL; i++){
        printf("envp[%d]: %s\n",i,envp[i]);
    }
    return 0;
}