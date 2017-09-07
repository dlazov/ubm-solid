#include "Shape.h"
#include <iostream>

using namespace std;

void DrawAllShapes(Shape* list[], int n)
{
	for(int i = 0; i < n; i++)
		list[i]->Draw();
}

int main (void) 
{
	cout << "Starting DrawAllShapes" << endl;
	return 0;
}

