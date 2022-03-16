// stdafx.cpp : ǥ�� ���� ���ϸ� ��� �ִ� �ҽ� �����Դϴ�.
// Make_Stack_C.pch�� �̸� �����ϵ� ����� �˴ϴ�.
// stdafx.obj���� �̸� �����ϵ� ���� ������ ���Ե˴ϴ�.

#include "stdafx.h"

// TODO: �ʿ��� �߰� �����
// �� ������ �ƴ� STDAFX.H���� �����մϴ�.

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
		cout << "������ ����ֽ��ϴ�." << endl;
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
		cout << "������ ����ֽ��ϴ�." << endl;
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