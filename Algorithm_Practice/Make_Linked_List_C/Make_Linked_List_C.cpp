// Make_Linked_List_C.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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
		cout << "삭제 성공" << endl;
	}
	else
	{
		cout << "삭제 실패" << endl;
	}

	if (Linked_List_Delete(&My_list, 29))
	{
		cout << "삭제 성공" << endl;
	}
	else
	{
		cout << "삭제 실패" << endl;
	}

	if (Linked_List_Insert_Value(&My_list, 33, 72))
	{
		cout << "삽입 성공" << endl;
	}
	else
	{
		cout << "삽입 실패" << endl;
	}

	if (Linked_List_Insert_Value(&My_list, 29, 46))
	{
		cout << "삽입 성공" << endl;
	}
	else
	{
		cout << "삽입 실패" << endl;
	}
	
	cout << "GetSize : " << Linked_List_GetSize(&My_list) << endl;

	Linked_List_Print(&My_list);

	Linked_List_Free(&My_list);

    return 0;
}