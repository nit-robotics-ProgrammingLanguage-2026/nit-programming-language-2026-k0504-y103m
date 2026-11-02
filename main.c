#include <stdio.h>
int main(void) {
int input_value;
scanf("%d", &input_value);
 
// 【仕様説明1】
// 0以上10未満、または12以上15未満の範囲にある場合はOKとする判定
int is_ok = (input_value >= 0 && input_value < 10) || (input_value >= 12 && input_value < 15);
 
// 【仕様説明2】
// 判定結果が真（OK）のときは "OK" を出力し、それ以外は "NG" を出力する
if (is_ok) {
printf("OK");
} else {
printf("NG");
}
 
return 0;
}
