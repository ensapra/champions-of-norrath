typedef struct {u8 pad[0xB80];u8 * volatile chars;u8 pad2[0xBF0-0xB84];s32 cnt;} Ctx;
s32 func_00159084(Ctx *c,u8 *out){s32 n=0,i=0,len;u32 code;if(c==0)return 0;if(c->cnt<=0)goto end;
for(i=0;i<c->cnt;i++,n++){if(out){*out=c->chars[i*36];out++;}code=*(u32*)(c->chars+i*36);if(code<0x80)continue;if(code<0xe0)len=1;else if(code<0xf0)len=2;else{len=3;if(code>=0xf8)len=0;}if(out){do{*out=c->chars[(i+1)*36];out++;i++;}while(--len);}else i+=len;}
end:if(out)*out=0;return n;}
