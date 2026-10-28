typedef struct {
    s32 *data;
    s32 cap;
    s32 unk8;
    s32 len;
    s32 grow;
} PtrArr;

extern char D_004CECB8[], D_004CECC8[], D_004CECF0[];
void func_001936E8(PtrArr *, s32, s32);
void func_00193888(PtrArr *p, s32 *src);
s32 func_001A1568(char *, s32, char *);

PtrArr func_00193B58(PtrArr *src, s32 start, s32 end) {
    PtrArr tmp;
    s32 i;
    func_001936E8(&tmp, end - start + 1, src->grow);
    i = start;
    if (i > end) goto done;
body:
    if (i >= src->len) func_001A1568(D_004CECB8, 0x55, D_004CECC8);
    if (i < 0) func_001A1568(D_004CECB8, 0x55, D_004CECF0);
    func_00193888(&tmp, &src->data[i * 2]);
    i++;
    if (i <= end) goto body;
done:
    return tmp;
}
