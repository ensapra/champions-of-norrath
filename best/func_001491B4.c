s32 D_0047FA98;
s32 func_0014B5E4(s32,s32,s32,s32,s32);
s32 func_0014947C(s32 a,s32 b,s32 c,s32 d){return func_0014B5E4(D_0047FA98,a,b,c,d);}
s32 func_00149314(s8 **a,s8 *b){s8 *p=*a;if(b==p)return -1;do{--p;if(*p>=0)break;if((u8)((u8)*p+0x40)<0x38)break;}while(b!=p);*a=p;return 0;}
void func_001A24AC(void*,const void*,s32);
s32 func_001491B4(u8 **a,s32 b){s32 i=0; s32 v; if(!b){u8 c=*(u8*)0; **a=c;(*a)++;}v=b;if(((u8*)&v)[0]==0){do{i++;}while(((u8*)&v)[i]==0);}{s32 n=4; n-=i;func_001A24AC(*a,(u8*)&v+i,n);*a+=n;return n;}}
s32 func_0014924C(void*,s32*);
s32 func_0014918C(void *a){s32 v; s32 r=func_0014924C(a,&v);if(r)r=v;return r;}
