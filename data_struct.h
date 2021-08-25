/*****************************************************************************
Copyright: Whayer
File name: data_struct.h
Author: pc
email: 1569598596@qq.com
Description: 
Version: 
Date_time: 2021/8/24 上午10:23
History: 
*****************************************************************************/

#ifndef PERSONAL_CODE_DATA_STRUCT_H
#define PERSONAL_CODE_DATA_STRUCT_H

#include <vector>
#include <iostream>
typedef struct linklist{
	int m_data;
	linklist *m_pnext;
	linklist(int val):m_data(val),m_pnext(nullptr){}
};
class data_struct {
public:
	data_struct(){};
	~data_struct(){};
	linklist* merge(linklist * l1,linklist *l2);
	void bulu_sort(const std::vector<int> &nums);
	void print_nums(const std::vector<int> &nums);
	void print_linklist(const linklist * list);
	
private:
	void my_swap(int &a , int &b);

};


#endif //PERSONAL_CODE_DATA_STRUCT_H
