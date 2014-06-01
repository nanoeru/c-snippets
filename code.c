#include <stdio.h>
#include <stdlib.h>
#include "struct.h"
#include "code.h"

//	他ファイルで使用している変数でもstaticを指定するとローカルファイルのみの変数として扱える
static int g_static = -1;
//	他ファイルで宣言しているであろう変数をextern指定
extern int g_extern;

//	他ファイルで宣言している構造体を使用する場合は#include "***.h"
void code_print_xyz(xyz obj) {
	printf("code:g_static = %d\n", g_static);
	printf("code:g_extern = %d\n", g_extern);
	printf("code:x = %d, y = %d, z = %d\n", obj.x, obj.y, obj.z);
}
