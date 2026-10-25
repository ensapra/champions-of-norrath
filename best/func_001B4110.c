s32 CreateSema(void*,u32,void*); s32 DeleteSema(s32); s32 WaitSema(s32); void func_001AFE98(void*,s32); s32 func_001B08B0(void*,s32,s32,void*,s32,s32,s32,s32,s32); void func_001B1538(s32); void func_001B1568(void); void func_001B1668(void);
extern u8 func_01000000[]; extern u8 func_01109848[]; extern u8 jtbl_004C006C[];
typedef struct {u8 pad[0xC]; u8 name[0x400]; u8 pad2[4]; u8 data[0x400]; u32 count; s32 id; u32 size; s32 sema; u32 pad3;} Req;
s32 func_001B4110(u8 *name,s32 id,u8 *data,u32 len,s32 arg4,u32 max) {
 Req *r; s32 i,ok,sema,attr[9]; u8 ch; r=(Req*)(func_01000000+0x109800); i=0;
 func_001B1538(0x17); if(*(s32*)(jtbl_004C006C+0x3F30)==0) func_001B1668();
 ch=*name; r->name[0]=ch;
 if((ch<<24)!=0) {ok=len<0x401; i=1; while(i<0x400){ch=name[i];r->name[i]=ch;if((ch<<24)==0)break;i++;}}
 else ok=len<0x401;
 if(i==0x400) r->name[0x3ff]=0;
 if(!ok || max>=0x401){func_001B1568();return -0x16;}
 if(len != 0) for(i=0;i<len;i++) r->data[i]=data[i];
 r->count=len;r->id=id; attr[1]=1;attr[2]=0;attr[5]=0;
 sema=CreateSema(attr,0,0); r->size=max; r->pad3=arg4; r->sema=sema; func_001AFE98(func_01000000+0x109800,0x81c);
 if(func_001B08B0(func_01109848+0x16b8,0x17,0,func_01000000+0x109800,0x81c,(s32)(func_01109848+0xbf8),4,0,0)<0){DeleteSema(sema);func_001B1568();return -0xb;}
 i=*(s32*)((u32)(func_01109848+0xbf8)|0x20000000);func_001B1568();
 if(!i){DeleteSema(sema);return -0xb;} WaitSema(sema);DeleteSema(sema);return attr[8];
}
