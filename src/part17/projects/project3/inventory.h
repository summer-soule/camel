#define NAME_LEN 25

struct part {
	int number;
	char name[NAME_LEN+1];
	int on_hand;
	struct part *next;
};

extern struct part *inventory;

struct part *find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);
void erase(struct part **inventory);
