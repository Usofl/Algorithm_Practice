// stdafx.h : ���� ��������� ���� ��������� �ʴ�
// ǥ�� �ý��� ���� ���� �Ǵ� ������Ʈ ���� ���� ������
// ��� �ִ� ���� �����Դϴ�.
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>



// TODO: ���α׷��� �ʿ��� �߰� ����� ���⿡�� �����մϴ�.
#include <iostream>

using namespace std;

struct int_Stack
{
	int* My_Stack = new int;
	size_t Stack_Size = 0;
};

void Stack_Push(int_Stack* _stack, const int _iNum);
int Stack_Pop(int_Stack* _stack);
int Stack_Peek(const int_Stack* _stack);
int Stack_GetSize(const int_Stack* _stack);
bool Stack_isEmpty(const int_Stack* _stack);
void Stack_Delete(int_Stack* _stack);