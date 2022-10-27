#include <stdio.h>

struct address{
	char name[10];
	int tel;
	char addr[12];
};

int main()
{
	struct address List[3] = {
		{"헐크",1111111, "서울동작구"},
		{"아이언맨",22222222, "인천남동구"},
		{"토르",33333233, "충남 당진"},
	};
	
	for (int i = 0; i < 3; i++)
		printf("%9s%8d%12s\n",List[i].name, List[i].tel, List[i].addr);
		
	return 0;
}
