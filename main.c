#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <stdbool.h>
#include "../head/linkedList.h"
#include "../linkList/linkedList.c"

int main()
{
   int n;
   LinkedList head;
   creatList( head);
   int flag = 1;

   while(flag){
	myMenu();
	printf("\n�͹���Ҫ��ʲô�أ�������1~9Ŷ��\n");
	scanf("%d",&n);

		switch(n){
		case 1:
			InitList(head);
			break;
		case 2:

			break;
		case 3:

			break;
		case 4:

			break;
		case 5:

			break;
		case 6:

			break;
		case 7:

			break;
		case 8:

			break;
		case 9:

			break;
		default:
			printf("���˲�ҪΪ���˼�����������ķ���");
			break;
		}
	flag = 0;
   }
   DestroyList(head);
   return 0;
}
void myMenu(){
	printf("* * * * * * * * * * * * ���� * * * * * * * * * * * *\n");
	printf("   1.����һ��������             2.����һ���ڵ�\n");
	printf("   3.Ѱ������Ҫ��               4.���츲�أ�\n");
	printf("   5.������Щ�������Ķ�����   6.�����Ǹ�Ȧ?\n");
	printf("   7.����������                 8.�м���׬��ۣ�\n");
}
void creatList(LinkedList *h){
	int x;//�����ڵ����
	LNode *pnew;
	LinkedList *p;
	p = h;
	printf("��Ҫ�೤�Ľ������أ�(ֻ����������)\n");
	scanf("%d",&x);
	if(x<=0){
		printf("�����û����������Ŷ");
	}else if(x==1){
		pnew = (LNode *)malloc(sizeof(struct LNode));//Ϊ�½ڵ㿪�ٿռ�
		printf("�����봿���ֵ�С����Ŷ");
		scanf("%d",pnew->data);//����ڵ��ֵ
		(*h)->next = pnew;
		pnew->next = NULL;
	}else{
		while(x--){
			pnew = (LNode *)malloc(sizeof(struct LNode));//Ϊ�½ڵ㿪�ٿռ�
			printf("�����봿���ֵ�С����Ŷ");
			scanf("%d",pnew->data);//����ڵ��ֵ
			printf("23");
			(*p)->next = pnew;
			p = pnew;
		}
	}

	return h;

}





