// stdafx.h : 자주 사용하지만 자주 변경되지는 않는
// 표준 시스템 포함 파일 또는 프로젝트 관련 포함 파일이
// 들어 있는 포함 파일입니다.
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>



// TODO: 프로그램에 필요한 추가 헤더는 여기에서 참조합니다.
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