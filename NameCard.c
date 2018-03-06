#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "NameCard.h"

NameCard* MakeNameCard(char* name, char* phone) {
	NameCard* nc;
	nc = (NameCard*)malloc(sizeof(NameCard));
	strcpy_s(nc->name, strlen(name) + 1, name);
	strcpy_s(nc->phone, strlen(phone) + 1, phone);

	return nc;
}

void showNameCard(NameCard* nc) {
	printf_s("이름: %s\t 전화번호: %s\n", nc->name, nc->phone);
}

int NameCompare(NameCard* nc1, NameCard* nc2) {
	if (strcmp(nc1->name, nc2->name) == 0) {
		return 0;
	}
	else {
		return 1;
	}
}

void changePhoneNum(NameCard* nc, char* phone) {
	strcpy_s(nc->phone, strlen(phone) + 1, phone);
}