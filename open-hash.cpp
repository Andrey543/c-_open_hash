#include <iostream>


struct Node 
{
	int key;
	int value; // value
	Node *next, *prev;
};


struct List
{
	Node *head, *tail;
};


void add(List *list, int key, int value)
{
	Node *temp= new Node();
	temp->key=key;
	temp->value=value;
	temp -> next=NULL;
	
	if (list->head==NULL)
	{
		list->head=temp;
		temp->prev=NULL;
		list->tail=temp;
		
	}	
	else
	{
		temp->prev=list->tail;
		list->tail->next=temp;
		list->tail=temp;
			
	}
}


int hash(int key)
{
	return key%10;
}


void print(List *list, int key)
{
	Node *temp=list->head;

		while(temp)
		{
			temp=temp->next;
			
			if (temp->key=key)
			{
				std::cout<<temp->value;
			}
			if (temp=NULL)
			{
				std::cout<<"NO ELEMENT";
			}
			temp=temp->next;
		}
	}
}


void del(List *list, int key)
{
	Node *temp=list->head;
	while(temp) // while (temp)
	{
	
		if (temp->key=key)
		{
			temp->prev->next=temp->next;
			temp->next->prev=temp->prev;
			break;
		}
		if (temp=NULL)
		{
			std::cout<<"NO ELEMENT";
		}
		temp=temp->next;
	}
}


int main()
{
	List *hash_table[9];
	
	for (int i=0;i<10;i++)
	{
		hash_table[i]=new List();
	}
	
	int flag=0;
	std::cout<<"Список команд:\n1 - запись\n2 - поиск\n3 - удаление\n4 - завершение работы\n";
	while (flag!=4)
	{
		std::cout<<"Введите команду\n";
		std::cin>>flag;
		if (flag=1)
		{
			int key;
			int value;
			std::cout<<"Введите пару ключ-значение\n";
			std::cin>>key>>value;
			add(hash_table[hash(key)],key,value);
		}
		else if (flag=2)
		{
			int key;
			std::cout<<"Введите ключ\n";
			std::cin>>key;
			print(hash_table[hash(key)],key);
		}
		else if (flag=3)
		{
			int key;
			std::cout<<"Введите ключ\n";
			std::cin>>key;
			del(hash_table[hash(key)],key);
		}
	}

}
