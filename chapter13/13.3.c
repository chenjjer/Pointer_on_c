void add_new_trans(Node *list, Node *current, Transaction *trans);
void delete_trans(Node *list, Node *current, Transaction *trans);
void search(Node *list, Node *current, Transaction *trans);
void edit (Node *list, Node *current, Transaction *trans);

void 
forward(Node *list, Node *current, Transaction *trans) {
	*current=(*current)->link;
}

void (*function[])(Node *list, Node *current, Transaction *trans) = {
	add_new_trans,
	delete_trans,
	search,
	edit
};

#define N_TRANSACTIONS  (sizeof(function)/sizeof(function[0])

if(transaction->type < 0 || transaction->type >= N_TRANSACTIONS)
	printf("illegal transaction type !\n");
else
	function(transaction->type)(list, &current, transaction);



//write_by_self

void add_new_trans(Node *list, Node *current, Transaction *transaction);
void delete_trans(Node *list, Node *current, Transaction,*transaction);
void search(Node *list, Node *current, Transaction *transaction);
void edit(Node *list, Node *current, Transaction *transaction);

void 
forward(Node *list, Node *current, Transaction *transaction)
{
	*current = (*current)->link;
}

void  (*function[])(Node *list, Node *current, Transaction *transaction) = {
	add_new_trans,
	delete_trans,
	search,
	edit
};

#define  N_TRANSACTIONS (sizeof(function)/sizeof(function[0]))

if(Transaction->type < 0 || Transaction->type >= N_TRANSACTIONS)
	prinf("ILLEAGEL");
else
	function[transaction->type](lis, &current, transaction);
