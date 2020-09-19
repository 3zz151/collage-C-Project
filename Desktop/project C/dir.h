#ifndef DIR
#define DIR

typedef struct Dirc
{
    char* name;
    struct Dirc parent;
    struct linked_list files;
    struct linked_list dirs;
    
    
}dirc;

dirc* creat_dir(dirc,char name[]);
void add_file(dirc*,file]+);
int get_size(dirc);
file search_file(dirc,char[]);
file[] get_files(dirc);
dirc[] get_dirs(dirc);