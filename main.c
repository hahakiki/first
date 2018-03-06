#include <stdio.h>
#include <stdlib.h>
#include "ArrayL.h"
#include "NameCard.h"

int main(void) {
	List list;
	NameCard* nc;

	ListInit(&list);
	
	nc = MakeNameCard("aaa", "02-111-1111");
	LInsert(&list, nc);

	nc = MakeNameCard("bbb", "02-222-2222");
	LInsert(&list, nc);

	nc = MakeNameCard("ccc", "02-333-3333");
	LInsert(&list, nc);

	printf_s("변경 전\n");
	if (LFirst(&list, &nc)) {
		showNameCard(nc);
		while (LNext(&list, &nc)) {
			showNameCard(nc);
		}
	}

	if (LFirst(&list, &nc)) {
		if (NameCompare(nc, "bbb") == 0) {
			changePhoneNum(nc, "010-2222-2222");
		}
		while (LNext(&list, &nc)) {
			if (NameCompare(nc, "bbb") == 0) {
				changePhoneNum(nc, "010-2222-2222");
			}
		}
	}
	
	if (LFirst(&list, &nc)) {
		if (NameCompare(nc, "ccc") == 0) {
			NameCard* n = LRemove(&list);
			free(n);
		}
		while (LNext(&list, &nc)) {
			if (NameCompare(nc, "ccc") == 0) {
				NameCard* n = LRemove(&list);
				free(n);
			}
		}
	}
	printf_s("변경 후\n");
	if (LFirst(&list, &nc)) {
		showNameCard(nc);
		while (LNext(&list, &nc)) {
			showNameCard(nc);
		}
	}


	return 0;
}