#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *ptr;
    int ch;
    ptr = fopen("text.txt", "w");
    fprintf(ptr, "File initialization success!\n");
    fclose(ptr);
    ptr = fopen("text.txt", "r");
    while((ch = fgetc(ptr)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(ptr);
    ptr = fopen("text.txt", "a");
    fprintf(ptr, "New data appended to file!\n");
    fclose(ptr);
    ptr = fopen("text.txt", "r");
    while((ch = fgetc(ptr)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(ptr);
    getch();
    return 0;
}
