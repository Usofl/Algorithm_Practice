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