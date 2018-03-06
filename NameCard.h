#ifndef __NameCard__
#define __NameCard__

#define NAME_LEN 30
#define PHONE_LEN 30

typedef struct __NameCard {
	char name[NAME_LEN];
	char phone[PHONE_LEN];
}NameCard;

NameCard* MakeNameCard(char* name, char* phone);
void showNameCard(NameCard* nc);
int NameCompare(NameCard* nc1, NameCard* nc2);
void changePhoneNum(NameCard* nc, char* phone);

#endif 
