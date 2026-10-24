extern char D_004CD778[];
extern char D_004CD780[];
extern char D_004CD790[];
void func_001A1568(void *, s32, void *);
void func_0018ACA0(void *, void *);
void func_00181CE0(char **list, char *buf) {
    char *out = buf;
    char **pp = &out;
    if (list == 0) func_001A1568(D_004CD778, 0x1C2, D_004CD780);
    if (out == 0) func_001A1568(D_004CD778, 0x1C3, D_004CD790);
    while (*list)
        func_0018ACA0(pp, *list++);
    **pp = 0;
}
