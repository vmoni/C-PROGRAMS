#include <stdio.h>
#include <stdlib.h>
struct emp {
char name[20];
int sal;
};
void show(struct emp *e,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
    printf("the name is %s",e[i].name);
    printf("\nthe salarly is %d\n",e[i].sal);
    }

}


int main()
{
struct emp e[]={{"moni",2500},{"shiv",2500},{"ani",4500},{"vinu",7555}};
show(e,4);
}
