typedef struct {
    u32 tag0;
    u32 tag1;
    u32 tag2;
    u32 tag3;
    u32 pad[12];
    u32 tagB0;
    u32 tagB1;
    u32 tagB2;
    u32 tagB3;
} __attribute__((aligned(8))) Pkt;

typedef struct {
    char pad[0x630];
    Pkt a;
    Pkt b;
    Pkt c;
    Pkt d;
    Pkt e;
    Pkt f;
} Obj;

void func_001506AC(void);
void func_00150754(Obj *);
u32 func_00170894(s32, s32, s32, s32);

void func_001504B8(Obj *arg0) {
    func_001506AC();
    func_00150754(arg0);
    arg0->a.tag0 = 0x10000003;
    arg0->a.tag1 = 0;
    arg0->a.tag2 = 0;
    arg0->a.tag3 = func_00170894(0x50, 0, 3, 0);
    arg0->a.tagB0 = 0x60000000;
    arg0->a.tagB1 = 0;
    arg0->a.tagB2 = 0;
    arg0->a.tagB3 = 0;
    arg0->b = arg0->a;
    arg0->d = arg0->b;
    arg0->c = arg0->d;
    arg0->e.tag0 = 0x10000003;
    arg0->e.tag1 = 0;
    arg0->e.tag2 = 0;
    arg0->e.tag3 = func_00170894(0x50, 0, 3, 0);
    arg0->e.tagB0 = 0x60000000;
    arg0->e.tagB1 = 0;
    arg0->e.tagB2 = 0;
    arg0->e.tagB3 = 0;
    arg0->f = arg0->e;
}
