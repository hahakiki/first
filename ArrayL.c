#include <stdio.h>
#include "ArrayL.h"

void ListInit(List* list) {
	list->numOfArray = 0;
	list->curPosition = -1;
}
void LInsert(List* list, LData data) {
	if (list->numOfArray > Array_len) {
		printf_s("한도 초과");
	}
	list->arr[list->numOfArray] = data;
	list->numOfArray += 1;
}
int LFirst(List* list, LData* data) {
	if (list->numOfArray == 0) {
		return false;
	}
	list->curPosition = 0;
	*data = list->arr[list->curPosition];
	return true;
}
int LNext(List* list, LData* data) {
	if (list->curPosition >= (list->numOfArray) - 1) {
		return false;
	}
	list->curPosition += 1;
	*data = list->arr[list->curPosition];
	return true;
}
LData LRemove(List* list) {
	int rpos = list->curPosition;
	int num = list->numOfArray;
	LData rdata = list->arr[rpos];

	for (int i = rpos; i < (num-1); i++) {
		list->arr[i] = list->arr[i + 1];
	}
	list->curPosition -= 1;
	list->numOfArray -= 1;

	return rdata;
}
int LCount(List* list) {
	return list->numOfArray;
}