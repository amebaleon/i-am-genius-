#include <stdio.h>

struct address{
	char name[10];
	int tel;
	char addr[12];
};

int main()
{
	struct address List[3] = {
		{"��ũ",1111111, "���ﵿ�۱�"},
		{"���̾��",22222222, "��õ������"},
		{"�丣",33333233, "�泲 ����"},
	};
	
	for (int i = 0; i < 3; i++)
		printf("%9s%8d%12s\n",List[i].name, List[i].tel, List[i].addr);
		
	return 0;
}
