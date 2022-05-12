#include <stdio.h>
#include <stdlib.h>

///////* INITIALIZING LINKED LISTS *///////

    typedef struct s_list
    {
        void            *content;
        struct s_list   *next;
    }                   t_list;

t_list *ft_lstnew(void *content)
{
    t_list *new;

    new = malloc(sizeof(*new));
    if (!new)
        return (NULL);
    new->next = NULL;
    new->content = content;
    return (new);
}

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (new)
    {
        new->content = NULL;
        new->next = *lst;
        *lst = new;
    }
}

int main(void)
{
    // t_listElement *mylist = NULL;
    // printf("sizeof s_listElement : %d\n", sizeof(s_listElement));

    t_list *list;
    char    *content = "Beautiful World";

    list = ft_lstnew(content);

    printf("%s\n", (char *)list->content);
}

