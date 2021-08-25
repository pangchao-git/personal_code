/*****************************************************************************
Copyright: Whayer
File name: common.h
Author: pc
email: 1569598596@qq.com
Description: 
Version: 
Date_time: 2021/8/25 上午9:12
History: 
*****************************************************************************/

#ifndef PERSONAL_CODE_COMMON_H
#define PERSONAL_CODE_COMMON_H
#define TEXT_SZ 2048

struct shared_use_st
{
	int written;//作为一个标志，非0：表示可读，0表示可写
	char text[TEXT_SZ];//记录写入和读取的文本
};
#endif //PERSONAL_CODE_COMMON_H
