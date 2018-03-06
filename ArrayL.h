#ifndef __ArrayList__
#define __ArrayList__
#include "NameCard.h"

#define true 1
#define false 0
#define Array_len 100

typedef NameCard* LData;

typedef struct __ArrayList{
	LData arr[Array_len];
	int numOfArray;
	int curPosition;
} ArrayList;

typedef ArrayList List;

void ListInit(List* list);
void LInsert(List* list, LData data);
int LFirst(List* list, LData* data);
int LNext(List* list, LData* data);
LData LRemove(List* list);
int LCount(List* list);

#endif
