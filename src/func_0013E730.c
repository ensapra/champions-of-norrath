s32 D_00484538;
void func_00138758(void *, s32, s32 *);
void func_00138900(void *, s32);
s32 func_001B1B68(void *, s32);

s32 func_0013BA30(void *a, void *b)
{
    s32 scratch[0x2c];
    s32 i = 0, total = 0;
    s32 n;
    func_00138758(a, *(s32 *)((u8 *)b + 4), &scratch[0x28]);
    func_00138900(scratch, scratch[0x28]);
    n = D_00484538;
    if (n > 0) {
        do {
            total += func_001B1B68(scratch, i);
            i++;
        } while (i < (n = D_00484538));
    }
    return total;
}

s16 D_00486850[4];
void func_0013DE48(s32 **arg0) {
s32 *p=*arg0,*r1; s16*r2; s32 i,t0,t1,t2,t3;
*p++=0x6C03C000;
t0=D_00486850[0];((s16*)p)[44]=t0;
*arg0=(s32*)((char*)p+0x64);
t1=D_00486850[1];((s16*)p)[45]=t1;
p[24]=0x14000024;p[13]=0x6D058000;
t2=D_00486850[2];((s16*)p)[46]=t2;p[12]=0x14000010;
t3=D_00486850[3];((s16*)p)[47]=t3;
r1=p;r2=(s16*)((char*)p+0x38);i=3;
do {i--;r2[0]=0;r2[1]=0;r2[2]=0;r2[3]=0;r2+=4;r1[0]=0;r1[4]=0;r1[8]=0;r1++;}while(i>=0);
}

void func_0013EAC0(f32);

void func_0013E6F0(void)
{
    D_00483AAC = 0;
    func_0013EAC0(1.0f);
}

#define MAX(a, b) ({ s32 _a = (a); s32 _b = (b); _a > _b ? _a : _b; })

void func_0013E730(s16 *in)
{
    u8 *t = D_004F4060;
    D_00486850[0] = MAX(t[0x30] + in[0], 0);
    D_00486850[1] = MAX(t[0x31] + in[1], 0);
    D_00486850[2] = MAX(t[0x32] + in[2], 0);
    D_00486850[3] = MAX(t[0x33] + in[3], 0);
}
