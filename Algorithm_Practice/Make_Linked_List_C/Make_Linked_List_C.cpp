// Make_Linked_List_C.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int main()
{
	int_Linked_List My_list;

	Linked_List_PushBack(&My_list, 50);
	Linked_List_PushBack(&My_list, 78);
	Linked_List_PushBack(&My_list, 62);
	Linked_List_PushBack(&My_list, 33);
	Linked_List_PushBack(&My_list, 29);
	Linked_List_PushBack(&My_list, 49);
	Linked_List_PushBack(&My_list, 12);

	if (Linked_List_Delete(&My_list, 29)) 
	{
		cout << "���� ����" << endl;
	}
	else
	{
		cout << "���� ����" << endl;
	}

	if (Linked_List_Delete(&My_list, 29))
	{
		cout << "���� ����" << endl;
	}
	else
	{
		cout << "���� ����" << endl;
	}

	if (Linked_List_Insert_Value(&My_list, 33, 72))
	{
		cout << "���� ����" << endl;
	}
	else
	{
		cout << "���� ����" << endl;
	}

	if (Linked_List_Insert_Value(&My_list, 29, 46))
	{
		cout << "���� ����" << endl;
	}
	else
	{
		cout << "���� ����" << endl;
	}
	
	cout << "GetSize : " << Linked_List_GetSize(&My_list) << endl;

	Linked_List_Print(&My_list);

	Linked_List_Free(&My_list);

    return 0;
}