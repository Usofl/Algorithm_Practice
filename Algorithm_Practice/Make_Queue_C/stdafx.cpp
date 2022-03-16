// stdafx.cpp : ǥ�� ���� ���ϸ� ��� �ִ� �ҽ� �����Դϴ�.
// Make_Queue_C.pch�� �̸� �����ϵ� ����� �˴ϴ�.
// stdafx.obj���� �̸� �����ϵ� ���� ������ ���Ե˴ϴ�.

#include "stdafx.h"

// TODO: �ʿ��� �߰� �����
// �� ������ �ƴ� STDAFX.H���� �����մϴ�.


void Queue_EnQueue(int_Queue* _queue, const int _iNum)
{
	_queue->Queue_Size++;

	int* iTemp = new int[_queue->Queue_Size];

	if (Queue_GetSize(_queue) != 1)
	{
		memcpy_s(iTemp + 1, sizeof(int) * (_queue->Queue_Size - 1), _queue->My_Queue, sizeof(int) * (_queue->Queue_Size - 1));
	}

	iTemp[0] = _iNum;

	delete[] _queue->My_Queue;
	_queue->My_Queue = iTemp;
}

int Queue_DeQueue(int_Queue* _queue)
{
	if (Queue_isEmpty(_queue))
	{
		cout << "ť�� ����ֽ��ϴ�." << endl;

		return NULL;
	}

	_queue->Queue_Size--;

	int iNum = _queue->My_Queue[_queue->Queue_Size];

	int* iTemp = new int[_queue->Queue_Size];

	memcpy_s(iTemp, sizeof(int) * (_queue->Queue_Size), _queue->My_Queue, sizeof(int) * _queue->Queue_Size);

	delete[] _queue->My_Queue;
	_queue->My_Queue = iTemp;

	return iNum;
}

int Queue_Peek(const int_Queue* _queue)
{
	if (Queue_isEmpty(_queue))
	{
		cout << "ť�� ����ֽ��ϴ�." << endl;

		return NULL;
	}

	return _queue->My_Queue[_queue->Queue_Size - 1];
}

int Queue_GetSize(const int_Queue* _queue)
{
	return _queue->Queue_Size;
}

bool Queue_isEmpty(const int_Queue* _queue)
{
	return _queue->Queue_Size == 0;
}

void Queue_Delete(int_Queue* _queue)
{
	delete[] _queue->My_Queue;
	_queue->My_Queue = nullptr;

	_queue->Queue_Size = 0;
}