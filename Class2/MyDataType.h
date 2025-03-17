#pragma once
enum ClassType
{
	CPP,
	UNREAL,
	//JAVA,
	JAVA = 3,
	C_3
};

typedef ClassType MyClassType;

enum E_sex
{
	MAN,
	WOMEN
};

struct Info
{
	char Name[10];
	int Age;
	float Height;
	E_sex Sex;
};
