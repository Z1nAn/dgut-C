#include<stdio.h>

#define MANGER 0
#define WORKER 1
#define SALEER 2
#define SALEMANGER 3

#define MAN 0
#define WOMAN 1

//工资
struct Wages
{
	//工时
	unsigned long long time;
	//时薪
	unsigned long long hourly_wages;
	//基本工资
	unsigned long long salary;
}; typedef struct Wages Wages;

// 用户
struct User
{
	//工号
	int code;
	//名字
	char* name;
	size_t name_size;
	//性别
	size_t gender;
	//职位
	size_t work;
	//年龄
	size_t age;
	//工资
	Wages* wages;
	//最后工资
	unsigned long long (*getMoney)(const struct User* );
	//下一个员工
	Wages* pnext;
}; typedef struct User User;

// 部门 
struct Department
{
	int code;
	//部门人员
	User* manager;
	User* workers;
	User* sales;
	User* sales_manager;
}; typedef struct Department Department;

//经理工资计算
unsigned long long getMangerMoney(User* __wages)
{
	return 8000 + __wages->age * 35;
}


//技术员工资计算

//销售员工资计算


//小时经理工资计算
