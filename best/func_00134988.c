int func_0010B378(int,void*); int func_0010C7E8(int,int,int,int); int func_0011BA18(int); void func_0011CEF0(int,int,int); void func_0011E420(int,int); void func_0014D240(int); int func_0014D270(int);
extern char func_001B9FD8[],func_001BCB38[],func_001C5078[],jtbl_004C006C[];
extern int D_010CE2B0[], D_010CE2D8[], D_010CE2C8[];
#define G(base,off) (*(int*)(base+off))
int func_00134988(int x){
    int i; int *obj = D_010CE2B0;
    func_0011E420(0, D_010CE2D8[0]);
    func_0011CEF0(*obj, x, 4);
    if (x >= 0) {
        if (x < 7) {
            if (*obj) func_0014D240(*obj);
            for (i = 0; i < 2; i++) func_0010B378(D_010CE2C8[i], jtbl_004C006C+0xAD04);
            if (G(func_001BCB38,0xC24)) G(func_001C5078,0x2F4) = 1;
            else G(func_001C5078,0x2F4) = 0;
            func_0010B378(D_010CE2C8[G(func_001C5078,0x2F4)], func_001B9FD8+0x1748);
            {int a = func_0011BA18(2);
            return func_0010C7E8(0, a, func_0011BA18(3), 0);}
        } else if (x < 14) {
            if (D_010CE2B0[0]) return func_0014D270(D_010CE2B0[0]);
        }
    }
}
