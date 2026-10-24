typedef struct { s32 x; s32 y; } Elem8;
typedef struct { Elem8 *data; s32 capacity; s32 growStep; s32 count; s32 step; } Vec8;
extern char D_004CECB8[];
extern char D_004CED20[];
extern char D_004CED50[];
void func_00193768(Vec8 *);
void func_001A1568(char *, s32, char *);

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
