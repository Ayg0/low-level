#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 struct ListNode {
	int val;
	struct ListNode *next;
};

int	get_size(struct ListNode* head)
{
	int	i;

	i = 0;
	while (head)
	{
		head = head->next;
		i++;
	}
	return (i);
}

struct ListNode* get_one(struct ListNode* head, int i)
{
	int	index;

	index = 0;
	while (index < i)
	{
		head = head->next;
		index++;
	}
	return (head);
}

struct ListNode* reverseList(struct ListNode* head){
	int	tmp;
	int	i, j;

	i = get_size(head);
	j = 0;
	while (j < i / 2)
	{
		tmp = get_one(head, j)->val;
		get_one(head, j)->val = get_one(head, i - j - 1)->val;
		get_one(head, i - j - 1)->val = tmp;
		j++;
	}
	return(head);
}

int	main(int ac, char **av)
{
	struct ListNode *tmp;

	tmp = malloc(sizeof(struct ListNode));
	tmp->val = 1;
	tmp->next = malloc(sizeof(struct ListNode));
	tmp->next->val = 2;
	tmp->next->next = malloc(sizeof(struct ListNode));
	tmp->next->next->val = 3;
	tmp->next->next->next = NULL;
	reverseList(tmp);
	while (tmp)
	{
		printf("%d\n", tmp->val);
		tmp = tmp->next;
	}
	
	//int a = atoi(av[1]);
	//int b = atoi(av[2]);
	//return (printf("%d\n", (!(a/b) * b) + (!(b/a) * a)));
	//if (abs(a - b) == (a - b))
	//	return (printf("%d\n", a));
	//return (printf("%d\n", b));
}