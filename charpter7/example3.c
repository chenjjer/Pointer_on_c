#define NAME_LENGTH 30
#define ADDR_LENGTH 100
#define PHONE_LENGTH 11

#define MAX_ADDRESSES 1000

char const*
lookup_address(char const* name);

char const *
lookup_phone(char const *name);

#include <addlist.h>
#include <stido.h>

static char name[MAX_ADDRESS][NAME_LENGTH];
static char address[MAX_ADDRESS][NAME_LENGTH];
static char phone[MAX_ADDRESS][NAME_LENGTH];

static int
find_entry(char const * name_to_find)
{
	int entry;

	for(entry = 0; entry < MAX_ADDRESS; entry++)
	{
		if(strcmp(name_to_find, name[entry]) == 0)
			return entry;
			
		return -1;
	}
}

char const *
lookup_address(char const* name)
{
	int entry;
	entry = find_entry(name);
	
	if(entry == -1)
		return NULL;
	else
		return address[entry];
	}
char const *
lookup_address(char const* name)
{
	int entry;
	entry = find_entry(name);
	
	if(entry = -1)
		return NULL;
	else
		return phone[entry];
	}