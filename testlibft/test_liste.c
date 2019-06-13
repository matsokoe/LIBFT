#include "../libft.h"
#include <stdio.h>

int	isup(char c)
{
	if (c >= 'a' && c <= 'z')
		return 0;
	return (1);
}

static void ft_memdel_range(void *ap, size_t size)
{
	if (ap)
	{
		free(ap);
		ap = NULL;
	}
	(void)size;
}

static void	lst_len(t_list *list)
{
	printf("%lu\n", ft_strlen((char*)list->content));
}

static t_list	*toupp(t_list *elem)
{
	char *str;

	str = elem->content;
	while (*str)
	{
		*str = ft_toupper((int)*str);
		str++;
	}
	return (elem);
}

int main()
{
	t_list *liste;
	t_list *element;
	t_list *tmp;
	t_list *save_next;
	int test_del = 0;

	printf("# ############## #\n");
	printf("# FUNCTION BONUS #\n");
	printf("# ############## #\n");

// FT_LSTNEW
	char *s = "coucou";
	size_t size = 7;
	printf("FT_LSTNEW : ");
	liste = ft_lstnew(s, size);
	if (strcmp(s, (char*)liste->content) && size != liste->content_size)
	{
		printf("[FAIL] \n");
		printf("Adresse = %p\n", liste);
		printf("Content = %s\n", (char*)liste->content);
		printf("Taille = %zu\n", liste->content_size);
		printf("Next = %p\n\n", (const char*)liste->next);
	}
	else
		printf("[OK] \n");

// FT_LSTADD
	printf("FT_LSTADD : ");
	char *s1 = "le chat";
	size_t size1 = 8;
	element = ft_lstnew(s1, size1);
	
	ft_lstadd(&liste, element);
	if (strcmp(liste->next->content, s1) && liste->next->content_size != size)
	{
		printf("[FAIL] \n");
		printf("Adresse = %p\n", element);
		printf("Content = %s\n", (char*)element->content);
		printf("Taille = %zu\n", element->content_size);
		printf("Next = %p\n\n", (const char*)element->next);

		tmp = liste;
		printf("------\nRESULTAT\n------\n");
		while (tmp)
		{
			printf("Adresse = %p\n", tmp);
			printf("Content = %s\n", (char*)tmp->content);
			printf("Taille = %zu\n", tmp->content_size);
			printf("Next = %p\n\n", (const char*)tmp->next);
			tmp = tmp->next;
		}
	}
	else
		printf("[OK] \n");

// FT_LSTDELONE
	char *s2 = "hello kitty";
	size_t size2 = 12;
	printf("----------\nFT_LSTDELONE & FT_LSTDEL\n----------\n");
	element = ft_lstnew(s2, size2);
	ft_lstadd(&liste, element);

	tmp = liste;

	while (tmp)
	{
		printf("Adresse = %p\n", tmp);
		printf("Content = %s\n", (char*)tmp->content);
		printf("Taille = %zu\n", tmp->content_size);
		printf("Next = %p\n\n", (const char*)tmp->next);
		tmp = tmp->next;
	}

	tmp = liste;
	test_del = 0;
	if (test_del == 0)
	{
		save_next = tmp->next->next;
		ft_lstdelone(&tmp->next, ft_memdel_range);
		tmp->next = save_next;
	}
	else
		ft_lstdel(&tmp->next, ft_memdel_range);
	printf("------\nRESULTAT\n------\n");
	while (tmp)
	{
		printf("Adresse = %p\n", tmp);
		printf("Content = %s\n", (char*)tmp->content);
		printf("Taille = %zu\n", tmp->content_size);
		printf("Next= %p\n\n", (const char*)tmp->next);
		tmp = tmp->next;
	}
	tmp = liste;

// FT_LSTITER
	printf("----------\nFT_LSTITER\n----------\n");
	ft_lstiter(tmp, lst_len);
	
	tmp = liste;
// FT_LSTMAP
	printf("----------\nFT_LSTMAP\n----------\n");
	t_list *new_lst;
	t_list *new_tmp;

	size_t ptr_list;
	size_t ptr_newlist;
	int check = 1;
	int i = 0;
	char *str;

	ptr_list = (size_t)liste;
	new_lst = ft_lstmap(tmp, toupp);
	ptr_newlist = (size_t)new_lst;
	new_tmp = new_lst;

	while (new_lst)
	{
		i = 0;
		str = (char*)new_lst->content;
		while (str[i])
		{
			if (isup(str[i]) != 1)
				check = 0;
			i++;
		}
		new_lst = new_lst->next;
	}
	if (ptr_list == ptr_newlist)
		printf("[FAIL] : The new liste isn't fresh !");
	if (check != 1)
		printf("[FAIL] : the function wasn't applied on the content.");
	else
		printf("[OK] ");
	printf("\nSource liste = %#zx\nNew list = %#zx\n", ptr_list, ptr_newlist);
	printf("\n");
	while (new_lst)
	{
		printf("Adresse = %p\n", new_lst);
		printf("Content = %s\n", (char*)new_lst->content);
		printf("Taille = %zu\n", new_lst->content_size);
		printf("Next = %p\n\n", (const char*)new_lst->next);
		new_lst = new_lst->next;
	}
	return (0);
}
