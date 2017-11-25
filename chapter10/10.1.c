#include <string.h>
#include <stdlib.h>

struct Tel_Pre  {
	char area_code;
	char switch_board;
	char platform_num;
}tel_pre;

struct Save_Inf  {
	unsigned char Date;
	unsigned char Time;
	struct tel_pre  your_num;
	struct tel_pre you_called_num;
	struct tel_pre you_pay_num;
}save_inf;
//±ê×¼´ð°¸
struct PHONE_NUMBER {
	short area;
	short exchange;
	short station;
};
struct LONG_DISTANCE_BILL {
	short month;
	short day;
	short year;
	short time;
	struct PHONE_NUMBER called;
	struct PHONE_NUMBER calling;
	struct PHONE_NUMBER billed;
};

enum PN_TYPE{ CALLED, CALLING, BILLED};
struct LONG_DISTANCE_BILL {
	short month;
	short day;
	short year;
	short time;
	struct PHONE_NUMBER numbers[3];
};