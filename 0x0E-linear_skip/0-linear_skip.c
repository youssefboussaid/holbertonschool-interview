#include "search.h"




skiplist_t *linear_skip(skiplist_t *list, int value)
{

    skiplist_t *tmp = list;

    if (list == NULL)
    {
        return (NULL);
    }
    while (tmp->express != NULL)
    {
        printf("Value checked at index [%lu] = [%d]\n", tmp->express->index, tmp->express->n);
        if (tmp->express->n >= value)
        {
            printf("Value found at index [%lu] = [%d]\n", tmp->index, tmp->express->n);
            break;
        }
        tmp = tmp->express;
    }
    if (tmp -> express != NULL)
    {
        for (list = tmp ; list->next ; list = list->next)
        {
            printf("Value checked at index [%lu] = [%ld]\n", tmp->index, list->index);
        }
    }
    for (list = tmp ; list != tmp->express ; list = list->next)
    {
        printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
        if (value == list->n)
        {
            break;
        }
    }
    if (list == tmp->express)
    {
        return (NULL);
    }
    else
    {
        return (list);
    }
}
