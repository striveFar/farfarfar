#include <stdio.h>
int main()

{
	//fixd by hot_fix
	int a=0;
	printf("a = %d\n\r",a);
	printf("测试：不同分支修改同一个文件的不同行是否会引起冲突，此行修改与master分支\n\r");
	return -1;//  Confliction test written by hot_fix.
}



