// stdafx.cpp : 표준 포함 파일만 들어 있는 소스 파일입니다.
// Make_Linked_List_C.pch는 미리 컴파일된 헤더가 됩니다.
// stdafx.obj에는 미리 컴파일된 형식 정보가 포함됩니다.

#include "stdafx.h"

// TODO: 필요한 추가 헤더는
// 이 파일이 아닌 STDAFX.H에서 참조합니다.

void Linked_List_PushBack(int_Linked_List* _node, const int _iNum)
{
	int_Linked_List* pList = _node;
	int i = 1;

	while (true)
	{
		if (pList->Next_Data == nullptr)
		{
			pList->My_Data = _iNum;
			pList->Next_Data = new int_Linked_List;
			return;
		}
		else
		{
			i++;
			pList = pList->Next_Data;
		}
	}
}

void Linked_List_Print(const int_Linked_List* _node)
{
	const int_Linked_List* pList = _node;
	int i = 1;

	while (true)
	{
		if (pList->Next_Data == nullptr)
		{
			return;
		}
		else
		{
			cout << i++ << "번째 수 : " << pList->My_Data << endl;
			pList = pList->Next_Data;
		}
	}
}

bool Linked_List_Serach(int_Linked_List* _node, const int _iNum)
{
	const int_Linked_List* pList = _node;
	int i = 1;

	while (true)
	{
		if (pList->My_Data == _iNum)
		{
			cout << i << "번째 수 : " << pList->My_Data << "\t";

			return true;
		}
		else if (pList->Next_Data == nullptr)
		{
			return false;
		}
		else
		{
			pList = pList->Next_Data;
			i++;
		}
	}

	return false;
}

bool Linked_List_Delete(int_Linked_List* _node, const int _iNum)
{
	int_Linked_List* pNode = _node;
	int_Linked_List* preNode = _node;
	bool bSuccess = false;

	while (!bSuccess)
	{
		if (pNode->My_Data == _iNum)
		{
			if (preNode != pNode)
			{
				preNode->Next_Data = pNode->Next_Data;
			}

			delete pNode;

			return true;
		}
		else if (pNode->Next_Data == nullptr)
		{
			bSuccess = true;
		}
		else
		{
			preNode = pNode;
			pNode = pNode->Next_Data;
		}
	}

	return false;
}

bool Linked_List_Insert_Value(int_Linked_List* _node, const int _PrevNum, const int _iNum)
{
	int_Linked_List* pNode = _node;
	int_Linked_List* insert_Node = new int_Linked_List;
	bool bSuccess = false;

	while (!bSuccess)
	{
		if (pNode->My_Data == _PrevNum)
		{
			insert_Node->My_Data = _iNum;
			insert_Node->Next_Data = pNode->Next_Data;

			pNode->Next_Data = insert_Node;

			return true;
		}
		else if (pNode->Next_Data == nullptr)
		{
			bSuccess = true;
		}
		else
		{
			pNode = pNode->Next_Data;
		}
	}

	delete insert_Node;

	return false;
}

size_t Linked_List_GetSize(const int_Linked_List* _node)
{
	const int_Linked_List* pNode = _node;
	size_t size = 0;
	bool bSuccess = false;

	while (!bSuccess)
	{
		if (pNode->Next_Data == nullptr)
		{
			bSuccess = true;
		}
		else
		{
			size++;
			pNode = pNode->Next_Data;
		}
	}

	return size;
}

void Linked_List_Free(int_Linked_List* _Linked_List)
{
	if (_Linked_List->Next_Data == nullptr)
	{
		return;
	}
	else
	{
		Linked_List_Free(_Linked_List->Next_Data);

		delete _Linked_List->Next_Data;

		_Linked_List->Next_Data = nullptr;
	}
}