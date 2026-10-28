typedef struct { s32 id; long p; } E;
void func_0014CBF4(s32,E*,s32);
void func_0016DB4C(u8 *a){E e[64];s32 i,f,n,q,next,off,ok;u8 *tab;s32 id0,id1;long p0,p1;
i=0;if(*(s32*)(a+0x9C4)>0){loop:q=i<<12;n=*(volatile s32*)(a+0x9C4);f=*(s32*)(a+0x928);if(*(s32*)(a+0x990)==0)ok=f>=q/n;else ok=f>=q/(n-1);next=i+1;off=i*4;tab=*(u8**)(a+0x980);if(*(s32*)(a+0x928)!=0&&ok){p0=(s32)(a+0x960);id0=0x6A;id1=0x39;p1=(s32)(a+0x9A0);}else{id0=0x6A;p0=(s32)(a+0x970);id1=0x39;p1=(s32)(a+0x9B0);}e[0].p=p0;e[0].id=id0;e[1].p=p1;e[1].id=id1;func_0014CBF4(*(s32*)(off+tab),e,2);i=next;if(i<*(s32*)(a+0x9C4))goto loop;}}
