#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int g_stack[10000] = {0,};
int g_index = -1;

void clear (void)
{
    while(getchar() != '\n'); // buffer clear
}

void Do_Push(char *cmd, char *arg)
{
    int push_num = 0;

    push_num = atoi(arg);

    if (push_num != 0)
    {
        g_stack[++g_index] = push_num;
    }
}

void Do_Pop()
{
    if(g_index >= 0)
    {
        printf("%d\n",g_stack[g_index]);
        g_stack[g_index--] = 0;
    }
    else
    {
        printf("-1\n");
    }
}

void Do_Top()
{
    if (g_index >= 0)
    {
        printf("%d\n",g_stack[g_index]);
    }
    else
    {
        printf("-1\n");
    }
}

void Do_Size()
{
    printf("%d\n",g_index+1);
}

void Do_Empty()
{
    if(g_index >= 0)
    {
        printf("0\n");
    }
    else
    {
        printf("1\n");
    }
}

void Do_Command()
{
    char input_cmd[17] = {0,};
    fgets(input_cmd, 17 ,stdin);

    char *cmd, *arg;
    char *ptr = strtok(input_cmd, " \n");
    cmd = ptr;

    if(ptr != NULL)
    {
        ptr = strtok(NULL, " ");
        arg = ptr;
    }

    if (strcmp(cmd,"push") == 0)
    {
        Do_Push(cmd,arg);
    }
    else if (strcmp(cmd, "pop") == 0)
    {
        Do_Pop();
    }
    else if (strcmp(cmd, "size") == 0)
    {
        Do_Size();
    }
    else if (strcmp(cmd, "empty") == 0)
    {
        Do_Empty();
    }
    else if (strcmp(cmd, "top") == 0)
    {
        Do_Top();
    }
}

int main (void)
{
    int cmd_line = 0;
    int i = 0;

    scanf("%d",&cmd_line);
    clear();
    while(i < cmd_line)
    {
        Do_Command();
        i++;
    }

    return (0);
}
