/*****************************************************************************
Copyright: Whayer
File name: main.cpp
Author: pc
email: 1569598596@qq.com
Description: 
Version: 
Date_time: 2021/8/24 上午10:17
History: 
*****************************************************************************/
#include <iostream>
#include "data_struct.h"
#include <thread>
#include <mutex>
#include <unistd.h>

using namespace std;
void test_bulu_sort(){
	data_struct sort;
	std::vector<int> num={1,4,68,56,3,0,9,23,31,12};
	sort.print_nums(num);
	sort.bulu_sort(num);//冒泡排序
	sort.print_nums(num);
}
void test_merge_linklist(){
	data_struct sort;
	linklist* node0 = new linklist(0);
	linklist* node1 = new linklist(1);
	linklist* node2 = new linklist(2);
	linklist* node3 = new linklist(3);
	
	linklist* node4 = new linklist(1);
	linklist* node5 = new linklist(4);
	linklist* node6= new linklist(89);
	linklist* node7 = new linklist(34);
	linklist* node8 = new linklist(23);
	linklist* node9 = new linklist(111);
	linklist* node10 = new linklist(12);
	node0->m_pnext = node1;
	node1->m_pnext = node2;
	node2->m_pnext = node3;
	node3->m_pnext = nullptr;
	
	node4->m_pnext = node5;
	node5->m_pnext = node6;
	node6->m_pnext = node7;
	node7->m_pnext = node8;
	node8->m_pnext = node9;
	node9->m_pnext = node10;
	node10->m_pnext = nullptr;
	linklist *p_node0=node0;
	linklist *p_node4=node4;
	sort.print_linklist(p_node0);
	sort.print_linklist(p_node4);
	auto node = sort.merge(node0, node4);
	sort.print_linklist(node);

}
int main(){
	test_bulu_sort();
	test_merge_linklist();
	return 0;
}