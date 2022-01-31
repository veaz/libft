#include "libft.h"

int main()
{
    t_list  *prueba;

    prueba = ft_lstnew("test");
    printf("%s", prueba->content);

}