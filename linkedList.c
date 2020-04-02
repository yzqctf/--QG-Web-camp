#include "../head/linkedList.h"
#include <stdlib.h>
#include <malloc.h>
/**
 *  @name        : Status InitList(LinkList *L);
 *	@description : initialize an empty linked list with only the head node without value
 *	@param		 : L(the head node)
 *	@return		 : Status
 *  @notice      : None
 */
Status InitList(LinkedList *L) {
	if(NULL == (*L = (LNode *)malloc(sizeof(LNode))))
		return OVERFLOW;
	(*L)->next = NULL;
	return SUCCESS;
}

/**
 *  @name        : void DestroyList(LinkedList *L)
 *	@description : destroy a linked list, free all the nodes
 *	@param		 : L(the head node)
 *	@return		 : None
 *  @notice      : None
 */
void DestroyList(LinkedList *L) {
	LinkedList p;
	p = L;
	if(L==NULL){
		return 0;
	}else if(p->next!=NULL){
		p = p->next;
		free(L);
		L=p;
	}
	return 1;
}

/**
 *  @name        : Status InsertList(LNode *p, LNode *q)
 *	@description : insert node q after node p
 *	@param		 : p, q
 *	@return		 : Status
 *  @notice      : None
 */
Status InsertList(LNode *p, LNode *q) {
	q = p->next;
	return SUCCESS;
}
/**
 *  @name        : Status DeleteList(LNode *p, ElemType *e)
 *	@description : delete the first node after the node p and assign its value to e
 *	@param		 : p, e
 *	@return		 : Status
 *  @notice      : None
 */
Status DeleteList(LNode *p, ElemType *e) {
	LinkedList q;
	if(p->next != NULL){
		q = p->next;
		e = q->data;
		p = q->next;
		free(q);
		return SUCCESS;
	}else{
		return ERROR;
	}
}

/**
 *  @name        : void TraverseList(LinkedList L, void (*visit)(ElemType e))
 *	@description : traverse the linked list and call the funtion visit
 *	@param		 : L(the head node), visit
 *	@return		 : None
 *  @notice      : None
 */
void TraverseList(LinkedList L, void (*visit)(ElemType e)) {

}

/**
 *  @name        : Status SearchList(LinkedList L, ElemType e)
 *	@description : find the first node in the linked list according to e
 *	@param		 : L(the head node), e
 *	@return		 : Status
 *  @notice      : None
 */
Status SearchList(LinkedList L, ElemType e) {
	do{
		if(L->data == e){
			return SUCCESS;
			L = L->next;
		}
	}while(L->next);
	return ERROR;
}

/**
 *  @name        : Status ReverseList(LinkedList *L)
 *	@description : reverse the linked list
 *	@param		 : L(the head node)
 *	@return		 : Status
 *  @notice      : None
 */
Status ReverseList(LinkedList *L) {
	//假设传入的都是头节点；
	//最终头节点还是头节点（题目内涵）
	LinkedList node,pre;//前指针，新节点
	pre = L;
	node = NULL;//搞一个空节点作为结尾

	if((*L)->next == NULL){
		return SUCCESS;
	}else while(pre->next !=NULL){
		pre = pre->next;//前指针往前跑
		(*L)->next = node;//当前指针指向node
		node = L;//node
		L = pre;//头指针跟上

	}
	L = pre;//头指针指向最后一个元素
	(*L)->next = node;//连接
	return SUCCESS;
}

/**
 *  @name        : Status IsLoopList(LinkedList L)
 *	@description : judge whether the linked list is looped
 *	@param		 : L(the head node)
 *	@return		 : Status
 *  @notice      : None
 */
Status IsLoopList(LinkedList L) {
	LinkedList p,q;
	int count;
	p = L;
	q = L;
	while(p!=q){
		p=L->next;
		count++;
		if(count%2==0){
			q = q->next;
		}
		if(p->next == NULL){
			return SUCCESS;
		}
	}
	if(p == q){
		return ERROR;
	}
}

/**
 *  @name        : LNode* ReverseEvenList(LinkedList *L)
 *	@description : reverse the nodes which value is an even number in the linked list, input: 1 -> 2 -> 3 -> 4  output: 2 -> 1 -> 4 -> 3
 *	@param		 : L(the head node)
 *	@return		 : LNode(the new head node)
 *  @notice      : choose to finish
 */
LNode* ReverseEvenList(LinkedList *L) {

}

/**
 *  @name        : LNode* FindMidNode(LinkedList *L)
 *	@description : find the middle node in the linked list
 *	@param		 : L(the head node)
 *	@return		 : LNode
 *  @notice      : choose to finish
 */
LNode* FindMidNode(LinkedList *L) {
	LinkedList p,q;
	p = L;
	q = L;
	int count;
	if((*L)->next == NULL){
		return L;
	}
	while(p->next != NULL){
		p = p->next;
		count++;
		if(count%2==0){
			q = q->next;
		}
	}
	return q;
}

