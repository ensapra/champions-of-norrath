extern s32 D_001BD968[],D_001BD96C[];
void func_00117710(s32*a,s32*b){*a=*D_001BD968;*b=*D_001BD96C;}
void func_001176F8(s32 a,s32 b){*D_001BD968=a;*D_001BD96C=b;}
typedef struct __attribute__((packed)){u64 a,b,c,d;} P32;
typedef struct {P32*data;s32 cap,unk,len,grow;} Arr;
void ovl_ntgui2_func_00117778(void*);
void func_00117848(void*v,void*src){s32 base,off;volatile s32*p=v;if(p[3]>=p[1])ovl_ntgui2_func_00117778(v);base=p[0];off=p[3]<<5;*(P32*)(base+off)=*(P32*)src;p[3]++;}
void func_00117730(Arr*,s32,s32);
Arr func_00117B38(Arr*src,s32 start,s32 end){Arr tmp;s32 i;func_00117730(&tmp,end-start+1,src->grow);for(i=start;i<=end;i++)func_00117848(&tmp,&src->data[i]);return tmp;}
