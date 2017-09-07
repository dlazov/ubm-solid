#include <Shape.h>

void 
DrawAllShapes(Shape* list[], int n)
{
	for(int i = 0; i < n; i++)
		list[i]->draw();
}
