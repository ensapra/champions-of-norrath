extern void func_00104F30(int);
extern void func_00106E30(int, int);
extern void func_001389A0(int);
extern void func_00139550(int, int);
extern void func_0014B6F4(int);
extern int func_001523D0(int);
extern void func_00152520(void);
extern int D_001BB6C4[];
extern int D_001BD8AC[];
extern int D_010CE318[];
extern int D_010CE320[];

static inline void cleanup(int *p) {
    if (func_001523D0(D_001BD8AC[0]) == *p) func_00152520();
    func_0014B6F4(*p);
    func_00104F30(*p);
    func_00106E30(0, *p);
    func_00106E30(1, *p);
    if (D_001BB6C4[0] == *p) D_001BB6C4[0] = 0;
    func_001389A0(*p);
    *p = 0;
}

int func_001354C0(int *a) {
    int i = 0;
    int *p;
    switch (a[4]) {
    case 1:
        func_00139550(0xFF, 0x28);
        return 0;
    case 2:
        p = D_010CE320;
        do {
            if (*p) cleanup(p);
            i++;
            p++;
        } while (i < 3);
        return 0;
    case 5:
        if (D_010CE318[0]) cleanup(D_010CE318);
        return 1;
    }
    return 0;
}
