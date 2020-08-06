#include <stdio.h>
#include <string.h>

int input_total_cmd(void)
{
    int total_cmd;
    int input_number;
    total_cmd = 0;
    
    scanf("%d",&input_number);

    if(1 <= input_number && input_number <= 10000)
    {
        total_cmd = input_number;
    }

    return (total_cmd);
}

char *Input_Cmd(void)
{
    char cmd_str[12];
    char *input;
    scanf("%s",cmd_str);
    input = cmd_str;
    return (input);
}

void Analysis_Command(char* cmd, char* num)
{
    if(strcmp("push", cmd) == 0)
    {
        printf("push");
    }
    else if(strcmp("pop",cmd) == 0)
    {

        printf("pop");
    }
    else if(strcmp("size",cmd) == 0)
    {

        printf("size");
    }
    else if(strcmp("empty",cmd) == 0)
    {

        printf("empty");
    }
    else if(strcmp("top",cmd) == 0)
    {
        printf("top");
    }
    printf("\n");

}

void Do_Command(void)
{
    char *split_str[2] = {NULL,};
    int i = 0;
    char *input_cmd = Input_Cmd();
    char *ptr = strtok(input_cmd, " ");

    while(ptr != NULL && i < 2)
    {
        split_str[i] = ptr;
        i++;
    }
    Analysis_Command(split_str[0], split_str[1]);
}

int main (void)
{
    unsigned int cmd_cnt;
    int input_index;

    input_index = 0;
    cmd_cnt = input_total_cmd();
    while(input_index < cmd_cnt)
    {
        Do_Command();
        input_index++;
    }

    return (0);
}
