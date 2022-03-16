// Make_Queue_C.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int_Queue myQueue;

	Queue_EnQueue(&myQueue, 50);
	Queue_EnQueue(&myQueue, 69);
	Queue_EnQueue(&myQueue, 74);
	Queue_EnQueue(&myQueue, 25);
	Queue_EnQueue(&myQueue, 12);

	cout << "DeQueue : " << Queue_DeQueue(&myQueue) << endl;
	cout << "DeQueue : " << Queue_DeQueue(&myQueue) << endl;
	cout << "Peek : " << Queue_Peek(&myQueue) << endl;
	cout << "DeQueue : " << Queue_DeQueue(&myQueue) << endl;
	cout << "Peek : " << Queue_Peek(&myQueue) << endl;
	cout << "GetSize : " << Queue_GetSize(&myQueue) << endl;
	cout << "DeQueue : " << Queue_DeQueue(&myQueue) << endl;
	cout << "DeQueue : " << Queue_DeQueue(&myQueue) << endl;
	cout << "DeQueue : " << Queue_DeQueue(&myQueue) << endl;
	cout << "DeQueue : " << Queue_DeQueue(&myQueue) << endl;

	Queue_Delete(&myQueue);

	return 0;
}