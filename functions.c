#include <stdio.h>
#include <string.h>
#include "functions.h"

char* get_message(){
    return "Hey, this is testing make\n";
}

void draw_line(int buf_size, char fill_char){
    char line_buf[buf_size];
    memset(line_buf, fill_char, buf_size-1);
    line_buf[buf_size-1] = '\0';
    printf("%s\n", line_buf);
}