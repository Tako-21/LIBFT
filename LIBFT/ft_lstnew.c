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
    printf("lstnew : %p\n", new);
    return (new);
}

void ft_lstadd_front(t_list **lst, t_list *new)
{
        new->next = *lst;
        *lst = new;
}

int ft_lstsize(t_list *lst)
{
    int i;

    i = 0;
    while (!lst)
    {
        lst = lst->next;
        i++;
    }
    return (i);
}

void    ft_lstprint(t_list *lst)
{
    while (lst)
    {
        printf("%s ", (char *)lst->content);
        lst = lst->next;
    }
}

t_list *ft_lstlast(t_list *lst)
{
    while (lst)
        lst = lst->next;
    return (lst);
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
    // printf("lst2(add) : %p\n", &lst); //SPECIAL YOUSS
    t_list *tmp;

    if (*lst == NULL)
        *lst = new;
    else
    {
        tmp = *lst;
        while (tmp->next != NULL)
            tmp = tmp->next;
        tmp->next = new;
    }
}

// void ft_lstdelone(t_list *lst, void (*del)(void*))
// {

// }

int main(void)
{
    // t_listElement *mylist = NULL;
    // printf("sizeof s_listElement : %d\n", sizeof(s_listElement));

    t_list *list1;
    t_list *list2;
    t_list *list3;
    char    *content1 = "Beautiful";
    char    *content2 = "World";
    char    *content3 = "Somptuous";

    list1 = ft_lstnew(content1);
    list2 = ft_lstnew(content2);
    list3 = ft_lstnew(content3);

    printf("lst 2(aft) : %p\n", list2);
    ft_lstadd_front(&list2, list1);
    printf("lst 2(aft) : %p\n", list2);
    // ft_lstadd_front(&list1, list3);
    ft_lstadd_back(&list2, list3);
    ft_lstprint(list3);
    // ft_lstlast(list1);
    // list2 = ft_lstnew(content2);
    // ft_lstadd_front(&t_list1);

    // int **p;
    // printf("sizeof : %ld\n", sizeof(**p));

    // int a = 5;
    // int b = 3;
    // int *ptr1;
    // int **ptr2;

    // ptr1 = &a;
    // ptr2 = &ptr1;

    // printf("**ptr2 %d\n*ptr1 %d\na %d\n", **ptr2, *ptr1, a);

    // int **lol;
    // lol = ptr2;
    // *lol = &b;
    // **lol = 21;
    // printf("**ptr2 : %d\n*ptr1 : %d\na : %d\nlol : %d\n", **ptr2, *ptr1, a, **lol);


}
