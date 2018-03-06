#ifndef __Point__
#define __Point__

typedef struct __Point {
	int xpos;
	int ypos;
}Point;

void SetPointPos(Point* p, int xpos, int ypos);
void ShowPointPos(Point* p);
int PointComp(Point* p1, Point* p2);

#endif 