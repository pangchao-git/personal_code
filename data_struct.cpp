/*****************************************************************************
Copyright: Whayer
File name: data_struct.cpp
Author: pc
email: 1569598596@qq.com
Description: 
Version: 
Date_time: 2021/8/24 上午10:23
History: 
*****************************************************************************/

#include "data_struct.h"

void data_struct::my_swap(int & a,int & b){
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

void data_struct::bulu_sort(const std::vector<int> & nums){
	int n = nums.size();
	bool flag = false;
	for (int i = 0;i < n - 1;++i){
		flag = false;
		for (int j = 0;j < n - 1 - i;++j){
			if (nums[j] > nums[j + 1]){
				my_swap((int &)nums[j],(int &)nums[j + 1]);
				flag = true;
			}
		}
		if (!flag){break;}
	}
	
}

void data_struct::print_nums(const std::vector<int> & nums){
	for (int index = 0;index < nums.size();index++){
		std::cout<<" "<<nums[index];
	}
	std::cout<<"\n";
}

linklist*data_struct::merge(linklist*l1,linklist*l2){
	if (l1 == nullptr){return l2;};
	if (l2 == nullptr){return l1;};
	linklist head(0);
	linklist*node = &head;
	while (l1 != nullptr && l2 != nullptr){
		if(l1->m_data < l2->m_data){
			node->m_pnext=l1;
			l1=l1->m_pnext;
		}else{
			node->m_pnext=l2;
			l2=l2->m_pnext;
		}
		node=node->m_pnext;
	}
	if(l1== nullptr){
		node->m_pnext=l2;
	}
	if(l2== nullptr){
		node->m_pnext=l1;
	}
	return head.m_pnext;
}
void data_struct::print_linklist(const linklist *list) {
	while(list!= nullptr){
		std::cout<<" "<< list->m_data;
		list=list->m_pnext;
	}
	std::cout<<"\n";
}