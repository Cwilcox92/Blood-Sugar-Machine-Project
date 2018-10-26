#pragma once
#ifndef LIST_H
#define LIST_H


class List
{

public:
	
	List();
	void addNode(int addData);
	void deleteNode(int delData);
	int MaxNum();
	int MinNum();
	int Sum();
	int ValidCount();
	
private:

	 struct node
	 {												// got the main idea from this video https://www.youtube.com/watch?v=H5lkmKkfjD0&list=PLTxllHdfUq4fewZGVFPhzbmHTQC2UH7PJ
		int data;
		node* next;
	} typedef *nodePntr;
			  

	nodePntr head;
	nodePntr current;
	nodePntr temp;


};

#endif