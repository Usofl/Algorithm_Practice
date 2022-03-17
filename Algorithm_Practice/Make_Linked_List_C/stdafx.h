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

struct int_Linked_List
{
	int My_Data = 0;
	int_Linked_List* Next_Data = nullptr;
};

void Linked_List_PushBack(int_Linked_List* _node, const int _iNum);
void Linked_List_Print(const int_Linked_List* _node);
bool Linked_List_Serach(int_Linked_List* _node, const int _iNum);
bool Linked_List_Delete(int_Linked_List* _node, const int _iNum);
bool Linked_List_Insert_Value(int_Linked_List* _node, const int _PrevNum, const int _iNum);
size_t Linked_List_GetSize(const int_Linked_List* _node);
void Linked_List_Free(int_Linked_List* _Linked_List);