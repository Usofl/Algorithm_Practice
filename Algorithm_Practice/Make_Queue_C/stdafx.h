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

struct int_Queue
{
	int* My_Queue = new int;
	size_t Queue_Size = 0;
};

void Queue_EnQueue(int_Queue* _queue, const int _iNum);
int Queue_DeQueue(int_Queue* _queue);
int Queue_Peek(const int_Queue* _queue);
int Queue_GetSize(const int_Queue* _queue);
bool Queue_isEmpty(const int_Queue* _queue);
void Queue_Delete(int_Queue* _queue);