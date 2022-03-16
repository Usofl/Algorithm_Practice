// Make_Stack_C.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int main()
{
	int_Stack my_stack;

	Stack_Push(&my_stack, 50);
	Stack_Push(&my_stack, 18);
	Stack_Push(&my_stack, 23);
	Stack_Push(&my_stack, 67);
	Stack_Push(&my_stack, 88);

	cout << Stack_Peek(&my_stack) << endl;
	cout << Stack_GetSize(&my_stack) << endl;
	cout << Stack_Pop(&my_stack) << endl;
	cout << Stack_Peek(&my_stack) << endl;
	cout << Stack_Pop(&my_stack) << endl;
	cout << Stack_Pop(&my_stack) << endl;
	cout << Stack_Peek(&my_stack) << endl;
	cout << Stack_Pop(&my_stack) << endl;
	cout << Stack_Pop(&my_stack) << endl;
	cout << Stack_Pop(&my_stack) << endl;
	cout << Stack_Pop(&my_stack) << endl;

	Stack_Delete(&my_stack);

    return 0;
}