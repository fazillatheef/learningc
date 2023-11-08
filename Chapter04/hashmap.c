#include <stdio.h>
#include <string.h>

#define MAX_USERS 17
#define NAME_LEN 20

typedef struct person{
        char name[NAME_LEN];
        int age;
        struct person *next;
} person;

person *table[MAX_USERS];
int hash(char *name)
{       
        int index = 0;
        for(int i=0; i < NAME_LEN; i++){
                index += name[i] * i;
        }
        return index % MAX_USERS;
}
void insert_user(person *p)
{
        int index;
        index = hash(p->name);

        if(table[index] == NULL){
                table[index] = p;
                p->next = NULL;
        } else {
                person *tmp = table[index];
                while(tmp->next != NULL){
                        tmp = tmp->next;        
                }
                tmp->next = p;
                p->next = NULL;
        }
}

void print_users(person *tab[])
{
        person *p;
        for(int i=0; i < MAX_USERS; i++){
                if(tab[i] == NULL) 
                        printf("%2d - %s\n", i, "EMPTY");
                else{
                        printf("%2d - %s\n",i, tab[i]->name);
                        p = tab[i];
                        while(p->next != NULL){
                                p = p -> next;
                                printf("\t%s\n", p->name);
                        }
                }
        }
}

void init_table(person *tab[])
{
        for(int i=0; i < MAX_USERS; i++){
                tab[i] = NULL;
        }
}

void find_user(person *tab[],char *name)
{
        int index;
        index = hash(name);
        person *tmp;
        tmp = table[index];
        while(tmp != NULL && strncmp(name,tmp->name,NAME_LEN))
                tmp = tmp -> next;
        if(tmp !=NULL && strcmp(tmp->name,name))
                printf("Found %s\n",name);
}

int main()
{
        person p1 = {.name = "Fazil", .age = 38 };
        person p2 = {.name = "Lamina", .age = 32 };
        person p3 = {.name = "Adam", .age = 8 };
        person p4 = {.name = "Aezal", .age = 2 };
        person p5 = {.name = "Rashid", .age = 36 };
        person p6 = {.name = "Pachu", .age = 32 };
        person p7 = {.name = "Farha", .age = 34 };
        person p8 = {.name = "Aju", .age = 32 };
        person p9 = {.name = "Subaida", .age = 57 };
        person p10 = {.name = "Abdul Lathif", .age = 67 };
        insert_user(&p1);
        insert_user(&p2);
        insert_user(&p3);
        insert_user(&p4);
        insert_user(&p5);
        insert_user(&p6);
        insert_user(&p7);
        insert_user(&p8);
        insert_user(&p9);
        insert_user(&p10);
        print_users(table);
        find_user(table,"Fazil");
        return 0;
}