extern void func_001C7A00(s8,s8,s8);
extern void func_001C5DE0(s8,s8,s32,s64);
extern void func_002D70D0(char*,s8,s8,u8);
extern void func_00135758(s8,s32,s32);
extern s32 func_001D38B0(void);
extern void ovl_ntgui2_func_0017DDB0(s8);
extern void func_001D0900(s32);
extern void func_0021C318(s32);
extern s32 func_001353A8(s32);
extern void func_00191868(void*,void*);
extern s32 func_001671F8(char*);
extern void func_001918D8(void*,s32);
extern void func_001C7600(void*,s32,s32,s32);
extern void func_00135190(s8);
extern void func_00304640(void*,void*);
extern void func_0017FF18(void);
extern s32 func_0024ADB8(s32);
extern void func_0024A5D0(s32);
extern void func_001A2740(void*);
extern char D_0034B660[];
extern char D_00408600[];
extern char D_0046A590[];
extern char D_0046A5C8[];
extern f32 D_0048060C;
s32 D_00483F14; s32 D_00483F1C; s8 D_00483F3D; s8 D_00484300;
void func_001C1CC8(s8 *arg0) {
 s8 *p=arg0+1; s8 op=p[-1];
 switch(op) {
 case 0: p++; {s8 a=p[-1];p++; s8 b=p[-1]; func_001C7A00(a,b,*p);} break;
 case 1: p++; {s8 a=p[-1];p++;s8 b=p[-1];p+=5; func_001C5DE0(a,b,*(s32*)(p-4),*(s64*)p);} break;
 case 2: p++; {s8 i=p[-1];s8 busy=*p; u8 *timer=(u8*)D_00408600+i*0x5DB0+0x5DA0; void **ent=(void**)(D_00408600+i*0x5DB0+0x5570);func_002D70D0(D_0046A590,i,busy,*timer); if(*ent){if(busy){*(s32*)((char*)*ent+12)|=0x400000;*timer=0;if(busy>=2) *(s32*)((char*)*ent+12)|=0x800000;}else{func_00135758(i,60,240);*timer=10;*(s32*)((char*)*ent+12)&=0xFF7FFFFF;}}}break;
 case 3: if(!func_001D38B0()){ovl_ntgui2_func_0017DDB0(*p);if(D_00483F3D)func_001D0900(0);}break;
 case 4: func_0021C318(*(s32*)(p+3));break;
 case 5: {s8 i=*arg0; if(!func_001353A8(i)){void **e=(void**)(D_00408600+i*0x5DB0+0x5570); if(*e){*(s32*)((char*)*e+12)&=0xFFBFFFFF;if(*(f32*)(D_00408600+i*0x5DB0+0xAC)>0) func_001A2740(*e);} func_00191868(__builtin_frame_address(0),(char*)D_00408600+i*0x5DB0);func_001918D8(__builtin_frame_address(0),func_001671F8(D_0046A5C8));func_001C7600(__builtin_frame_address(0),300,-1,0);func_00135190(i);}break;}
 case 6: func_00304640(D_0034B660,p); D_0034B660[0x50]=-1;func_0017FF18();D_00483F1C=60;D_00483F14=0;D_00484300=0;if(func_0024ADB8(0)&0x40)func_0024A5D0(0);break;
 }
}
