#include<stdio.h>
#include<stdlib.h>
#include"ll.h"
#include"file.h"


file* creat_file(char name[],int size,char date[]){
    file *f=(file*) malloc(sizeof(file));
    sscanf(name,"%s",f->name);
    f->size=size;
    sscanf(date,"%s",f->date);
    return f;

}

void rename_file(file*f,char *name){
    sscanf(name,"%s",f->name);
}

void move_file(file f,dirc *d){
    add(&(dirc->files)); 
}



dirc* creat_dir(dirc parent,char name[]){
    dirc* directory=(dirc*)malloc(siz(dirc));
    if(parent != NULL)
    directory->parent=parent;
    else
    directory->parent=NULL;

    new_linkedList(&(directorey->files));
    new_linkedList(&(directorey->dirs));
    sscanf(name,"%s",directory->name);
    
    return directory;
}
void add_file(dirc* d,file f){
    if(d)
        add(&(d->files),&f);
    else
        return;
}



}
file[] get_files(dirc d){
    file*f=(file*)calloc(size(d->files),sizeof(file));
    int i;
    if(node*p=d->files.head)
    for(i=0;p->next!=NULL;p=p->next)
    f[i]=p;

    return f;
}

dirc[] get_dirs(dirc d){
    dirc *result=(dirc)calloc(size(d->dirs),sizeof(dirc));
     int i;
    if(node*p=d->dirs.head)
    for(i=0;p->next!=NULL;p=p->next)
    result[i]=p;
    return result;
}

int get_size(dirc d){
    int i, sum=0;
    file *fils=get_files(d);
    for(i=0;i<(sizeof(fils)/sizeof(fils[0]))-1;i++)
    sum+=fils[i].size;
    
    return sum;
}
