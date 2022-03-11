/*
County Library Management System
By Faith Nelima
Feb 2022
MIT Licence
C99 Compiler
*/



#include <stdio.h>
#include <stdlib.h>

int main()
{   int action;
    printf("select an action below\n");
    printf("1.Add new patron\n");
    printf("2.view all patrons\n");
    printf("3.view books\n");
    printf("4.Add new book\n");
    printf("your action: ");
    scanf("%d",&action);
    if(action< 1 && action> 4){
       print("invalid Action.try again\n");
    }

    return action;

void execute_action(int action){
    switch(action){
    case1:
        printf("adding a new patron \n");
        break;
    case 2:
        printf("Here is a list of patrons \n");
        break;
    case 3:
        printf("Here is a list of all books \n");
        break;
    case 4:
        printf("Adding a new book \n");
        break;
        default:printf("Invalid action.\n");

    }

}
int main()
{
    printf("Country Library System \n");
    printf("welcome faith\n");
    Execute_action(menu());

    return 0;
}

