// stdafx.cpp : 표준 포함 파일만 들어 있는 소스 파일입니다.
// Make_Queue_C.pch는 미리 컴파일된 헤더가 됩니다.
// stdafx.obj에는 미리 컴파일된 형식 정보가 포함됩니다.

#include "stdafx.h"

// TODO: 필요한 추가 헤더는
// 이 파일이 아닌 STDAFX.H에서 참조합니다.


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
		cout << "큐가 비어있습니다." << endl;

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
		cout << "큐가 비어있습니다." << endl;

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