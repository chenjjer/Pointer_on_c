struct Car_Selling_sys {
	unsigned char name[21];
	unsigned char address[41];
	unsigned char  model[21];
	enum { In_Full, Ioan_Sal, Lease} type;
	union {
		struct In_Full {
	float Suggest_Price;
	float Actual_Sell_Price;
	float Sale_tax;
	float Licensing_fee;
};
struct Ioan_Sal {
	float Suggest_Price;
	float Actual_Sell_Price;
	float Down_pay;
	float Secuirty_dep;
	float Mon_pay;
	int   Lease_term;
};
struct Lease {
	float Suggest_Price;
	float Actual_Sell_Price;
	float Sale_tax;
	float Licensing_fee;
	float Doun_pay;
	int   Loan_dur;
	float Interest_rate;
	float Mon_pay;
	char Name_of_Blank;
};
  };
};
