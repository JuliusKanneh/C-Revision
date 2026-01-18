// const char* get_message(){
//     return "Hey, this is testing make\n";
// }


/*
Draws a line of '-' characters of length buf_size - 1
and prints it to standard output.
*/
// void draw_line(int buf_size){
//     char line_buf[buf_size];
//     memset(line_buf, '-', buf_size-1);
//     line_buf[buf_size-1] = '\0';
//     printf("%s\n", line_buf);
// }

char* get_message();
void draw_line(int buf_size, char fill_char);