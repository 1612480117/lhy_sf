package com.lhy;

public class Main {
	public static class ListNode{  //创建节点类
		public int value;
		public ListNode nextnode;
		public ListNode (int data){
			this.value=data;
		}
	}
	public static ListNode createListNode (int data[]){  //创建链表
		ListNode head = new ListNode ( data[0]);
		ListNode temp = head;  //temp这里和指针一样
		for(int i=1;i<data.length;i++){
			ListNode  headnext = new ListNode (data[i]);//本类名定义的一个初始化的方法
			temp.nextnode=headnext;
			temp = temp.nextnode;
		}
		return head;
	}
	public static ListNode removeNode(ListNode head,int k){
		if(k<=0||head==null){
			return head;
		}
		ListNode p=head;
		for(int i=0;i<k;i++){
			if(p.nextnode!=null){
				p=p.nextnode;
			}else{
				return head;
			}
		}
		ListNode q = head;
		while (p.nextnode!=null){
			p=p.nextnode;
			q=q.nextnode;
		}
		q.nextnode=q.nextnode.nextnode;
		return head;
	}
	
	
    public static void main(String[] args) {
		int[] data1 ={1,2,2,3,4,5,6};
		ListNode head1= createListNode(data1);
		ListNode head = removeNode(head1, 4);
		while (head!=null){
			System.out.print(head.value+"  ");
			head=head.nextnode;
		}
		
	}
}
