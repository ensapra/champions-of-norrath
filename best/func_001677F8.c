typedef struct{u64 a,b,c,d;} R;
extern void func_0016FEAC(void*,s32);
extern void func_00170584(void*,s32,...);
extern s32 D_0048041C;
#define CP(d,s) { u64 t0=(s)->a,t1=(s)->b,t2=(s)->c,t3=(s)->d; (d)->a=t0;(d)->b=t1;(d)->c=t2;(d)->d=t3; }
void func_001677F8(char*p){
    R*b=(R*)(p+0x920);
    u32 i;
    R *s,*d;
    func_0016FEAC(p+0xB40,25);
    func_00170584(p+0xB50,0,0x9B,5,0x9C,1,0x9D,0,0x9E,0,0x9F,*(s32*)(p+0x5DC),0xA0,0,0xA1,1,0xA2,D_0048041C,0x67,0,0);
    for(i=0;i<12;i++){
        func_00170584((char*)(b+i)+0x240,1,0);
        func_00170584((char*)(b+i)+0x250,5,0);
    }
    s=b+17;d=b+56;
    do{CP(d,s);s++;d++;}while(s!=b+30);
    s=b+56;d=b+43;
    do{CP(d,s);s++;d++;}while(s!=b+69);
    s=b+43;d=b+30;
    do{CP(d,s);s++;d++;}while(s!=b+56);
}
