extern s32 func_00143D10(s32);extern void func_0015A380(void*,void*);extern s32 func_00165DC0(void*,void*);extern s32 func_00304640(void*,s32);
extern f32 D_0047FDA0;extern f32 D_0047FDA4;
s32 func_0014B808(char*obj,char*p){
char*start=p;s32 x,y,z;s8 mode,a,b,c;s16 d;f32 v[4];
p+=4;x=func_00143D10(*(s32*)(p-4));
p+=4;y=func_00143D10(*(s32*)(p-4));
p+=4;z=func_00143D10(*(s32*)(p-4));
func_00304640(obj+0x54,x);func_00304640(obj+0x64,y);func_00304640(obj+0xA4,z);
*(s32*)(obj+0xC)|=0x1000;
p+=1;mode=p[-1];
if(mode==-1){p+=11;*(s64*)(obj+0xE8)=*(s64*)(p-8);p+=1;}else *(s64*)(obj+0xE8)=1LL<<mode;
p+=1;a=p[-1];p+=1;b=p[-1];p+=1;c=p[-1];p+=2;d=*(s16*)(p-2);
v[0]=a*D_0047FDA0;v[1]=b*D_0047FDA0;v[2]=c*D_0047FDA0;v[3]=d*D_0047FDA4;
func_0015A380(obj+0x110,v);
p+=2;*(f32*)(obj+0x134)=*(s16*)(p-2);
p+=2;*(f32*)(obj+0x138)=*(s16*)(p-2);
p+=2;*(f32*)(obj+0x13C)=*(s16*)(p-2);
*(s32*)(obj+0x4C)=func_00165DC0(obj+0x54,obj+0x64);
*(s32*)(obj+0x50)=func_00165DC0(obj+0x54,obj+0xA4);
return p-start;}
