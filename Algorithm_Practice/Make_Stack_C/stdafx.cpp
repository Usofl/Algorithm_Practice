// stdafx.cpp : 표준 포함 파일만 들어 있는 소스 파일입니다.
// Make_Stack_C.pch는 미리 컴파일된 헤더가 됩니다.
// stdafx.obj에는 미리 컴파일된 형식 정보가 포함됩니다.

#include "stdafx.h"

// TODO: 필요한 추가 헤더는
// 이 파일이 아닌 STDAFX.H에서 참조합니다.

void Stack_Push(int_Stack* _stack, const int _iNum)
{
	_stack->Stack_Size++;
	int* iTemp = new int[_stack->Stack_Size];

	memcpy_s(iTemp, sizeof(int) * (_stack->Stack_Size), _stack->My_Stack, sizeof(int) * (_stack->Stack_Size));

	iTemp[_stack->Stack_Size - 1] = _iNum;

	delete[] _stack->My_Stack;
	_stack->My_Stack = iTemp;
}

int Stack_Pop(int_Stack* _stack)
{
	if (Stack_isEmpty(_stack))
	{
		cout << "스택이 비어있습니다." << endl;
		return NULL;
	}

	int iNum = _stack->My_Stack[_stack->Stack_Size - 1];

	_stack->Stack_Size--;
	int* iTemp = new int[_stack->Stack_Size];

	memcpy_s(iTemp, sizeof(int) * _stack->Stack_Size, _stack->My_Stack, sizeof(int) * _stack->Stack_Size);

	delete[] _stack->My_Stack;
	_stack->My_Stack = iTemp;

	return iNum;
}

int Stack_Peek(const int_Stack* _stack)
{
	if (Stack_isEmpty(_stack))
	{
		cout << "스택이 비어있습니다." << endl;
		return NULL;
	}

	return _stack->My_Stack[_stack->Stack_Size - 1];
}

int Stack_GetSize(const int_Stack* _stack)
{
	return _stack->Stack_Size;
}

bool Stack_isEmpty(const int_Stack* _stack)
{
	return _stack->Stack_Size == 0;
}

void Stack_Delete(int_Stack* _stack)
{
	delete[] _stack->My_Stack;
	_stack->My_Stack = nullptr;

	_stack->Stack_Size = 0;
}