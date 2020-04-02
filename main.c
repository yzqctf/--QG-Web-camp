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
	printf("\n客官想要做什么呢？（输入1~9哦）\n");
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
			printf("官人不要为难人家嘛，来点正常的服务");
			break;
		}
	flag = 0;
   }
   DestroyList(head);
   return 0;
}
void myMenu(){
	printf("* * * * * * * * * * * * 功能 * * * * * * * * * * * *\n");
	printf("   1.创建一个新链表             2.插入一个节点\n");
	printf("   3.寻找你想要的               4.翻天覆地？\n");
	printf("   5.丢掉那些令人厌恶的东西吧   6.生活是个圈?\n");
	printf("   7.两两交换吧                 8.中间商赚差价？\n");
}
void creatList(LinkedList *h){
	int x;//创建节点个数
	LNode *pnew;
	LinkedList *p;
	p = h;
	printf("想要多长的金链子呢？(只有整数呢亲)\n");
	scanf("%d",&x);
	if(x<=0){
		printf("本店可没有这种链子哦");
	}else if(x==1){
		pnew = (LNode *)malloc(sizeof(struct LNode));//为新节点开辟空间
		printf("请输入纯数字的小密码哦");
		scanf("%d",pnew->data);//输入节点的值
		(*h)->next = pnew;
		pnew->next = NULL;
	}else{
		while(x--){
			pnew = (LNode *)malloc(sizeof(struct LNode));//为新节点开辟空间
			printf("请输入纯数字的小密码哦");
			scanf("%d",pnew->data);//输入节点的值
			printf("23");
			(*p)->next = pnew;
			p = pnew;
		}
	}

	return h;

}





