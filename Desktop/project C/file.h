#ifndef FILE
#define FILE

typedef struct File
{
    char* name;
    int size;
    char date[11]; /* dd-mm-yyyy*/
}file;

file* creat_file(char[],int,char[]);
void move_file(file,dirc*);
void rename_file(file*,char[]);

#endif
