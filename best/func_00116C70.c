typedef struct{u8 x[0x3e0];} O;
void *func_001441B8(s32);
s32 func_00194498(void*,void*);
void *func_00116C70(O*a){
    O*b=func_001441B8(0x3e0);
    if(!b)return 0;
    *b = *a;
    func_00194498(b,a);
    func_00194498((char*)b+4,(char*)a+4);
    func_00194498((char*)b+8,(char*)a+8);
    return b;
}
