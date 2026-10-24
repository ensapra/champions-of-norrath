typedef struct { s32 x; s32 y; } Elem8;

typedef struct {
    Elem8 *data;
    s32 capacity;
    s32 growStep;
    s32 count;
    s32 step;
} Vec8;

u8 *D_00480488;

extern char D_004CECB8[];
extern char D_004CECC8[];
extern char D_004CED20[];
extern char D_004CED50[];

void func_00193AA4(Vec8 *);
void func_0019381C(Vec8 *);
void func_00193768(Vec8 *);
void func_001A24AC(void *, void *, s32);
void func_001A1568(char *, s32, char *);

void func_00193B0C(Vec8 *arg0) {
    Elem8 *temp;
    u8 *p;

    arg0->capacity = 0;
    temp = arg0->data;
    arg0->growStep = 0;
    arg0->count = 0;
    if (temp != NULL) {
        p = D_00480488;
        p = *(u8 **)(p + 0x108);
        ((void (*)(void *))p)(temp);
    }
    arg0->data = NULL;
}

void func_001939EC(Vec8 *arg0, s32 arg1) {
    if (arg1 >= arg0->count) {
        func_001A1568(D_004CECB8, 0x56, D_004CECC8);
    }
    func_001A24AC(&arg0->data[arg1], &arg0->data[arg1 + 1], (arg0->count - arg1) * 8 - 8);
    if (--arg0->count == 0) {
        func_00193AA4(arg0);
    } else {
        func_0019381C(arg0);
    }
}

void func_00193888(Vec8 *arg0, Elem8 *arg1) {
    if (arg0 == NULL) {
        func_001A1568(D_004CECB8, 0x56, D_004CED50);
    }
    if (arg0->count >= arg0->capacity) {
        func_00193768(arg0);
    }
    if (arg0->data == NULL) {
        func_001A1568(D_004CECB8, 0x56, D_004CED20);
    }
    arg0->data[arg0->count] = *arg1;
    arg0->count++;
}
