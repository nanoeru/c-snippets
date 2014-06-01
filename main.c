#include <stdio.h>
#include <stdlib.h>

#include "func.h"
#include "struct.h"
#include "code.h"

//	グローバル変数
int g_static = 1;
int g_extern = 2;

int main(int args, char *argv[]) {
//	int i;
	//	引数表示
	//	コンパイラによっては先頭に変数宣言せずとも
	for (int i = 0; i < args; i++) {
		printf("Arg[%d]:%s\n", i, argv[i]);
	}
	
	xyz obj = {0, 1, 2};

	printf("Hello Clang!\n");
	printf("add(1, 2) = %d\n", add(1, 2));
	printf("sub(1, 2) = %d\n", sub(1, 2));
	printf("g_static = %d\n", g_static);
	printf("g_extern = %d\n", g_extern);
	print_xyz(obj);
	code_print_xyz(obj);
	return 0;
}
